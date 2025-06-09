unity_dir = 'Unity/src'
mocks_dir = 'mocks'

test_inc = include_directories(
  unity_dir,
  '../src',
  '../include',
  mocks_dir,
  '../test/CMock/src'
)

# Sources for the addition tests
test_addition_sources = [
  'test_addition_runner.c',
  'test_addition.c',
  '../src/processing.c',
  '../src/uart.c',     
  unity_dir + '/unity.c',
]

# Sources for the processing_and_send tests (with mock)
test_processing_and_send_sources = [
  'test_processing_and_send_runner.c',
  'test_processing_and_send.c',
  '../src/processing.c',
  mocks_dir + '/mock_uart.c',
  unity_dir + '/unity.c',
  '../test/CMock/src/cmock.c',
]

# Build the addition test runner
test_addition_exe = executable(
  'test_addition_runner',
  test_addition_sources,
  include_directories: test_inc,
  install: false
)
test('addition', test_addition_exe)

# Build the processing_and_send test runner
test_processing_and_send_exe = executable(
  'test_processing_and_send_runner',
  test_processing_and_send_sources,
  include_directories: test_inc,
  install: false
)
test('processing_and_send', test_processing_and_send_exe)

if get_option('b_coverage')
  gcovr = find_program('gcovr', required: true)
  custom_target(
    'my-coverage-html',
    output: 'coverage.html',
    command: [
      gcovr, '-r', meson.source_root(),
      '--html', '--html-details', '-o', 'coverage.html'
    ],
    depends: [],
    build_by_default: false # Set to true to enable generation at every build
  )
endif