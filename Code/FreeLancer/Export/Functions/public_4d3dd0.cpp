#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_4e5470);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_4d3de9 _public_4d3de9
#define public_4d3e0d _public_4d3e0d
#define public_4d3e14 _public_4d3e14
#define public_4d3e21 _public_4d3e21
#define public_4d3e28 _public_4d3e28

PROC_DECLARE(0x4d3dd0, internal_4d3dd0, public_4d3dd0);
extern "C" NAKED register_t __cdecl internal_4d3dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [public_674b04]
        push 0
        call public_4e5470
        test eax, eax
        je public_4d3de9
        cmp eax, 2
        jne public_4d3e0d
        public_4d3de9 : nop
        call public_41dd90
        test al, al
        je public_4d3e0d
        call public_54baf0
        test eax, eax
        je public_4d3e0d
        call public_41a3e0
        test al, al
        jne public_4d3e0d
        push 0
        mov ecx, esi
        call public_5a0c30
        public_4d3e0d : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_4d3e28
        public_4d3e14 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_4d3e21
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_4d3e21 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_4d3e14
        public_4d3e28 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d3dd0)
    }
}

#undef public_4d3de9
#undef public_4d3e0d
#undef public_4d3e14
#undef public_4d3e21
#undef public_4d3e28
