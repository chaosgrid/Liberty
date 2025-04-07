#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_623f9bd _public_623f9bd
#define public_623f9d6 _public_623f9d6

PROC_DECLARE(0x623f9a0, internal_623f9a0, public_623f9a0);
extern "C" NAKED register_t __cdecl internal_623f9a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xEFA8CE01
        jne public_623f9bd
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x38]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_623f9bd : nop
        cmp eax, 0xF54EF296
        jne public_623f9d6
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x14]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_623f9d6 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623f9a0)
    }
}

#undef public_623f9bd
#undef public_623f9d6
