#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623a9d0);

#define public_623a9f2 _public_623a9f2

PROC_DECLARE(0x623a9d0, internal_623a9d0, public_623a9d0);
extern "C" NAKED register_t __cdecl internal_623a9d0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_623a9f2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_623a9f2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623a9d0)
    }
}

#undef public_623a9f2
