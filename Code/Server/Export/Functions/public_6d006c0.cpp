#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d00db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d0c840);

#define public_6d00708 _public_6d00708
#define public_6d0070a _public_6d0070a
#define public_6d0072c _public_6d0072c
#define public_6d00758 _public_6d00758
#define public_6d00770 _public_6d00770
#define public_6d0078c _public_6d0078c
#define public_6d00796 _public_6d00796
#define public_6d007b0 _public_6d007b0
#define public_6d007ca _public_6d007ca
#define public_6d007e1 _public_6d007e1
#define public_6d007ee _public_6d007ee
#define public_6d007f4 _public_6d007f4
#define public_6d007f8 _public_6d007f8
#define public_6d00803 _public_6d00803
#define public_6d00805 _public_6d00805
#define public_6d00819 _public_6d00819
#define public_6d00821 _public_6d00821

PROC_DECLARE(0x6d006c0, internal_6d006c0, public_6d006c0);
extern "C" NAKED register_t __cdecl internal_6d006c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [public_6d8d8ec]
        xor bl, bl
        test ecx, ecx
        je public_6d0072c
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_6d0072c
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_6d00708
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_6d00708
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6d0070a
        public_6d00708 : nop
        xor eax, eax
        public_6d0070a : nop
        mov eax, dword ptr ds : [eax+0xB0]
        cmp eax, dword ptr ss : [ebp]
        jne public_6d0072c
        inc dword ptr ds : [public_6d8d930]
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ds : [public_6d8d92c]
        pop edi
        mov dword ptr ds : [esi], ecx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 
        public_6d0072c : nop
        inc dword ptr ds : [public_6d8d934]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6d007f8
        mov ecx, dword ptr ds : [public_6d8d92c]
        test ecx, ecx
        je public_6d00758
        mov edx, dword ptr ss : [ebp]
        push edx
        call public_6d0c840
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [public_6d8d92c]
        mov dword ptr ds : [esi], eax
        public_6d00758 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6d007f8
        mov eax, dword ptr ds : [public_6d8d8d8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d00796
        lea ecx, ds:[ecx]
        public_6d00770 : nop
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        cmp eax, dword ptr ss : [ebp]
        jne public_6d0078c
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ecx], 0
        public_6d0078c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_6d8d8d8]
        jne public_6d00770
        public_6d00796 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        jne public_6d007f4
        mov ecx, dword ptr ds : [public_6d8da30]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        je public_6d007ee
        lea esp, ss:[esp]
        public_6d007b0 : nop
        lea ecx, ds:[eax+0x10]
        cmp ecx, dword ptr ds : [public_6d8d92c]
        je public_6d007ca
        mov edx, dword ptr ss : [ebp]
        push edx
        call public_6d0c840
        test eax, eax
        mov dword ptr ds : [edi], eax
        jne public_6d007e1
        public_6d007ca : nop
        lea ecx, ss:[esp+0x18]
        call public_6d00db0
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [public_6d8da30]
        jne public_6d007b0
        jmp public_6d007ee
        public_6d007e1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        mov dword ptr ds : [ecx], eax
        public_6d007ee : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6d00821
        public_6d007f4 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        public_6d007f8 : nop
        test eax, eax
        mov bl, 1
        je public_6d00803
        add eax, 8
        jmp public_6d00805
        public_6d00803 : nop
        xor eax, eax
        public_6d00805 : nop
        cmp eax, dword ptr ds : [public_6d8d8ec]
        je public_6d00819
        push eax
        mov ecx, offset public_6d8d8ec
        call dword ptr ds : [public_6d6447c]
        public_6d00819 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [public_6d8d92c], edx
        public_6d00821 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d006c0)
    }
}

#undef public_6d00708
#undef public_6d0070a
#undef public_6d0072c
#undef public_6d00758
#undef public_6d00770
#undef public_6d0078c
#undef public_6d00796
#undef public_6d007b0
#undef public_6d007ca
#undef public_6d007e1
#undef public_6d007ee
#undef public_6d007f4
#undef public_6d007f8
#undef public_6d00803
#undef public_6d00805
#undef public_6d00819
#undef public_6d00821
