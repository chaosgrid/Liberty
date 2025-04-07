#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d440f0);

#define public_6d44113 _public_6d44113

PROC_DECLARE(0x6d440f0, internal_6d440f0, public_6d440f0);
extern "C" NAKED register_t __cdecl internal_6d440f0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d44113
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d44113
        mov ecx, dword ptr ss : [esp+0xC]
        or dword ptr ds : [eax+8], 8
        mov dword ptr ds : [eax+0x10], ecx
        mov cx, word ptr ss : [esp+0x10]
        mov word ptr ds : [eax+0x14], cx
        public_6d44113 : nop
        ret 
        UNREACHABLE_TRAP(0x6d440f0)
    }
}

#undef public_6d44113
