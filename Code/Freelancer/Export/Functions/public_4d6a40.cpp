#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6a40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4d6a5a _public_4d6a5a
#define public_4d6a66 _public_4d6a66
#define public_4d6a7f _public_4d6a7f
#define public_4d6a8b _public_4d6a8b
#define public_4d6aa5 _public_4d6aa5
#define public_4d6ab1 _public_4d6ab1
#define public_4d6ad0 _public_4d6ad0
#define public_4d6adc _public_4d6adc

PROC_DECLARE(0x4d6a40, internal_4d6a40, public_4d6a40);
extern "C" NAKED register_t __cdecl internal_4d6a40()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push esi
        fmul qword ptr ds : [public_5c89c0]
        mov esi, ecx
        call public_5b7ec0
        test eax, eax
        jge public_4d6a5a
        xor eax, eax
        jmp public_4d6a66
        public_4d6a5a : nop
        cmp eax, 0xFF
        jle public_4d6a66
        mov eax, 0xFF
        public_4d6a66 : nop
        fld dword ptr ss : [esp+0xC]
        mov byte ptr ds : [esi], al
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        test eax, eax
        jge public_4d6a7f
        xor eax, eax
        jmp public_4d6a8b
        public_4d6a7f : nop
        cmp eax, 0xFF
        jle public_4d6a8b
        mov eax, 0xFF
        public_4d6a8b : nop
        fld dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+1], al
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        test eax, eax
        jge public_4d6aa5
        xor eax, eax
        jmp public_4d6ab1
        public_4d6aa5 : nop
        cmp eax, 0xFF
        jle public_4d6ab1
        mov eax, 0xFF
        public_4d6ab1 : nop
        fld dword ptr ss : [esp+0x14]
        mov byte ptr ds : [esi+2], al
        fmul qword ptr ds : [public_5c89c0]
        call public_5b7ec0
        test eax, eax
        jge public_4d6ad0
        xor eax, eax
        mov byte ptr ds : [esi+3], al
        pop esi
        ret 0x10
        public_4d6ad0 : nop
        cmp eax, 0xFF
        jle public_4d6adc
        mov eax, 0xFF
        public_4d6adc : nop
        mov byte ptr ds : [esi+3], al
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x4d6a40)
    }
}

#undef public_4d6a5a
#undef public_4d6a66
#undef public_4d6a7f
#undef public_4d6a8b
#undef public_4d6aa5
#undef public_4d6ab1
#undef public_4d6ad0
#undef public_4d6adc
