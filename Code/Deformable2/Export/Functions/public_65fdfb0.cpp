#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fdfb0);
CLANG_FORWARD_PROC_SYMBOL(public_65fdfd0);

PROC_DECLARE(0x65fdfb0, internal_65fdfb0, public_65fdfb0);
extern "C" NAKED register_t __cdecl internal_65fdfb0()
{
    __asm
    {
        call public_65fdfd0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_66014dc @0x65fdfbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66014dc
/*FIXUP push offset public_6602a68 @0x65fdfc0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6602a68
        push 0
        push eax
        call dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x65fdfb0)
    }
}
