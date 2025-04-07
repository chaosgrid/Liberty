#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e7a0);

#define public_622e7c2 _public_622e7c2

PROC_DECLARE(0x622e7a0, internal_622e7a0, public_622e7a0);
extern "C" NAKED register_t __cdecl internal_622e7a0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_622e7c2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x6C], eax
        xor eax, eax
        ret 0xC
        public_622e7c2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622e7a0)
    }
}

#undef public_622e7c2
