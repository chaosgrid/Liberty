#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04693);

#define public_6d046bc _public_6d046bc
#define public_6d046c5 _public_6d046c5
#define public_6d046dc _public_6d046dc
#define public_6d046de _public_6d046de
#define public_6d046e0 _public_6d046e0

PROC_DECLARE(0x6d04693, internal_6d04693, public_6d04693);
extern "C" NAKED register_t __cdecl internal_6d04693()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        mov dword ptr ss : [ebp-0x10], ecx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+0x18C]
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+0x190]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d046c5
        public_6d046bc : nop
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0xC
        mov dword ptr ss : [ebp-0xC], edx
        public_6d046c5 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        cmp eax, dword ptr ss : [ebp-8]
        je public_6d046de
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+8]
        cmp edx, dword ptr ds : [ecx]
        jne public_6d046dc
        mov eax, dword ptr ss : [ebp-0xC]
        jmp public_6d046e0
        public_6d046dc : nop
        jmp public_6d046bc
        public_6d046de : nop
        xor eax, eax
        public_6d046e0 : nop
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d04693)
    }
}

#undef public_6d046bc
#undef public_6d046c5
#undef public_6d046dc
#undef public_6d046de
#undef public_6d046e0
