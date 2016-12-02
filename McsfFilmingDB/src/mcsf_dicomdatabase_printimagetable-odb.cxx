// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "mcsf_dicomdatabase_printimagetable-odb.hxx"

#include <cstring> // std::memcpy

#include <odb/cache-traits.hxx>
#include <odb/schema-catalog-impl.hxx>
#include <odb/details/unused.hxx>
#include <odb/details/shared-ptr.hxx>

#include <odb/mysql/traits.hxx>
#include <odb/mysql/database.hxx>
#include <odb/mysql/transaction.hxx>
#include <odb/mysql/connection.hxx>
#include <odb/mysql/statement.hxx>
#include <odb/mysql/statement-cache.hxx>
#include <odb/mysql/object-statements.hxx>
#include <odb/mysql/container-statements.hxx>
#include <odb/mysql/exceptions.hxx>
#include <odb/mysql/result.hxx>
#include <odb/mysql/enum.hxx>

namespace odb
{
  // PrintImageTable
  //

  const mysql::query_column<
    mysql::value_traits< ::std::string, mysql::id_string >::query_type,
    mysql::id_string >
  access::object_traits< ::PrintImageTable >::query_columns::Pk (
    "_.`Pk`");

  const mysql::query_column<
    mysql::value_traits< int, mysql::id_long >::query_type,
    mysql::id_long >
  access::object_traits< ::PrintImageTable >::query_columns::FilmID (
    "_.`FilmID`");

  const mysql::query_column<
    mysql::value_traits< ::std::string, mysql::id_string >::query_type,
    mysql::id_string >
  access::object_traits< ::PrintImageTable >::query_columns::Path (
    "_.`Path`");

  const mysql::query_column<
    mysql::value_traits< int, mysql::id_long >::query_type,
    mysql::id_long >
  access::object_traits< ::PrintImageTable >::query_columns::ImagePosotion (
    "_.`ImagePosotion`");

  const mysql::query_column<
    mysql::value_traits< ::PrintImageTable::DATE_BOOST, mysql::id_date >::query_type,
    mysql::id_date >
  access::object_traits< ::PrintImageTable >::query_columns::CreateDate (
    "_.`CreateDate`");

  const mysql::query_column<
    mysql::value_traits< ::PrintImageTable::TIME_BOOST, mysql::id_time >::query_type,
    mysql::id_time >
  access::object_traits< ::PrintImageTable >::query_columns::CreateTime (
    "_.`CreateTime`");

  const mysql::query_column<
    mysql::value_traits< int, mysql::id_long >::query_type,
    mysql::id_long >
  access::object_traits< ::PrintImageTable >::query_columns::HaveUsed (
    "_.`HaveUsed`");

  access::object_traits< ::PrintImageTable >::id_type
  access::object_traits< ::PrintImageTable >::
  id (const image_type& i)
  {
    id_type id;
    mysql::value_traits<
        ::std::string,
        mysql::id_string >::set_value (
      id,
      i.m_Pk_value,
      i.m_Pk_size,
      i.m_Pk_null);

    return id;
  }

  bool access::object_traits< ::PrintImageTable >::
  grow (image_type& i, my_bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // m_Pk
    //
    if (t[0UL])
    {
      i.m_Pk_value.capacity (i.m_Pk_size);
      grew = true;
    }

    // m_FilmID
    //
    t[1UL] = 0;

    // m_Path
    //
    if (t[2UL])
    {
      i.m_Path_value.capacity (i.m_Path_size);
      grew = true;
    }

    // m_ImagePosotion
    //
    t[3UL] = 0;

    // m_CreateDate
    //
    t[4UL] = 0;

    // m_CreateTime
    //
    t[5UL] = 0;

    // m_HaveUsed
    //
    t[6UL] = 0;

    return grew;
  }

  void access::object_traits< ::PrintImageTable >::
  bind (MYSQL_BIND* b, image_type& i, bool out)
  {
    ODB_POTENTIALLY_UNUSED (out);

    std::size_t n (0);

    // m_Pk
    //
    b[n].buffer_type = MYSQL_TYPE_STRING;
    b[n].buffer = i.m_Pk_value.data ();
    b[n].buffer_length = static_cast<unsigned long> (
      i.m_Pk_value.capacity ());
    b[n].length = &i.m_Pk_size;
    b[n].is_null = &i.m_Pk_null;
    n++;

    // m_FilmID
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.m_FilmID_value;
    b[n].is_null = &i.m_FilmID_null;
    n++;

    // m_Path
    //
    b[n].buffer_type = MYSQL_TYPE_STRING;
    b[n].buffer = i.m_Path_value.data ();
    b[n].buffer_length = static_cast<unsigned long> (
      i.m_Path_value.capacity ());
    b[n].length = &i.m_Path_size;
    b[n].is_null = &i.m_Path_null;
    n++;

    // m_ImagePosotion
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.m_ImagePosotion_value;
    b[n].is_null = &i.m_ImagePosotion_null;
    n++;

    // m_CreateDate
    //
    b[n].buffer_type = MYSQL_TYPE_DATE;
    b[n].buffer = &i.m_CreateDate_value;
    b[n].is_null = &i.m_CreateDate_null;
    n++;

    // m_CreateTime
    //
    b[n].buffer_type = MYSQL_TYPE_TIME;
    b[n].buffer = &i.m_CreateTime_value;
    b[n].is_null = &i.m_CreateTime_null;
    n++;

    // m_HaveUsed
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.m_HaveUsed_value;
    b[n].is_null = &i.m_HaveUsed_null;
    n++;
  }

