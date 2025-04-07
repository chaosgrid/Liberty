#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807cd0);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6807ced _public_6807ced

PROC_DECLARE(0x6807cd0, internal_6807cd0, public_6807cd0);
extern "C" NAKED register_t __cdecl internal_6807cd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp dword ptr ds : [esi+0x50], 0x14
        jl public_6807ced
        mov eax, dword ptr ss : [esp+8]
/*FIXUP push offset public_680dc68 @0x6807cdf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc68
        push eax
        call public_680a850
        add esp, 8
        public_6807ced : nop
        mov ecx, dword ptr ds : [esi+0x50]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+ecx*4], edx
        inc dword ptr ds : [esi+0x50]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807cd0)
    }
}

#undef public_6807ced
