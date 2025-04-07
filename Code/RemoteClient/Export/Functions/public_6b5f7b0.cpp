#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5f7ff _public_6b5f7ff
#define public_6b5f816 _public_6b5f816
#define public_6b5f82c _public_6b5f82c
#define public_6b5f86b _public_6b5f86b
#define public_6b5f881 _public_6b5f881
#define public_6b5f8c9 _public_6b5f8c9
#define public_6b5f8df _public_6b5f8df
#define public_6b5f902 _public_6b5f902
#define public_6b5f918 _public_6b5f918
#define public_6b5f947 _public_6b5f947
#define public_6b5f97a _public_6b5f97a

PROC_DECLARE(0x6b5f7b0, internal_6b5f7b0, public_6b5f7b0);
extern "C" NAKED register_t __cdecl internal_6b5f7b0()
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
        je public_6b5f7ff
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5f7ff : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5f816
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5f816 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5f82c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5f82c : nop
        mov ecx, dword ptr ds : [edi+0x20]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5f86b
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5f86b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5f881
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5f881 : nop
        mov ebp, dword ptr ds : [ebx]
        lea edx, ds:[edi+0x2C]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6b39ec0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5f8c9
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5f8c9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5f8df
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5f8df : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x3C]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5f902
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5f902 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5f918
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5f918 : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x40]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5f947
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5f947 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6b4ecd0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6b5f97a
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5f97a : nop
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
        UNREACHABLE_TRAP(0x6b5f7b0)
    }
}

#undef public_6b5f7ff
#undef public_6b5f816
#undef public_6b5f82c
#undef public_6b5f86b
#undef public_6b5f881
#undef public_6b5f8c9
#undef public_6b5f8df
#undef public_6b5f902
#undef public_6b5f918
#undef public_6b5f947
#undef public_6b5f97a
