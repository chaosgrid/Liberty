#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fd90);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a670);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7aaa7 _public_6f7aaa7
#define public_6f7aac4 _public_6f7aac4
#define public_6f7aaf0 _public_6f7aaf0
#define public_6f7aafb _public_6f7aafb
#define public_6f7ab10 _public_6f7ab10
#define public_6f7ab1c _public_6f7ab1c
#define public_6f7ab28 _public_6f7ab28

PROC_DECLARE(0x6f7a9f0, internal_6f7a9f0, public_6f7a9f0);
extern "C" NAKED register_t __cdecl internal_6f7a9f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov al, byte ptr ds : [edi]
        mov esi, ecx
        mov byte ptr ds : [esi], al
        mov cl, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], cl
        mov dl, byte ptr ds : [edi+0xC]
        push 0x20
        mov byte ptr ds : [esi+0xC], dl
        call public_6fa912a
        mov byte ptr ds : [eax+0x1D], 0
        xor ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        mov cl, 1
        mov byte ptr ds : [eax+0x1C], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x1D], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebp
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebp
        mov ebx, dword ptr ds : [esi+8]
        push 0x20
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x1C], 0
        mov byte ptr ds : [eax+0x1D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov edx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x1C], ecx
        mov cl, byte ptr ss : [ebp+0x1D]
        add esp, 8
        test cl, cl
        jne public_6f7aac4
        xor edx, edx
        mov dl, byte ptr ss : [ebp+0x1C]
        mov ecx, esi
        push edx
        push eax
        call public_6f6a2c0
        mov ebx, eax
        lea eax, ss:[ebp+0xC]
        push eax
        lea ecx, ds:[ebx+0xC]
        push ecx
        call public_6f6a670
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6f7aaa7
        mov dword ptr ss : [esp+0x14], ebx
        public_6f7aaa7 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6f2fd90
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6f2fd90
        mov dword ptr ds : [ebx+8], eax
        public_6f7aac4 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f7ab28
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        jne public_6f7aafb
        lea ebx, ds:[ebx]
        public_6f7aaf0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f7aaf0
        public_6f7aafb : nop
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f7ab1c
        lea ecx, ds:[ecx]
        public_6f7ab10 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f7ab10
        public_6f7ab1c : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr ds : [edx+8], ecx
        pop ebx
        ret 4
        public_6f7ab28 : nop
        mov dword ptr ds : [edx], edx
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f7a9f0)
    }
}

#undef public_6f7aaa7
#undef public_6f7aac4
#undef public_6f7aaf0
#undef public_6f7aafb
#undef public_6f7ab10
#undef public_6f7ab1c
#undef public_6f7ab28
