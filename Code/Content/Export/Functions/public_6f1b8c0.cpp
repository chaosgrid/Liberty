#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6f1d110);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1b8e1 _public_6f1b8e1
#define public_6f1b8ee _public_6f1b8ee
#define public_6f1b902 _public_6f1b902
#define public_6f1b930 _public_6f1b930
#define public_6f1b93f _public_6f1b93f
#define public_6f1b961 _public_6f1b961
#define public_6f1b980 _public_6f1b980
#define public_6f1b9ae _public_6f1b9ae
#define public_6f1b9b2 _public_6f1b9b2
#define public_6f1b9d2 _public_6f1b9d2
#define public_6f1b9dd _public_6f1b9dd

PROC_DECLARE(0x6f1b8c0, internal_6f1b8c0, public_6f1b8c0);
extern "C" NAKED register_t __cdecl internal_6f1b8c0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        test ebp, ebp
        mov ebx, ecx
        je public_6f1b9dd
        mov eax, dword ptr ss : [ebp+0x10]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        lea edi, ss:[ebp+8]
        je public_6f1b902
        public_6f1b8e1 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6f1b8ee
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_6f1b8ee : nop
        mov edx, dword ptr ds : [edi]
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [edi+8]
        jne public_6f1b8e1
        public_6f1b902 : nop
        mov ecx, ebp
        call public_6f1d110
        lea edi, ss:[ebp+4]
        lea esi, ds:[ebx+0x3C]
        push edi
        mov ecx, esi
        call public_6ed1670
        push edi
        mov ecx, esi
        mov ebx, eax
        call public_6fa7200
        mov edi, eax
        cmp edi, ebx
        mov dword ptr ss : [esp+0x1C], edi
        je public_6f1b93f
        nop 
        lea esp, ss:[esp]
        public_6f1b930 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        cmp dword ptr ss : [esp+0x1C], ebx
        jne public_6f1b930
        public_6f1b93f : nop
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov eax, edi
        mov dword ptr ss : [esp+0x10], eax
        je public_6f1b9ae
        mov ecx, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [ecx]
        jne public_6f1b9ae
        cmp ebx, ecx
        jne public_6f1b9ae
        mov ebx, dword ptr ds : [ecx+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f1b980
        public_6f1b961 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6f1f9c0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f1b961
        public_6f1b980 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6f1b9ae : nop
        cmp edi, ebx
        je public_6f1b9d2
        public_6f1b9b2 : nop
        lea ecx, ss:[esp+0x10]
        mov edi, eax
        call public_6f1fa00
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ebx
        jne public_6f1b9b2
        public_6f1b9d2 : nop
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        pop edi
        pop esi
        public_6f1b9dd : nop
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6f1b8c0)
    }
}

#undef public_6f1b8e1
#undef public_6f1b8ee
#undef public_6f1b902
#undef public_6f1b930
#undef public_6f1b93f
#undef public_6f1b961
#undef public_6f1b980
#undef public_6f1b9ae
#undef public_6f1b9b2
#undef public_6f1b9d2
#undef public_6f1b9dd
