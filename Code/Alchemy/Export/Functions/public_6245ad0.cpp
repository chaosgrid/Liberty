#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245ad0);

#define public_6245aec _public_6245aec

PROC_DECLARE(0x6245ad0, internal_6245ad0, public_6245ad0);
extern "C" NAKED register_t __cdecl internal_6245ad0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF9A9D52
        jne public_6245aec
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x64]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_6245aec : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6245ad0)
    }
}

#undef public_6245aec
