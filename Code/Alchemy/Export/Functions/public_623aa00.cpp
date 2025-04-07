#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aa00);

#define public_623aa22 _public_623aa22

PROC_DECLARE(0x623aa00, internal_623aa00, public_623aa00);
extern "C" NAKED register_t __cdecl internal_623aa00()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_623aa22
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x68], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x6C], eax
        xor eax, eax
        ret 0xC
        public_623aa22 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623aa00)
    }
}

#undef public_623aa22
