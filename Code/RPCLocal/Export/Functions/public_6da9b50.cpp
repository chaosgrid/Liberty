#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da9b9f _public_6da9b9f
#define public_6da9bb7 _public_6da9bb7
#define public_6da9be1 _public_6da9be1
#define public_6da9c0b _public_6da9c0b
#define public_6da9c35 _public_6da9c35
#define public_6da9c5f _public_6da9c5f
#define public_6da9c8b _public_6da9c8b
#define public_6da9cde _public_6da9cde
#define public_6da9cf4 _public_6da9cf4
#define public_6da9d33 _public_6da9d33
#define public_6da9d49 _public_6da9d49
#define public_6da9d88 _public_6da9d88
#define public_6da9d9e _public_6da9d9e
#define public_6da9de9 _public_6da9de9
#define public_6da9e1c _public_6da9e1c
#define public_6da9e28 _public_6da9e28

PROC_DECLARE(0x6da9b50, internal_6da9b50, public_6da9b50);
extern "C" NAKED register_t __cdecl internal_6da9b50()
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
        je public_6da9b9f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9b9f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov eax, 0x16
        jbe public_6da9bb7
        mov dword ptr ds : [esi+0xC], eax
        public_6da9bb7 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da9e28
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
        jbe public_6da9be1
        mov dword ptr ds : [esi+0xC], eax
        public_6da9be1 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da9e28
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
        jbe public_6da9c0b
        mov dword ptr ds : [esi+0xC], eax
        public_6da9c0b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da9e28
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
        jbe public_6da9c35
        mov dword ptr ds : [esi+0xC], eax
        public_6da9c35 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da9e28
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
        jbe public_6da9c5f
        mov dword ptr ds : [esi+0xC], eax
        public_6da9c5f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da9e28
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
        jbe public_6da9c8b
        mov dword ptr ds : [esi+0xC], eax
        public_6da9c8b : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da9e28
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
        call public_6d8f4f0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9cde
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da9cde : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9cf4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9cf4 : nop
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
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9d33
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da9d33 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9d49
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9d49 : nop
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
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9d88
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da9d88 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9d9e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9d9e : nop
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
        call public_6d8f510
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da9de9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da9de9 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
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
        jbe public_6da9e1c
        mov dword ptr ds : [ecx+0x10], esi
        public_6da9e1c : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6da9e28 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6da9b50)
    }
}

#undef public_6da9b9f
#undef public_6da9bb7
#undef public_6da9be1
#undef public_6da9c0b
#undef public_6da9c35
#undef public_6da9c5f
#undef public_6da9c8b
#undef public_6da9cde
#undef public_6da9cf4
#undef public_6da9d33
#undef public_6da9d49
#undef public_6da9d88
#undef public_6da9d9e
#undef public_6da9de9
#undef public_6da9e1c
#undef public_6da9e28
