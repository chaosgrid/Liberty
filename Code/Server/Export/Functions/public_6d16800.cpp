#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16800);
CLANG_FORWARD_PROC_SYMBOL(public_6d17060);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16807 _public_6d16807
#define public_6d16810 _public_6d16810
#define public_6d16813 _public_6d16813
#define public_6d16831 _public_6d16831
#define public_6d1683c _public_6d1683c
#define public_6d1683e _public_6d1683e
#define public_6d16856 _public_6d16856
#define public_6d16860 _public_6d16860
#define public_6d16889 _public_6d16889
#define public_6d1688e _public_6d1688e
#define public_6d168a4 _public_6d168a4
#define public_6d168ac _public_6d168ac
#define public_6d168b7 _public_6d168b7
#define public_6d168cd _public_6d168cd
#define public_6d168d6 _public_6d168d6

PROC_DECLARE(0x6d16800, internal_6d16800, public_6d16800);
extern "C" NAKED register_t __cdecl internal_6d16800()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        xor ebp, ebp
        public_6d16807 : nop
        test ebp, ebp
        jne public_6d16810
        mov ebp, dword ptr ds : [ebx+8]
        jmp public_6d16813
        public_6d16810 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6d16813 : nop
        test ebp, ebp
        je public_6d168d6
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_6d16807
        push edi
        xor edi, edi
        public_6d16831 : nop
        test edi, edi
        jne public_6d1683c
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [edx+4]
        jmp public_6d1683e
        public_6d1683c : nop
        mov edi, dword ptr ds : [edi]
        public_6d1683e : nop
        test edi, edi
        je public_6d16860
        mov eax, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov ecx, dword ptr ds : [esi+4]
        je public_6d16856
        test ecx, ecx
        je public_6d16856
        cmp ecx, eax
        jne public_6d16831
        public_6d16856 : nop
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        jmp public_6d16831
        public_6d16860 : nop
        mov ecx, esi
        call public_6d17060
        push esi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp eax, ebp
        pop edi
        jne public_6d1688e
        mov eax, dword ptr ss : [ebp]
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [ebx+8], eax
        jne public_6d16889
        mov dword ptr ds : [ebx+0xC], ecx
        jmp public_6d168b7
        public_6d16889 : nop
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d168b7
        public_6d1688e : nop
        mov eax, dword ptr ds : [ebx+0xC]
        cmp eax, ebp
        jne public_6d168ac
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ds : [ebx+0xC], eax
        jne public_6d168a4
        mov dword ptr ds : [ebx+8], eax
        jmp public_6d168b7
        public_6d168a4 : nop
        mov dword ptr ds : [eax], 0
        jmp public_6d168b7
        public_6d168ac : nop
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [ecx+4], eax
        public_6d168b7 : nop
        mov al, byte ptr ds : [ebx+0x10]
        test al, al
        je public_6d168cd
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp], eax
        pop esi
        mov dword ptr ds : [ebx+0x14], ebp
        pop ebp
        pop ebx
        ret 4
        public_6d168cd : nop
        push ebp
        call public_6d5ffb0
        add esp, 4
        public_6d168d6 : nop
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d16800)
    }
}

#undef public_6d16807
#undef public_6d16810
#undef public_6d16813
#undef public_6d16831
#undef public_6d1683c
#undef public_6d1683e
#undef public_6d16856
#undef public_6d16860
#undef public_6d16889
#undef public_6d1688e
#undef public_6d168a4
#undef public_6d168ac
#undef public_6d168b7
#undef public_6d168cd
#undef public_6d168d6
