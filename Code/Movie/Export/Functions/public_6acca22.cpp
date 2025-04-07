#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acca22);
CLANG_FORWARD_PROC_SYMBOL(public_6accaf0);
CLANG_FORWARD_PROC_SYMBOL(public_6accb47);
CLANG_FORWARD_PROC_SYMBOL(public_6accb95);
CLANG_FORWARD_PROC_SYMBOL(public_6accca6);

#define public_6acca32 _public_6acca32
#define public_6acca4b _public_6acca4b
#define public_6acca4d _public_6acca4d
#define public_6acca6c _public_6acca6c
#define public_6acca79 _public_6acca79
#define public_6acca8c _public_6acca8c
#define public_6acca90 _public_6acca90

PROC_DECLARE(0x6acca22, internal_6acca22, public_6acca22);
extern "C" NAKED register_t __cdecl internal_6acca22()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [esi], 0x10
        je public_6acca32
        xor eax, eax
        jmp public_6acca90
        public_6acca32 : nop
        push edi
        push ebx
        lea ecx, ds:[esi+8]
        xor ebx, ebx
        cmp dword ptr ds : [ecx], ebx
        je public_6acca4b
        cmp dword ptr ds : [esi+0xC], ebx
        lea eax, ds:[esi+0xC]
        je public_6acca4b
        mov edi, ecx
        mov ebx, eax
        jmp public_6acca4d
        public_6acca4b : nop
        xor edi, edi
        public_6acca4d : nop
        push ebx
        push edi
        call public_6accaf0
        test byte ptr ds : [esi+4], 1
        je public_6acca6c
        lea eax, ss:[ebp+0x10]
        push eax
        push dword ptr ss : [ebp+0xC]
        push 0
        push 0
        call public_6accca6
        jmp public_6acca79
        public_6acca6c : nop
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push 0
        call public_6accb95
        public_6acca79 : nop
        test edi, edi
        mov esi, eax
        je public_6acca8c
        test ebx, ebx
        je public_6acca8c
        push dword ptr ds : [ebx]
        push dword ptr ds : [edi]
        call public_6accb47
        public_6acca8c : nop
        pop ebx
        mov eax, esi
        pop edi
        public_6acca90 : nop
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6acca22)
    }
}

#undef public_6acca32
#undef public_6acca4b
#undef public_6acca4d
#undef public_6acca6c
#undef public_6acca79
#undef public_6acca8c
#undef public_6acca90
