#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf1c8f _public_6bf1c8f
#define public_6bf1ca7 _public_6bf1ca7
#define public_6bf1cd1 _public_6bf1cd1
#define public_6bf1cfb _public_6bf1cfb
#define public_6bf1d25 _public_6bf1d25
#define public_6bf1d4f _public_6bf1d4f
#define public_6bf1d7b _public_6bf1d7b
#define public_6bf1dce _public_6bf1dce
#define public_6bf1de4 _public_6bf1de4
#define public_6bf1e23 _public_6bf1e23
#define public_6bf1e39 _public_6bf1e39
#define public_6bf1e78 _public_6bf1e78
#define public_6bf1e8e _public_6bf1e8e
#define public_6bf1ed9 _public_6bf1ed9
#define public_6bf1f0c _public_6bf1f0c
#define public_6bf1f18 _public_6bf1f18

PROC_DECLARE(0x6bf1c40, internal_6bf1c40, public_6bf1c40);
extern "C" NAKED register_t __cdecl internal_6bf1c40()
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf1c8f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1c8f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov eax, 0x16
        jbe public_6bf1ca7
        mov dword ptr ds : [esi+0xC], eax
        public_6bf1ca7 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf1f18
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
        jbe public_6bf1cd1
        mov dword ptr ds : [esi+0xC], eax
        public_6bf1cd1 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf1f18
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
        jbe public_6bf1cfb
        mov dword ptr ds : [esi+0xC], eax
        public_6bf1cfb : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf1f18
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
        jbe public_6bf1d25
        mov dword ptr ds : [esi+0xC], eax
        public_6bf1d25 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf1f18
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
        jbe public_6bf1d4f
        mov dword ptr ds : [esi+0xC], eax
        public_6bf1d4f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf1f18
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
        jbe public_6bf1d7b
        mov dword ptr ds : [esi+0xC], eax
        public_6bf1d7b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6bf1f18
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
        call public_6bda220
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1dce
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf1dce : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf1de4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1de4 : nop
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
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1e23
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf1e23 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf1e39
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1e39 : nop
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
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1e78
        mov dword ptr ds : [esi+0xC], 0x16
        public_6bf1e78 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf1e8e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1e8e : nop
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
        call public_6bda4c0
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf1ed9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6bf1ed9 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
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
        jbe public_6bf1f0c
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf1f0c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6bf1f18 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6bf1c40)
    }
}

#undef public_6bf1c8f
#undef public_6bf1ca7
#undef public_6bf1cd1
#undef public_6bf1cfb
#undef public_6bf1d25
#undef public_6bf1d4f
#undef public_6bf1d7b
#undef public_6bf1dce
#undef public_6bf1de4
#undef public_6bf1e23
#undef public_6bf1e39
#undef public_6bf1e78
#undef public_6bf1e8e
#undef public_6bf1ed9
#undef public_6bf1f0c
#undef public_6bf1f18
