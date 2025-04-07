#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b100);

#define public_6d1b109 _public_6d1b109
#define public_6d1b114 _public_6d1b114
#define public_6d1b11e _public_6d1b11e

PROC_DECLARE(0x6d1b100, internal_6d1b100, public_6d1b100);
extern "C" NAKED register_t __cdecl internal_6d1b100()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1b114
        public_6d1b109 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x520
        mov dword ptr ss : [ebp+8], eax
        public_6d1b114 : nop
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, dword ptr ss : [ebp+0xC]
        je public_6d1b11e
        jmp public_6d1b109
        public_6d1b11e : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d1b100)
    }
}

#undef public_6d1b109
#undef public_6d1b114
#undef public_6d1b11e
