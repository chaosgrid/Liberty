#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5d41f _public_6b5d41f
#define public_6b5d437 _public_6b5d437
#define public_6b5d44a _public_6b5d44a
#define public_6b5d469 _public_6b5d469
#define public_6b5d47c _public_6b5d47c
#define public_6b5d49b _public_6b5d49b
#define public_6b5d4ae _public_6b5d4ae
#define public_6b5d4ed _public_6b5d4ed
#define public_6b5d503 _public_6b5d503
#define public_6b5d557 _public_6b5d557
#define public_6b5d588 _public_6b5d588

PROC_DECLARE(0x6b5d3d0, internal_6b5d3d0, public_6b5d3d0);
extern "C" NAKED register_t __cdecl internal_6b5d3d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5d41f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d41f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x16
        jbe public_6b5d437
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5d437 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d44a
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d44a : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5d469
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5d469 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d47c
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d47c : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5d49b
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5d49b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d4ae
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d4ae : nop
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5d4ed
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5d4ed : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5d503
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d503 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x34]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        call public_6b39ec0
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5d557
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5d557 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b5d588
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5d588 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6b5d3d0)
    }
}

#undef public_6b5d41f
#undef public_6b5d437
#undef public_6b5d44a
#undef public_6b5d469
#undef public_6b5d47c
#undef public_6b5d49b
#undef public_6b5d4ae
#undef public_6b5d4ed
#undef public_6b5d503
#undef public_6b5d557
#undef public_6b5d588
