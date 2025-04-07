#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dab7cf _public_6dab7cf
#define public_6dab7e6 _public_6dab7e6
#define public_6dab7fc _public_6dab7fc
#define public_6dab83b _public_6dab83b
#define public_6dab851 _public_6dab851
#define public_6dab899 _public_6dab899
#define public_6dab8af _public_6dab8af
#define public_6dab8d2 _public_6dab8d2
#define public_6dab8e8 _public_6dab8e8
#define public_6dab917 _public_6dab917
#define public_6dab94a _public_6dab94a

PROC_DECLARE(0x6dab780, internal_6dab780, public_6dab780);
extern "C" NAKED register_t __cdecl internal_6dab780()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dab7cf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6dab7cf : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab7e6
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab7e6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab7fc
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6dab7fc : nop
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
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab83b
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab83b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab851
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6dab851 : nop
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
        call public_6d8f4f0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab899
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab899 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab8af
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6dab8af : nop
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
        jbe public_6dab8d2
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab8d2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab8e8
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6dab8e8 : nop
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dab917
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6dab917 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
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
        jbe public_6dab94a
        mov dword ptr ds : [ecx+0x10], esi
        public_6dab94a : nop
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
        UNREACHABLE_TRAP(0x6dab780)
    }
}

#undef public_6dab7cf
#undef public_6dab7e6
#undef public_6dab7fc
#undef public_6dab83b
#undef public_6dab851
#undef public_6dab899
#undef public_6dab8af
#undef public_6dab8d2
#undef public_6dab8e8
#undef public_6dab917
#undef public_6dab94a
