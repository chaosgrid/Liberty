#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63705e0);
CLANG_FORWARD_PROC_SYMBOL(public_6374170);
CLANG_FORWARD_PROC_SYMBOL(public_6391cb0);

PROC_DECLARE(0x6391cb0, internal_6391cb0, public_6391cb0);
extern "C" NAKED register_t __cdecl internal_6391cb0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_63705e0
/*FIXUP push offset public_658b820 @0x6391cbb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_658b820
        push esi
        call public_6374170
        mov ecx, dword ptr ds : [public_658b824]
        add esp, 0xC
        inc ecx
        mov dword ptr ds : [public_658b824], ecx
        or dword ptr ds : [esi+0x50], 0x400
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6391cb0)
    }
}
