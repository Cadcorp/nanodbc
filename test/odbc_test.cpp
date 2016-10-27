#include "catch.hpp"

#include "test/base_test_fixture.h"
#include <cstdio>
#include <cstdlib>

namespace
{
struct odbc_fixture : public base_test_fixture
{
    odbc_fixture()
        // connection string from command line or NANODBC_TEST_CONNSTR environment variable
        : base_test_fixture()
    {
        if (connection_string_.empty())
            connection_string_ = get_env("NANODBC_TEST_CONNSTR_ODBC");
    }

    virtual ~odbc_fixture() NANODBC_NOEXCEPT {}
};
}

TEST_CASE_METHOD(odbc_fixture, "test_driver", "[odbc][driver]")
{
    test_driver();
}

TEST_CASE_METHOD(odbc_fixture, "test_blob", "[odbc][blob]")
{
    test_blob();
}

TEST_CASE_METHOD(odbc_fixture, "test_catalog_list_catalogs", "[odbc][catalog][catalogs]")
{
    test_catalog_list_catalogs();
}

TEST_CASE_METHOD(odbc_fixture, "test_catalog_list_schemas", "[odbc][catalog][schemas]")
{
    test_catalog_list_schemas();
}

TEST_CASE_METHOD(odbc_fixture, "test_catalog_columns", "[odbc][catalog][columns]")
{
    test_catalog_columns();
}

TEST_CASE_METHOD(odbc_fixture, "test_catalog_primary_keys", "[odbc][catalog][primary_keys]")
{
    test_catalog_primary_keys();
}

TEST_CASE_METHOD(odbc_fixture, "test_catalog_tables", "[odbc][catalog][tables]")
{
    test_catalog_tables();
}

TEST_CASE_METHOD(odbc_fixture, "test_dbms_info", "[odbc][dmbs][metadata][info]")
{
    test_dbms_info();
}

TEST_CASE_METHOD(odbc_fixture, "test_get_info", "[odbc][dmbs][metadata][info]")
{
    test_get_info();
}

TEST_CASE_METHOD(odbc_fixture, "test_decimal_conversion", "[odbc][decimal][conversion]")
{
    test_decimal_conversion();
}

TEST_CASE_METHOD(odbc_fixture, "test_exception", "[odbc][exception]")
{
    test_exception();
}

TEST_CASE_METHOD(odbc_fixture, "test_execute_multiple_transaction", "[odbc][execute][transaction]")
{
    test_execute_multiple_transaction();
}

TEST_CASE_METHOD(odbc_fixture, "test_execute_multiple", "[odbc][execute]")
{
    test_execute_multiple();
}

TEST_CASE_METHOD(odbc_fixture, "test_integral", "[odbc][integral]")
{
    test_integral<odbc_fixture>();
}

TEST_CASE_METHOD(odbc_fixture, "test_move", "[odbc][move]")
{
    test_move();
}

TEST_CASE_METHOD(odbc_fixture, "test_null", "[odbc][null]")
{
    test_null();
}

TEST_CASE_METHOD(odbc_fixture, "test_nullptr_nulls", "[odbc][null]")
{
    test_nullptr_nulls();
}

TEST_CASE_METHOD(odbc_fixture, "test_result_iterator", "[odbc][iterator]")
{
    test_result_iterator();
}

TEST_CASE_METHOD(odbc_fixture, "test_simple", "[odbc]")
{
    test_simple();
}

TEST_CASE_METHOD(odbc_fixture, "test_string", "[odbc][string]")
{
    test_string();
}

TEST_CASE_METHOD(odbc_fixture, "test_string_vector", "[odbc][string]")
{
    test_string_vector();
}

TEST_CASE_METHOD(odbc_fixture, "batch_binary_test", "[odbc][binary]")
{
    batch_binary_test();
}

TEST_CASE_METHOD(odbc_fixture, "test_transaction", "[odbc][transaction]")
{
    test_transaction();
}

TEST_CASE_METHOD(odbc_fixture, "test_while_not_end_iteration", "[odbc][looping]")
{
    test_while_not_end_iteration();
}

TEST_CASE_METHOD(odbc_fixture, "test_while_next_iteration", "[odbc][looping]")
{
    test_while_next_iteration();
}
