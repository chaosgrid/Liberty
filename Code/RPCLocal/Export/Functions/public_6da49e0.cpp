#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6da4a3a _public_6da4a3a
#define public_6da4a64 _public_6da4a64
#define public_6da4a90 _public_6da4a90
#define public_6da4b1f _public_6da4b1f
#define public_6da4b46 _public_6da4b46
#define public_6da4b6d _public_6da4b6d
#define public_6da4b94 _public_6da4b94
#define public_6da4bcb _public_6da4bcb
#define public_6da4be1 _public_6da4be1
#define public_6da4c01 _public_6da4c01
#define public_6da4c17 _public_6da4c17
#define public_6da4c48 _public_6da4c48
#define public_6da4c7b _public_6da4c7b
#define public_6da4c87 _public_6da4c87

PROC_DECLARE(0x6da49e0, internal_6da49e0, public_6da49e0);
extern "C" NAKED register_t __cdecl internal_6da49e0()
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
        lea ebp, ds:[edi+0x18]
        push ebp
        mov ecx, edi
        call public_6da1380
        mov dword ptr ds : [edi+0x1C], eax
        test eax, eax
        mov eax, 0x16
        jne public_6da4c87
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da4a3a
        mov dword ptr ds : [esi+0xC], eax
        public_6da4a3a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov ecx, dword ptr ss : [ebp]
        mov dl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [ecx], dl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da4a64
        mov dword ptr ds : [esi+0xC], eax
        public_6da4a64 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov ecx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da4a90
        mov dword ptr ds : [esi+0xC], eax
        public_6da4a90 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebx, dword ptr ss : [ebp]
        mov edx, dword ptr ds : [edi+0x30]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x18], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], edx
        call public_6d8f510
        fld dword ptr ds : [edi+0x38]
        fmul qword ptr ds : [public_6db3fd8]
        add ebx, 0xC
        mov dword ptr ss : [ebp], ebx
        call public_6db20de
        fld dword ptr ds : [edi+0x3C]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x28], al
        call public_6db20de
        fld dword ptr ds : [edi+0x40]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x24], al
        call public_6db20de
        fld dword ptr ds : [edi+0x34]
        fmul qword ptr ds : [public_6db3fd8]
        mov byte ptr ss : [esp+0x13], al
        call public_6db20de
        mov ecx, dword ptr ds : [esi]
        mov dl, al
        mov eax, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, eax
        mov dword ptr ds : [esi], ecx
        mov eax, 0x16
        jbe public_6da4b1f
        mov dword ptr ds : [esi+0xC], eax
        public_6da4b1f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x28]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6da4b46
        mov dword ptr ds : [esi+0xC], eax
        public_6da4b46 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6da4b6d
        mov dword ptr ds : [esi+0xC], eax
        public_6da4b6d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov ecx, dword ptr ss : [ebp]
        mov bl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [ecx], bl
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [esi+4]
        inc ecx
        cmp ecx, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6da4b94
        mov dword ptr ds : [esi+0xC], eax
        public_6da4b94 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da4c87
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], dl
        fld dword ptr ds : [edi+0x48]
        fmul qword ptr ds : [public_6db3fd8]
        inc ecx
        mov dword ptr ss : [ebp], ecx
        call public_6db20de
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov ecx, ebx
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6da4bcb
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da4bcb : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da4be1
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da4be1 : nop
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], al
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4c01
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da4c01 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da4c17
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da4c17 : nop
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [edi+0x44]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edi+0x14]
        push esi
        push ecx
        add eax, 4
        push ebp
        mov ecx, edi
        mov dword ptr ss : [ebp], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da4c48
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6da4c48 : nop
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
        jbe public_6da4c7b
        mov dword ptr ds : [ecx+0x10], esi
        public_6da4c7b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6da4c87 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6da49e0)
    }
}

#undef public_6da4a3a
#undef public_6da4a64
#undef public_6da4a90
#undef public_6da4b1f
#undef public_6da4b46
#undef public_6da4b6d
#undef public_6da4b94
#undef public_6da4bcb
#undef public_6da4be1
#undef public_6da4c01
#undef public_6da4c17
#undef public_6da4c48
#undef public_6da4c7b
#undef public_6da4c87