  void access::object_traits< ::PrintImageTable >::
  bind (MYSQL_BIND* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].buffer_type = MYSQL_TYPE_STRING;
    b[n].buffer = i.id_value.data ();
    b[n].buffer_length = static_cast<unsigned long> (
      i.id_value.capacity ());
    b[n].length = &i.id_size;
    b[n].is_null = &i.id_null;
  }

  bool access::object_traits< ::PrintImageTable >::
  init (image_type& i, const object_type& o)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);

    bool grew (false);

    // m_Pk
    //
    {
      bool is_null;
      std::size_t size (0);
      std::size_t cap (i.m_Pk_value.capacity ());
      mysql::value_traits<
          ::std::string,
          mysql::id_string >::set_image (
        i.m_Pk_value,
        size,
        is_null,
        o.m_Pk);
      i.m_Pk_size = static_cast<unsigned long> (size);
      grew = grew || (cap != i.m_Pk_value.capacity ());
      i.m_Pk_null = is_null;
    }

    // m_FilmID
    //
    {
      bool is_null;
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.m_FilmID_value, is_null, o.m_FilmID);
      i.m_FilmID_null = is_null;
    }

    // m_Path
    //
    {
      bool is_null;
      std::size_t size (0);
      std::size_t cap (i.m_Path_value.capacity ());
      mysql::value_traits<
          ::std::string,
          mysql::id_string >::set_image (
        i.m_Path_value,
        size,
        is_null,
        o.m_Path);
      i.m_Path_size = static_cast<unsigned long> (size);
      grew = grew || (cap != i.m_Path_value.capacity ());
      i.m_Path_null = is_null;
    }

    // m_ImagePosotion
    //
    {
      bool is_null;
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.m_ImagePosotion_value, is_null, o.m_ImagePosotion);
      i.m_ImagePosotion_null = is_null;
    }

    // m_CreateDate
    //
    {
      bool is_null;
      mysql::value_traits<
          ::PrintImageTable::DATE_BOOST,
          mysql::id_date >::set_image (
        i.m_CreateDate_value, is_null, o.m_CreateDate);
      i.m_CreateDate_null = is_null;
    }

    // m_CreateTime
    //
    {
      bool is_null;
      mysql::value_traits<
          ::PrintImageTable::TIME_BOOST,
          mysql::id_time >::set_image (
        i.m_CreateTime_value, is_null, o.m_CreateTime);
      i.m_CreateTime_null = is_null;
    }

    // m_HaveUsed
    //
    {
      bool is_null;
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.m_HaveUsed_value, is_null, o.m_HaveUsed);
      i.m_HaveUsed_null = is_null;
    }

    return grew;
  }

  void access::object_traits< ::PrintImageTable >::
  init (object_type& o, const image_type& i, database& db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // m_Pk
    //
    mysql::value_traits<
        ::std::string,
        mysql::id_string >::set_value (
      o.m_Pk,
      i.m_Pk_value,
      i.m_Pk_size,
      i.m_Pk_null);

    // m_FilmID
    //
    mysql::value_traits<
        int,
        mysql::id_long >::set_value (
      o.m_FilmID, i.m_FilmID_value, i.m_FilmID_null);

    // m_Path
    //
    mysql::value_traits<
        ::std::string,
        mysql::id_string >::set_value (
      o.m_Path,
      i.m_Path_value,
      i.m_Path_size,
      i.m_Path_null);

    // m_ImagePosotion
    //
    mysql::value_traits<
        int,
        mysql::id_long >::set_value (
      o.m_ImagePosotion, i.m_ImagePosotion_value, i.m_ImagePosotion_null);

    // m_CreateDate
    //
    mysql::value_traits<
        ::PrintImageTable::DATE_BOOST,
        mysql::id_date >::set_value (
      o.m_CreateDate, i.m_CreateDate_value, i.m_CreateDate_null);

    // m_CreateTime
    //
    mysql::value_traits<
        ::PrintImageTable::TIME_BOOST,
        mysql::id_time >::set_value (
      o.m_CreateTime, i.m_CreateTime_value, i.m_CreateTime_null);

    // m_HaveUsed
    //
    mysql::value_traits<
        int,
        mysql::id_long >::set_value (
      o.m_HaveUsed, i.m_HaveUsed_value, i.m_HaveUsed_null);
  }

  void access::object_traits< ::PrintImageTable >::
  init (id_image_type& i, const id_type& id)
  {
    bool grew (false);
    {
      bool is_null;
      std::size_t size (0);
      std::size_t cap (i.id_value.capacity ());
      mysql::value_traits<
          ::std::string,
          mysql::id_string >::set_image (
        i.id_value,
        size,
        is_null,
        id);
      i.id_size = static_cast<unsigned long> (size);
      grew = grew || (cap != i.id_value.capacity ());
      i.id_null = is_null;
    }


    if (grew)
      i.version++;
  }

  struct access::object_traits< ::PrintImageTable >::container_statement_cache_type
  {
    container_statement_cache_type (mysql::connection&)
    {
    }
  };

  const char* const access::object_traits< ::PrintImageTable >::persist_statement =
  "INSERT INTO `PrintImageTable` ("
  "`Pk`,"
  "`FilmID`,"
  "`Path`,"
  "`ImagePosotion`,"
  "`CreateDate`,"
  "`CreateTime`,"
  "`HaveUsed`"
  ") VALUES (?,?,?,?,?,?,?)";

  const char* const access::object_traits< ::PrintImageTable >::find_statement =
  "SELECT "
  "_.`Pk`,"
  "_.`FilmID`,"
  "_.`Path`,"
  "_.`ImagePosotion`,"
  "_.`CreateDate`,"
  "_.`CreateTime`,"
  "_.`HaveUsed`"
  " FROM `PrintImageTable` AS _"
  " WHERE _.`Pk` = ?";

  const char* const access::object_traits< ::PrintImageTable >::update_statement =
  "UPDATE `PrintImageTable` SET "
  "`Pk` = ?,"
  "`FilmID` = ?,"
  "`Path` = ?,"
  "`ImagePosotion` = ?,"
  "`CreateDate` = ?,"
  "`CreateTime` = ?,"
  "`HaveUsed` = ?"
  " WHERE `Pk` = ?";

  const char* const access::object_traits< ::PrintImageTable >::erase_statement =
  "DELETE FROM `PrintImageTable`"
  " WHERE `Pk` = ?";

  const char* const access::object_traits< ::PrintImageTable >::query_clause =
  "SELECT "
  "_.`Pk`,"
  "_.`FilmID`,"
  "_.`Path`,"
  "_.`ImagePosotion`,"
  "_.`CreateDate`,"
  "_.`CreateTime`,"
  "_.`HaveUsed`"
  " FROM `PrintImageTable` AS _"
  " ";

  void access::object_traits< ::PrintImageTable >::
  persist (database&, const object_type& obj)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());
    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());
    image_type& im (sts.image ());
    binding& imb (sts.in_image_binding ());

    if (init (im, obj))
      im.version++;

    if (im.version != sts.in_image_version () || imb.version == 0)
    {
      bind (imb.bind, im, false);
      sts.in_image_version (im.version);
      imb.version++;
    }

    insert_statement& st (sts.persist_statement ());
    if (!st.execute ())
      throw object_already_persistent ();
  }

  void access::object_traits< ::PrintImageTable >::
  update (database&, const object_type& obj)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());
    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, obj.m_Pk);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.in_image_binding ());

    if (init (im, obj))
      im.version++;

    if (im.version != sts.in_image_version () || imb.version == 0)
    {
      bind (imb.bind, im, false);
      sts.in_image_version (im.version);
      imb.version++;
    }

    sts.update_statement ().execute ();
  }

  void access::object_traits< ::PrintImageTable >::
  erase (database&, const id_type& id)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());
    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    if (sts.erase_statement ().execute () != 1)
      throw object_not_persistent ();
  }

  access::object_traits< ::PrintImageTable >::pointer_type
  access::object_traits< ::PrintImageTable >::
  find (database& db, const id_type& id)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());
    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());
    object_statements< object_type >::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, id))
        return pointer_type ();
    }

    pointer_type p (
      access::object_factory< object_type, pointer_type  >::create ());
    pointer_traits< pointer_type >::guard pg (p);
    pointer_cache_traits< pointer_type >::insert_guard ig (
      pointer_cache_traits< pointer_type >::insert (db, id, p));
    object_type& obj (pointer_traits< pointer_type >::get_ref (p));

    if (l.locked ())
    {
      init (obj, sts.image (), db);
      load_ (sts, obj);
      sts.load_delayed ();
      l.unlock ();
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    pg.release ();
    return p;
  }

  bool access::object_traits< ::PrintImageTable >::
  find (database& db, const id_type& id, object_type& obj)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());
    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());
    object_statements< object_type >::auto_lock l (sts);

    if (l.locked ())
    {
      if (!find_ (sts, id))
        return false;
    }

    reference_cache_traits< object_type >::insert_guard ig (
      reference_cache_traits< object_type >::insert (db, id, obj));

    if (l.locked ())
    {
      init (obj, sts.image (), db);
      load_ (sts, obj);
      sts.load_delayed ();
      l.unlock ();
    }
    else
      sts.delay_load (id, obj, ig.position ());

    ig.release ();
    return true;
  }

  bool access::object_traits< ::PrintImageTable >::
  find_ (mysql::object_statements< object_type >& sts, const id_type& id)
  {
    using namespace mysql;

    id_image_type& i (sts.id_image ());
    init (i, id);

    binding& idb (sts.id_image_binding ());
    if (i.version != sts.id_image_version () || idb.version == 0)
    {
      bind (idb.bind, i);
      sts.id_image_version (i.version);
      idb.version++;
    }

    image_type& im (sts.image ());
    binding& imb (sts.out_image_binding ());

    if (im.version != sts.out_image_version () || imb.version == 0)
    {
      bind (imb.bind, im, true);
      sts.out_image_version (im.version);
      imb.version++;
    }

    select_statement& st (sts.find_statement ());
    st.execute ();
    select_statement::result r (st.fetch ());

    if (r == select_statement::truncated)
    {
      if (grow (im, sts.out_image_truncated ()))
        im.version++;

      if (im.version != sts.out_image_version ())
      {
        bind (imb.bind, im, true);
        sts.out_image_version (im.version);
        imb.version++;
        st.refetch ();
      }
    }

    st.free_result ();
    return r != select_statement::no_data;
  }

  template<>
  result< access::object_traits< ::PrintImageTable >::object_type >
  access::object_traits< ::PrintImageTable >::
  query< access::object_traits< ::PrintImageTable >::object_type > (
    database& db,
    const query_type& q)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());

    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());
    details::shared_ptr<select_statement> st;

    query_ (db, q, sts, st);

    details::shared_ptr<odb::result_impl<object_type> > r (
      new (details::shared) mysql::result_impl<object_type> (q, st, sts));
    return result<object_type> (r);
  }

  template<>
  result< const access::object_traits< ::PrintImageTable >::object_type >
  access::object_traits< ::PrintImageTable >::
  query< const access::object_traits< ::PrintImageTable >::object_type > (
    database& db,
    const query_type& q)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());

    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());
    details::shared_ptr<select_statement> st;

    query_ (db, q, sts, st);

    details::shared_ptr<odb::result_impl<const object_type> > r (
      new (details::shared) mysql::result_impl<const object_type> (q, st, sts));
    return result<const object_type> (r);
  }

  void access::object_traits< ::PrintImageTable >::
  query_ (database&,
          const query_type& q,
          mysql::object_statements< object_type >& sts,
          details::shared_ptr<mysql::select_statement>& st)
  {
    using namespace mysql;

    image_type& im (sts.image ());
    binding& imb (sts.out_image_binding ());

    if (im.version != sts.out_image_version () || imb.version == 0)
    {
      bind (imb.bind, im, true);
      sts.out_image_version (im.version);
      imb.version++;
    }

    st.reset (new (details::shared) select_statement (
                sts.connection (),
                query_clause + q.clause (),
                q.parameters_binding (),
                imb));
    st->execute ();
  }

  void access::object_traits< ::PrintImageTable >::
  create_schema (database& db)
  {
    ODB_POTENTIALLY_UNUSED (db);

    db.execute ("DROP TABLE IF EXISTS `PrintImageTable`");

    db.execute ("CREATE TABLE `PrintImageTable` ("
                "  `Pk` varchar(64) PRIMARY KEY,"
                "  `FilmID` int not null,"
                "  `Path` varchar(256),"
                "  `ImagePosotion` int,"
                "  `CreateDate` date,"
                "  `CreateTime` time,"
                "  `HaveUsed` int)"
                " ENGINE=InnoDB");
  }

  static const schema_catalog_entry
  schema_catalog_entry_PrintImageTable_ (
    "",
    &access::object_traits< ::PrintImageTable >::create_schema);
}

// Begin epilogue.
//
//
// End epilogue.

#include <odb/post.hxx>
