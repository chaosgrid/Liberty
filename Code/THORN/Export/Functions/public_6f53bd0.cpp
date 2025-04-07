#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53bd0);

#define public_6f53bed _public_6f53bed

PROC_DECLARE(0x6f53bd0, internal_6f53bd0, public_6f53bd0);
extern "C" NAKED register_t __cdecl internal_6f53bd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [esi+0x50], 0x14
        jl public_6f53bed
        mov eax, dword ptr ss : [esp+8]
/*FIXUP push offset public_6f61338 @0x6f53bdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61338
        push eax
        call public_6f511c0
        add esp, 8
        public_6f53bed : nop
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+ecx*4], edx
        inc dword ptr ds : [esi+0x50]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53bd0)
    }
}

#undef public_6f53bed
