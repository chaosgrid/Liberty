#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f732e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73810);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f73830 _public_6f73830
#define public_6f73856 _public_6f73856
#define public_6f7387a _public_6f7387a
#define public_6f73892 _public_6f73892
#define public_6f73895 _public_6f73895
#define public_6f738aa _public_6f738aa
#define public_6f738ac _public_6f738ac

PROC_DECLARE(0x6f73810, internal_6f73810, public_6f73810);
extern "C" NAKED register_t __cdecl internal_6f73810()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push ebp
        mov dword ptr ss : [esp+8], ecx
        push esi
        xor ecx, ecx
        cmp ebx, eax
        push edi
        je public_6f738aa
        mov ebp, dword ptr ss : [esp+0x20]
        public_6f73830 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        lea eax, ds:[ebx+8]
        push eax
        call public_6f732e0
        test eax, eax
        je public_6f73856
        mov ecx, dword ptr ds : [ebx+0x74]
        cmp ecx, dword ptr ds : [public_6fd0e64]
        je public_6f738ac
        public_6f73856 : nop
        test ebp, ebp
        je public_6f73895
        mov eax, dword ptr ss : [esp+0x20]
        test eax, eax
        je public_6f73895
        mov esi, dword ptr ss : [ebp+4]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f7387a
        mov edi, eax
        public_6f7387a : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6f73892
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        public_6f73892 : nop
        inc dword ptr ss : [ebp+8]
        public_6f73895 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+4]
        jne public_6f73830
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xC
        public_6f738aa : nop
        mov eax, ecx
        public_6f738ac : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6f73810)
    }
}

#undef public_6f73830
#undef public_6f73856
#undef public_6f7387a
#undef public_6f73892
#undef public_6f73895
#undef public_6f738aa
#undef public_6f738ac
