{.$DEFINE HOOK_INTERNAL_FUNCTIONS}   // hook internal functions.

{$IFDEF FPC}
  {$ASMMODE INTEL}
{$ELSE !FPC}

{$T-}

{$IF CompilerVersion >= 17.0}
  {$DEFINE DELPHI_2005_UP}
{$IFEND}

{$IF CompilerVersion >= 18.5}
  {$DEFINE DELPHI_2007_UP}
{$IFEND}

{$IF CompilerVersion >= 20}
  {$DEFINE DELPHI_2009_UP}
{$IFEND}

{$IF CompilerVersion >= 21}
  {$DEFINE DELPHI_2010_UP}
{$IFEND}

{$IF CompilerVersion >= 22}
  {$DEFINE DELPHI_XE_UP}
{$IFEND}

{$IF CompilerVersion >= 23}
  {$DEFINE DELPHI_XE2_UP}
{$IFEND}

{$IF CompilerVersion >= 33}
  {$DEFINE DELPHI_RIO_UP}
{$IFEND}

{$IFDEF DELPHI_2005_UP}
  {$DEFINE SUPPORTS_INLINE}
{$ENDIF}

{$IFDEF DELPHI_XE2_UP}
  {$DEFINE SUPPORTS_RTTI}
  {$DEFINE SUPPORTS_GENERICS}
  {$DEFINE RENAMED_NAMESPACE}
{$ENDIF}

{$ENDIF FPC}

