#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9a41);
CLANG_FORWARD_PROC_SYMBOL(public_65d9b45);

#define public_65d9a4c _public_65d9a4c

PROC_DECLARE(0x65d9a41, internal_65d9a41, public_65d9a41);
extern "C" NAKED register_t __cdecl internal_65d9a41()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e7a54]
        test eax, eax
        je public_65d9a4c
        call eax
/*FIXUP public_65d9a4c : nop
        push offset public_65e3024 @0x65d9a4c*/
  FIXUP public_65d9a4c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3024
/*FIXUP push offset public_65e3010 @0x65d9a51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3010
        call public_65d9b45
/*FIXUP push offset public_65e300c @0x65d9a5b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e300c
/*FIXUP push offset public_65e3000 @0x65d9a60*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e3000
        call public_65d9b45
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x65d9a41)
    }
}

#undef public_65d9a4c
