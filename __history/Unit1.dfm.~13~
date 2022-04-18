object DataModule1: TDataModule1
  OldCreateOrder = False
  Height = 622
  Width = 875
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 'Provider=MSDASQL.1;Persist Security Info=False;Data Source=baza'
    LoginPrompt = False
    Left = 256
    Top = 24
  end
  object ADOQueryombor: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT id,'
      'barcode,'
      'product_name,'
      '`desc`,'
      '(SELECT name FROM category WHERE id=category) as category,'
      'list_price,'
      'min_price,'
      'volume,'
      '(SELECT name FROM type WHERE id=type) as type,'
      'warranty_date,'
      'supplier_id,'
      'date,'
      '`status`  FROM store WHERE `status`=1;')
    Left = 120
    Top = 88
  end
  object DataSourceombor: TDataSource
    DataSet = ADOQueryombor
    Left = 360
    Top = 88
  end
  object ADOQuery2mijoz: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select  * from mijoz')
    Left = 112
    Top = 176
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2mijoz
    Left = 360
    Top = 176
  end
  object ADOQueryCategory: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select  *  from category;')
    Left = 112
    Top = 248
  end
  object DataSourceCategory: TDataSource
    DataSet = ADOQueryCategory
    Left = 360
    Top = 248
  end
  object ADOQuerylogin: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from login')
    Left = 128
    Top = 336
  end
  object DataSourcelogin: TDataSource
    DataSet = ADOQuerylogin
    Left = 360
    Top = 336
  end
end
