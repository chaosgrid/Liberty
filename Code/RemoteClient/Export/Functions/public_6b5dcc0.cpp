#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a160);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b5dd0f _public_6b5dd0f
#define public_6b5dd27 _public_6b5dd27
#define public_6b5dd51 _public_6b5dd51
#define public_6b5dd7b _public_6b5dd7b
#define public_6b5dda5 _public_6b5dda5
#define public_6b5ddcf _public_6b5ddcf
#define public_6b5ddfb _public_6b5ddfb
#define public_6b5de4e _public_6b5de4e
#define public_6b5de64 _public_6b5de64
#define public_6b5dea3 _public_6b5dea3
#define public_6b5deb9 _public_6b5deb9
#define public_6b5def8 _public_6b5def8
#define public_6b5df0e _public_6b5df0e
#define public_6b5df59 _public_6b5df59
#define public_6b5df8c _public_6b5df8c
#define public_6b5df98 _public_6b5df98

PROC_DECLARE(0x6b5dcc0, internal_6b5dcc0, public_6b5dcc0);
extern "C" NAKED register_t __cdecl internal_6b5dcc0()
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
        je public_6b5dd0f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5dd0f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov eax, 0x16
        jbe public_6b5dd27
        mov dword ptr ds : [esi+0xC], eax
        public_6b5dd27 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5df98
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5dd51
        mov dword ptr ds : [esi+0xC], eax
        public_6b5dd51 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5df98
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5dd7b
        mov dword ptr ds : [esi+0xC], eax
        public_6b5dd7b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5df98
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5dda5
        mov dword ptr ds : [esi+0xC], eax
        public_6b5dda5 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5df98
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 2
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5ddcf
        mov dword ptr ds : [esi+0xC], eax
        public_6b5ddcf : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5df98
        mov ecx, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x30]
        mov word ptr ds : [ecx], dx
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0x10
        mov ecx, ebp
        cmp ecx, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6b5ddfb
        mov dword ptr ds : [esi+0xC], eax
        public_6b5ddfb : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b5df98
        mov ebp, dword ptr ds : [ebx]
        lea eax, ds:[edi+0x34]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], edx
        call public_6b39ec0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5de4e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5de4e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5de64
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5de64 : nop
        mov ecx, dword ptr ds : [edi+0x44]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x48]
        mov eax, dword ptr ds : [edi+0x4C]
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
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5dea3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5dea3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5deb9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5deb9 : nop
        mov edx, dword ptr ds : [edi+0x50]
        mov ecx, dword ptr ds : [edi+0x58]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x54]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6b3a160
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b5def8
        mov dword ptr ds : [esi+0xC], 0x16
        public_6b5def8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b5df0e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5df0e : nop
        mov eax, dword ptr ds : [edi+0x5C]
        mov ecx, dword ptr ds : [edi+0x60]
        mov ebp, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x64]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6b3a160
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5df59
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b5df59 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
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
        jbe public_6b5df8c
        mov dword ptr ds : [ecx+0x10], esi
        public_6b5df8c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b5df98 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6b5dcc0)
    }
}

#undef public_6b5dd0f
#undef public_6b5dd27
#undef public_6b5dd51
#undef public_6b5dd7b
#undef public_6b5dda5
#undef public_6b5ddcf
#undef public_6b5ddfb
#undef public_6b5de4e
#undef public_6b5de64
#undef public_6b5dea3
#undef public_6b5deb9
#undef public_6b5def8
#undef public_6b5df0e
#undef public_6b5df59
#undef public_6b5df8c
#undef public_6b5df98
