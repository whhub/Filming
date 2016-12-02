// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#ifndef MCSF_DICOMDATABASE_HGFILETABLE_ODB_HXX
#define MCSF_DICOMDATABASE_HGFILETABLE_ODB_HXX

#include <odb/version.hxx>

#if (ODB_VERSION != 10400UL)
#error ODB runtime version mismatch
#endif

#include <odb/pre.hxx>

// Begin prologue.
//
#include <odb/boost/version.hxx>
#include <boost/shared_ptr.hpp>
#include <odb/boost/smart-ptr/pointer-traits.hxx>
#include <odb/boost/unordered/container-traits.hxx>
#include <odb/boost/date-time/mysql/gregorian-traits.hxx>
#include <odb/boost/date-time/mysql/posix-time-traits.hxx>
//
// End prologue.

#include "mcsf_dicomdatabase_hgfiletable.h"

#include <memory>
#include <cstddef>

#include <odb/core.hxx>
#include <odb/traits.hxx>
#include <odb/pointer-traits.hxx>
#ifdef BOOST_TR1_MEMORY_HPP_INCLUDED
#  include <odb/tr1/pointer-traits.hxx>
#endif
#include <odb/container-traits.hxx>
#include <odb/result.hxx>

#include <odb/details/buffer.hxx>

#include <odb/mysql/version.hxx>
#include <odb/mysql/forward.hxx>
#include <odb/mysql/mysql-types.hxx>
#include <odb/mysql/query.hxx>

namespace odb
{
  // HGfileTable
  //
  template <>
  class access::object_traits< ::HGfileTable >
  {
    public:
    typedef ::HGfileTable object_type;
    typedef ::boost::shared_ptr< ::HGfileTable > pointer_type;
    typedef int id_type;

    struct id_image_type
    {
      int id_value;
      my_bool id_null;

      std::size_t version;
    };

    struct image_type
    {
      // m_HG_FileID
      //
      int m_HG_FileID_value;
      my_bool m_HG_FileID_null;

      // m_SP_FileID
      //
      int m_SP_FileID_value;
      my_bool m_SP_FileID_null;

      // m_HG_FIlePath
      //
      details::buffer m_HG_FIlePath_value;
      unsigned long m_HG_FIlePath_size;
      my_bool m_HG_FIlePath_null;

      // m_CreateDate
      //
      MYSQL_TIME m_CreateDate_value;
      my_bool m_CreateDate_null;

      // m_CreateTime
      //
      MYSQL_TIME m_CreateTime_value;
      my_bool m_CreateTime_null;

      std::size_t version;
    };

    struct query_columns
    {
      // HG_FileID
      //
      static const mysql::query_column<
        mysql::value_traits< int, mysql::id_long >::query_type,
        mysql::id_long >
      HG_FileID;

      // SP_FileID
      //
      static const mysql::query_column<
        mysql::value_traits< int, mysql::id_long >::query_type,
        mysql::id_long >
      SP_FileID;

      // HG_FIlePath
      //
      static const mysql::query_column<
        mysql::value_traits< ::std::string, mysql::id_string >::query_type,
        mysql::id_string >
      HG_FIlePath;

      // CreateDate
      //
      static const mysql::query_column<
        mysql::value_traits< ::HGfileTable::DATE_BOOST, mysql::id_date >::query_type,
        mysql::id_date >
      CreateDate;

      // CreateTime
      //
      static const mysql::query_column<
        mysql::value_traits< ::HGfileTable::TIME_BOOST, mysql::id_time >::query_type,
        mysql::id_time >
      CreateTime;
    };

    static id_type
    id (const object_type&);

    static id_type
    id (const image_type&);

    static bool
    grow (image_type&, my_bool*);

    static void
    bind (MYSQL_BIND*, image_type&, bool);

    static void
    bind (MYSQL_BIND*, id_image_type&);

    static bool
    init (image_type&, const object_type&);

    static void
    init (object_type&, const image_type&, database&);

    static void
    init (id_image_type&, const id_type&);

    typedef mysql::query query_base_type;

    struct query_type: query_base_type, query_columns
    {
      query_type ();
      query_type (const std::string&);
      query_type (const query_base_type&);
    };

    struct container_statement_cache_type;

    static const std::size_t in_column_count = 5UL;
    static const std::size_t out_column_count = 5UL;

    static const char* const persist_statement;
    static const char* const find_statement;
    static const char* const update_statement;
    static const char* const erase_statement;
    static const char* const query_clause;

    static void
    persist (database&, const object_type&);

    static void
    update (database&, const object_type&);

    static void
    erase (database&, const id_type&);

    static pointer_type
    find (database&, const id_type&);

    static bool
    find (database&, const id_type&, object_type&);

    template<typename T>
    static result<T>
    query (database&, const query_type&);

    static void
    create_schema (database&);

    public:
    static bool
    find_ (mysql::object_statements< object_type >&, const id_type&);

    static void
    load_ (mysql::object_statements< object_type >&, object_type&);

    static void
    query_ (database&,
            const query_type&,
            mysql::object_statements< object_type >&,
            details::shared_ptr< mysql::select_statement >&);
  };
}

#include "mcsf_dicomdatabase_hgfiletable-odb.ixx"

// Begin epilogue.
//
//
// End epilogue.

#include <odb/post.hxx>

#endif // MCSF_DICOMDATABASE_HGFILETABLE_ODB_HXX
