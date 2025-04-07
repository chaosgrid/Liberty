#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15790);

#define public_6f157c0 _public_6f157c0
#define public_6f157e0 _public_6f157e0
#define public_6f15800 _public_6f15800
#define public_6f1580b _public_6f1580b
#define public_6f15827 _public_6f15827
#define public_6f15834 _public_6f15834
#define public_6f15836 _public_6f15836

PROC_DECLARE(0x6f15790, internal_6f15790, public_6f15790);
extern "C" NAKED register_t __cdecl internal_6f15790()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xBC]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        xor edx, edx
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], edx
        je public_6f15834
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ds : [public_6fb3294]
        lea ebx, ds:[eax+4]
        mov edi, edi
        public_6f157c0 : nop
        lea ecx, ds:[esi+0xC]
        push ebx
        push ecx
        call ebp
        add esp, 8
        test eax, eax
        je public_6f15827
        mov edi, dword ptr ds : [esi+0xF4]
        cmp edi, dword ptr ds : [esi+0xF8]
        je public_6f1580b
        lea esp, ss:[esp]
        public_6f157e0 : nop
        lea edx, ds:[edi+8]
        push ebx
        push edx
        call ebp
        add esp, 8
        test eax, eax
        je public_6f15800
        mov eax, dword ptr ds : [esi+0xF8]
        add edi, 0x88
        cmp edi, eax
        jne public_6f157e0
        jmp public_6f1580b
        public_6f15800 : nop
        lea eax, ds:[esi+8]
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f15836
        public_6f1580b : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+0xBC]
        jne public_6f157c0
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f15827 : nop
        pop edi
        lea eax, ds:[esi+8]
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f15834 : nop
        mov eax, edx
        public_6f15836 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f15790)
    }
}

#undef public_6f157c0
#undef public_6f157e0
#undef public_6f15800
#undef public_6f1580b
#undef public_6f15827
#undef public_6f15834
#undef public_6f15836
