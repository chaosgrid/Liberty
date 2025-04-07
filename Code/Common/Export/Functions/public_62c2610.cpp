#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62c2610);
CLANG_FORWARD_PROC_SYMBOL(public_62c2650);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);

PROC_DECLARE(0x62c2610, internal_62c2610, public_62c2610);
extern "C" NAKED register_t __cdecl internal_62c2610()
{
    __asm
    {
        push esi
/*FIXUP push offset _public_62881d0 @0x62c2611*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62881d0
/*FIXUP push offset _public_62c2650 @0x62c2616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62c2650
        push 0x100
        mov esi, ecx
        push 8
        push esi
        call public_6391ef0
        mov dword ptr ds : [esi+0x800], 0
        mov dword ptr ds : [esi+0x804], 0x100
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62c2610)
    }
}
