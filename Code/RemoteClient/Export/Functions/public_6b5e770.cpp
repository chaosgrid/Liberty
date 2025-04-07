#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5e7bf _public_6b5e7bf
#define public_6b5e7d7 _public_6b5e7d7
#define public_6b5e7ea _public_6b5e7ea
#define public_6b5e809 _public_6b5e809
#define public_6b5e81c _public_6b5e81c
#define public_6b5e83b _public_6b5e83b
#define public_6b5e84e _public_6b5e84e
#define public_6b5e86d _public_6b5e86d
#define public_6b5e880 _public_6b5e880
#define public_6b5e8bf _public_6b5e8bf
#define public_6b5e8d5 _public_6b5e8d5
#define public_6b5e929 _public_6b5e929
#define public_6b5e95a _public_6b5e95a

PROC_DECLARE(0x6b5e770, internal_6b5e770, public_6b5e770);
extern "C" NAKED register_t __cdecl internal_6b5e770()
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
        je public_6b5e7bf
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e7bf : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x16
        jbe public_6b5e7d7
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5e7d7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5e7ea
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e7ea : nop
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
        jbe public_6b5e809
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5e809 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5e81c
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e81c : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5e83b
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5e83b : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5e84e
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e84e : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5e86d
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5e86d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5e880
        pop edi
        pop esi
        pop ebp
        mov eax, ecx
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e880 : nop
        mov eax, dword ptr ds : [edi+0x2C]
        mov ecx, dword ptr ds : [edi+0x30]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x34]
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
        jbe public_6b5e8bf
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5e8bf : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5e8d5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e8d5 : nop
        mov ebp, dword ptr ds : [ebx]
        lea ecx, ds:[edi+0x38]
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
        je public_6b5e929
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5e929 : nop
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
        jbe public_6b5e95a
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5e95a : nop
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
        UNREACHABLE_TRAP(0x6b5e770)
    }
}

#undef public_6b5e7bf
#undef public_6b5e7d7
#undef public_6b5e7ea
#undef public_6b5e809
#undef public_6b5e81c
#undef public_6b5e83b
#undef public_6b5e84e
#undef public_6b5e86d
#undef public_6b5e880
#undef public_6b5e8bf
#undef public_6b5e8d5
#undef public_6b5e929
#undef public_6b5e95a
