require 'ffi'

module RegexTest
  extend FFI::Library
  ffi_lib "#{Rails.root}/lib/regex_test.so"
  attach_function :scan_name_for_whole_word, [:string, :string], :int
end


