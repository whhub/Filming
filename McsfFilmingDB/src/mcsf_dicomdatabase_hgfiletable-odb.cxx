// This file was generated by ODB, object-relational mapping (ORM)
// compiler for C++.
//

#include <odb/pre.hxx>

// Begin prologue.
//
//
// End prologue.

#include "mcsf_dicomdatabase_hgfiletable-odb.hxx"

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
  // HGfileTable
  //

  const mysql::query_column<
    mysql::value_traits< int, mysql::id_long >::query_type,
    mysql::id_long >
  access::object_traits< ::HGfileTable >::query_columns::HG_FileID (
    "_.`HG_FileID`");

  const mysql::query_column<
    mysql::value_traits< int, mysql::id_long >::query_type,
    mysql::id_long >
  access::object_traits< ::HGfileTable >::query_columns::SP_FileID (
    "_.`SP_FileID`");

  const mysql::query_column<
    mysql::value_traits< ::std::string, mysql::id_string >::query_type,
    mysql::id_string >
  access::object_traits< ::HGfileTable >::query_columns::HG_FIlePath (
    "_.`HG_FIlePath`");

  const mysql::query_column<
    mysql::value_traits< ::HGfileTable::DATE_BOOST, mysql::id_date >::query_type,
    mysql::id_date >
  access::object_traits< ::HGfileTable >::query_columns::CreateDate (
    "_.`CreateDate`");

  const mysql::query_column<
    mysql::value_traits< ::HGfileTable::TIME_BOOST, mysql::id_time >::query_type,
    mysql::id_time >
  access::object_traits< ::HGfileTable >::query_columns::CreateTime (
    "_.`CreateTime`");

  access::object_traits< ::HGfileTable >::id_type
  access::object_traits< ::HGfileTable >::
  id (const image_type& i)
  {
    id_type id;
    mysql::value_traits<
        int,
        mysql::id_long >::set_value (
      id, i.m_HG_FileID_value, i.m_HG_FileID_null);

    return id;
  }

  bool access::object_traits< ::HGfileTable >::
  grow (image_type& i, my_bool* t)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (t);

    bool grew (false);

    // m_HG_FileID
    //
    t[0UL] = 0;

    // m_SP_FileID
    //
    t[1UL] = 0;

    // m_HG_FIlePath
    //
    if (t[2UL])
    {
      i.m_HG_FIlePath_value.capacity (i.m_HG_FIlePath_size);
      grew = true;
    }

    // m_CreateDate
    //
    t[3UL] = 0;

    // m_CreateTime
    //
    t[4UL] = 0;

    return grew;
  }

  void access::object_traits< ::HGfileTable >::
  bind (MYSQL_BIND* b, image_type& i, bool out)
  {
    ODB_POTENTIALLY_UNUSED (out);

    std::size_t n (0);

    // m_HG_FileID
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.m_HG_FileID_value;
    b[n].is_null = &i.m_HG_FileID_null;
    n++;

    // m_SP_FileID
    //
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.m_SP_FileID_value;
    b[n].is_null = &i.m_SP_FileID_null;
    n++;

    // m_HG_FIlePath
    //
    b[n].buffer_type = MYSQL_TYPE_STRING;
    b[n].buffer = i.m_HG_FIlePath_value.data ();
    b[n].buffer_length = static_cast<unsigned long> (
      i.m_HG_FIlePath_value.capacity ());
    b[n].length = &i.m_HG_FIlePath_size;
    b[n].is_null = &i.m_HG_FIlePath_null;
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
  }

  void access::object_traits< ::HGfileTable >::
  bind (MYSQL_BIND* b, id_image_type& i)
  {
    std::size_t n (0);
    b[n].buffer_type = MYSQL_TYPE_LONG;
    b[n].is_unsigned = 0;
    b[n].buffer = &i.id_value;
    b[n].is_null = &i.id_null;
  }

  bool access::object_traits< ::HGfileTable >::
  init (image_type& i, const object_type& o)
  {
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (o);

    bool grew (false);

    // m_HG_FileID
    //
    {
      bool is_null;
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.m_HG_FileID_value, is_null, o.m_HG_FileID);
      i.m_HG_FileID_null = is_null;
    }

    // m_SP_FileID
    //
    {
      bool is_null;
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.m_SP_FileID_value, is_null, o.m_SP_FileID);
      i.m_SP_FileID_null = is_null;
    }

    // m_HG_FIlePath
    //
    {
      bool is_null;
      std::size_t size (0);
      std::size_t cap (i.m_HG_FIlePath_value.capacity ());
      mysql::value_traits<
          ::std::string,
          mysql::id_string >::set_image (
        i.m_HG_FIlePath_value,
        size,
        is_null,
        o.m_HG_FIlePath);
      i.m_HG_FIlePath_size = static_cast<unsigned long> (size);
      grew = grew || (cap != i.m_HG_FIlePath_value.capacity ());
      i.m_HG_FIlePath_null = is_null;
    }

    // m_CreateDate
    //
    {
      bool is_null;
      mysql::value_traits<
          ::HGfileTable::DATE_BOOST,
          mysql::id_date >::set_image (
        i.m_CreateDate_value, is_null, o.m_CreateDate);
      i.m_CreateDate_null = is_null;
    }

    // m_CreateTime
    //
    {
      bool is_null;
      mysql::value_traits<
          ::HGfileTable::TIME_BOOST,
          mysql::id_time >::set_image (
        i.m_CreateTime_value, is_null, o.m_CreateTime);
      i.m_CreateTime_null = is_null;
    }

    return grew;
  }

  void access::object_traits< ::HGfileTable >::
  init (object_type& o, const image_type& i, database& db)
  {
    ODB_POTENTIALLY_UNUSED (o);
    ODB_POTENTIALLY_UNUSED (i);
    ODB_POTENTIALLY_UNUSED (db);

    // m_HG_FileID
    //
    mysql::value_traits<
        int,
        mysql::id_long >::set_value (
      o.m_HG_FileID, i.m_HG_FileID_value, i.m_HG_FileID_null);

    // m_SP_FileID
    //
    mysql::value_traits<
        int,
        mysql::id_long >::set_value (
      o.m_SP_FileID, i.m_SP_FileID_value, i.m_SP_FileID_null);

    // m_HG_FIlePath
    //
    mysql::value_traits<
        ::std::string,
        mysql::id_string >::set_value (
      o.m_HG_FIlePath,
      i.m_HG_FIlePath_value,
      i.m_HG_FIlePath_size,
      i.m_HG_FIlePath_null);

    // m_CreateDate
    //
    mysql::value_traits<
        ::HGfileTable::DATE_BOOST,
        mysql::id_date >::set_value (
      o.m_CreateDate, i.m_CreateDate_value, i.m_CreateDate_null);

    // m_CreateTime
    //
    mysql::value_traits<
        ::HGfileTable::TIME_BOOST,
        mysql::id_time >::set_value (
      o.m_CreateTime, i.m_CreateTime_value, i.m_CreateTime_null);
  }

  void access::object_traits< ::HGfileTable >::
  init (id_image_type& i, const id_type& id)
  {
    {
      bool is_null;
      mysql::value_traits<
          int,
          mysql::id_long >::set_image (
        i.id_value, is_null, id);
      i.id_null = is_null;
    }
  }

  struct access::object_traits< ::HGfileTable >::container_statement_cache_type
  {
    container_statement_cache_type (mysql::connection&)
    {
    }
  };

  const char* const access::object_traits< ::HGfileTable >::persist_statement =
  "INSERT INTO `HGfileTable` ("
  "`HG_FileID`,"
  "`SP_FileID`,"
  "`HG_FIlePath`,"
  "`CreateDate`,"
  "`CreateTime`"
  ") VALUES (?,?,?,?,?)";

  const char* const access::object_traits< ::HGfileTable >::find_statement =
  "SELECT "
  "_.`HG_FileID`,"
  "_.`SP_FileID`,"
  "_.`HG_FIlePath`,"
  "_.`CreateDate`,"
  "_.`CreateTime`"
  " FROM `HGfileTable` AS _"
  " WHERE _.`HG_FileID` = ?";

  const char* const access::object_traits< ::HGfileTable >::update_statement =
  "UPDATE `HGfileTable` SET "
  "`HG_FileID` = ?,"
  "`SP_FileID` = ?,"
  "`HG_FIlePath` = ?,"
  "`CreateDate` = ?,"
  "`CreateTime` = ?"
  " WHERE `HG_FileID` = ?";

  const char* const access::object_traits< ::HGfileTable >::erase_statement =
  "DELETE FROM `HGfileTable`"
  " WHERE `HG_FileID` = ?";

  const char* const access::object_traits< ::HGfileTable >::query_clause =
  "SELECT "
  "_.`HG_FileID`,"
  "_.`SP_FileID`,"
  "_.`HG_FIlePath`,"
  "_.`CreateDate`,"
  "_.`CreateTime`"
  " FROM `HGfileTable` AS _"
  " ";

  void access::object_traits< ::HGfileTable >::
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

  void access::object_traits< ::HGfileTable >::
  update (database&, const object_type& obj)
  {
    using namespace mysql;

    connection& conn (mysql::transaction::current ().connection ());
    object_statements< object_type >& sts (
      conn.statement_cache ().find<object_type> ());

    id_image_type& i (sts.id_image ());
    init (i, obj.m_HG_FileID);

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

  void access::object_traits< ::HGfileTable >::
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

  access::object_traits< ::HGfileTable >::pointer_type
  access::object_traits< ::HGfileTable >::
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

  bool access::object_traits< ::HGfileTable >::
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

  bool access::object_traits< ::HGfileTable >::
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
  result< access::object_traits< ::HGfileTable >::object_type >
  access::object_traits< ::HGfileTable >::
  query< access::object_traits< ::HGfileTable >::object_type > (
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
  result< const access::object_traits< ::HGfileTable >::object_type >
  access::object_traits< ::HGfileTable >::
  query< const access::object_traits< ::HGfileTable >::object_type > (
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

  void access::object_traits< ::HGfileTable >::
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

  void access::object_traits< ::HGfileTable >::
  create_schema (database& db)
  {
    ODB_POTENTIALLY_UNUSED (db);

    db.execute ("DROP TABLE IF EXISTS `HGfileTable`");

    db.execute ("CREATE TABLE `HGfileTable` ("
                "  `HG_FileID` int not null PRIMARY KEY,"
                "  `SP_FileID` int,"
                "  `HG_FIlePath` varchar(256),"
                "  `CreateDate` date,"
                "  `CreateTime` time)"
                " ENGINE=InnoDB");
  }

  static const schema_catalog_entry
  schema_catalog_entry_HGfileTable_ (
    "",
    &access::object_traits< ::HGfileTable >::create_schema);
}

// Begin epilogue.
//
//
// End epilogue.

#include <odb/post.hxx>
