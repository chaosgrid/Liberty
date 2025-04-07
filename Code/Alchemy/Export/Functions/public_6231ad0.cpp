#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231ad0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_6231af1 _public_6231af1
#define public_6231b0a _public_6231b0a

PROC_DECLARE(0x6231ad0, internal_6231ad0, public_6231ad0);
extern "C" NAKED register_t __cdecl internal_6231ad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0xEC7A290
        jne public_6231af1
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x6C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_6231af1 : nop
        cmp ecx, 0x3B76E6C
        jne public_6231b0a
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x8C]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        public_6231b0a : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6231ad0)
    }
}

#undef public_6231af1
#undef public_6231b0a
