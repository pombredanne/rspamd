*** Settings ***
Suite Setup     Fuzzy Setup Encrypted Dyn2 Siphash
Suite Teardown  Rspamd Redis Teardown
Resource        lib.robot

*** Test Cases ***
Fuzzy Add
  Fuzzy Multimessage Add Test

Fuzzy Fuzzy
  Fuzzy Multimessage Fuzzy Test

Fuzzy Miss
  Fuzzy Multimessage Miss Test
