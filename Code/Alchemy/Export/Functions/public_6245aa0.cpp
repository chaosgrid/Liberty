#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245aa0);

#define public_6245ac2 _public_6245ac2

PROC_DECLARE(0x6245aa0, internal_6245aa0, public_6245aa0);
extern "C" NAKED register_t __cdecl internal_6245aa0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xFE077E05
        jne public_6245ac2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6245ac2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6245aa0)
    }
}

#undef public_6245ac2
