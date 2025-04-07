#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_430ab0);
CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_430ae5 _public_430ae5
#define public_430aed _public_430aed
#define public_430af8 _public_430af8

PROC_DECLARE(0x430ab0, internal_430ab0, public_430ab0);
extern "C" NAKED register_t __cdecl internal_430ab0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, offset public_667e18
        mov dword ptr ss : [esp+0xC], eax
        call public_52c7a0
        mov ecx, dword ptr ds : [public_667e1c]
        cmp eax, ecx
        mov dword ptr ss : [esp], eax
        je public_430ae5
        mov edx, dword ptr ss : [esp+8]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_430ae5
        lea eax, ss:[esp]
        jmp public_430aed
        public_430ae5 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_430aed : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_430af8
        add eax, 0x10
        pop ecx
        ret 
        public_430af8 : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x430ab0)
    }
}

#undef public_430ae5
#undef public_430aed
#undef public_430af8
