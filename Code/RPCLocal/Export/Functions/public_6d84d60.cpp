#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d84d60);
CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d84d8d _public_6d84d8d
#define public_6d84d95 _public_6d84d95
#define public_6d84da1 _public_6d84da1
#define public_6d84df7 _public_6d84df7
#define public_6d84e13 _public_6d84e13
#define public_6d84ea6 _public_6d84ea6
#define public_6d84eae _public_6d84eae
#define public_6d84ec6 _public_6d84ec6

PROC_DECLARE(0x6d84d60, internal_6d84d60, public_6d84d60);
extern "C" NAKED register_t __cdecl internal_6d84d60()
{
    __asm
    {
        sub esp, 0x24
        mov ecx, dword ptr ss : [esp+0x28]
        push ebx
        push esi
        push edi
        call public_6d913e0
        test eax, eax
        mov dword ptr ss : [esp+0xC], eax
        je public_6d84ec6
        mov ebx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov esi, dword ptr ds : [eax+8]
        jne public_6d84d8d
        xor eax, eax
        jmp public_6d84d95
        public_6d84d8d : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 5
        public_6d84d95 : nop
        cmp eax, esi
        jae public_6d84df7
        test esi, esi
        mov eax, esi
        jge public_6d84da1
        xor eax, eax
        public_6d84da1 : nop
        shl eax, 5
        push eax
        call public_6db1f8a
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ds : [ebx+8]
        push edi
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6db30c8]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6db3090]
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6db1dc2
        shl esi, 5
        add esi, edi
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], esi
        call dword ptr ds : [public_6db30c4]
        shl eax, 5
        add eax, edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], edi
        public_6d84df7 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x34], ecx
        je public_6d84ec6
        push ebp
        mov ebp, dword ptr ds : [public_6db3004]
        public_6d84e13 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ds : [eax+8]
        test edi, edi
        je public_6d84eae
        lea ecx, ss:[esp+0x14]
        call ebp
        mov ecx, dword ptr ds : [ebx+8]
        push eax
        push 1
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_6db30c0]
        mov esi, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [edi]
        sub esi, 0x20
        push edx
        mov ecx, esi
        call dword ptr ds : [public_6db308c]
        mov eax, dword ptr ds : [edi+4]
        push eax
        mov ecx, esi
        call dword ptr ds : [public_6db3084]
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_6db3080]
        xor edx, edx
        mov dx, word ptr ds : [edi+0xC]
        mov ecx, esi
        push edx
        call dword ptr ds : [public_6db3088]
        xor eax, eax
        mov al, byte ptr ds : [edi+0xE]
        mov ecx, esi
        push eax
        call dword ptr ds : [public_6db307c]
        cmp word ptr ds : [edi+0x10], 0
        jbe public_6d84ea6
        mov edi, dword ptr ds : [edi+0x14]
        push 0
        push edi
        call dword ptr ds : [public_6db3078]
        add esp, 8
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x40], eax
        call dword ptr ds : [public_6db3074]
        jmp public_6d84eae
        public_6d84ea6 : nop
        mov ecx, esi
        call dword ptr ds : [public_6db3070]
        public_6d84eae : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x38], eax
        jne public_6d84e13
        pop ebp
        public_6d84ec6 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x6d84d60)
    }
}

#undef public_6d84d8d
#undef public_6d84d95
#undef public_6d84da1
#undef public_6d84df7
#undef public_6d84e13
#undef public_6d84ea6
#undef public_6d84eae
#undef public_6d84ec6
