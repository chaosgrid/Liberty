#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245b00);

#define public_6245b1a _public_6245b1a

PROC_DECLARE(0x6245b00, internal_6245b00, public_6245b00);
extern "C" NAKED register_t __cdecl internal_6245b00()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF9A9D52
        jne public_6245b1a
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x64], ecx
        xor eax, eax
        ret 0xC
        public_6245b1a : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6245b00)
    }
}

#undef public_6245b1a
