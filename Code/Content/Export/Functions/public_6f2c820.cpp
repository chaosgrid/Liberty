#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2c820);
CLANG_FORWARD_PROC_SYMBOL(public_6f2eea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f270);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2c8ea _public_6f2c8ea
#define public_6f2c90b _public_6f2c90b
#define public_6f2c930 _public_6f2c930
#define public_6f2c93a _public_6f2c93a
#define public_6f2c950 _public_6f2c950
#define public_6f2c95c _public_6f2c95c
#define public_6f2c969 _public_6f2c969

PROC_DECLARE(0x6f2c820, internal_6f2c820, public_6f2c820);
extern "C" NAKED register_t __cdecl internal_6f2c820()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax]
        push esi
        mov dword ptr ds : [ebx], ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ds : [edi]
        lea esi, ds:[ebx+4]
        mov byte ptr ds : [esi], dl
        mov al, byte ptr ds : [edi+1]
        mov byte ptr ds : [esi+1], al
        mov cl, byte ptr ds : [edi+0xC]
        push 0x20
        mov dword ptr ss : [esp+0x14], ebx
        mov byte ptr ds : [esi+0xC], cl
        call public_6fa912a
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x1D], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x1C], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x1D], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov ebp, dword ptr ds : [esi+8]
        push 0x20
        call public_6fa912a
        mov dword ptr ds : [eax+4], ebp
        mov byte ptr ds : [eax+0x1C], 0
        mov byte ptr ds : [eax+0x1D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov edx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x20], ecx
        mov cl, byte ptr ss : [ebp+0x1D]
        add esp, 8
        test cl, cl
        jne public_6f2c90b
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
        call public_6f2f270
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ebx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, eax
        jne public_6f2c8ea
        mov dword ptr ss : [esp+0x18], ebx
        public_6f2c8ea : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push edx
        mov ecx, esi
        call public_6f2eea0
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6f2eea0
        mov dword ptr ds : [ebx+8], eax
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f2c90b : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6f2c969
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x1D], 0
        jne public_6f2c93a
        public_6f2c930 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x1D], 0
        je public_6f2c930
        public_6f2c93a : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x1D]
        test dl, dl
        jne public_6f2c95c
        lea esp, ss:[esp]
        public_6f2c950 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x1D]
        test dl, dl
        je public_6f2c950
        public_6f2c95c : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 8
        public_6f2c969 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f2c820)
    }
}

#undef public_6f2c8ea
#undef public_6f2c90b
#undef public_6f2c930
#undef public_6f2c93a
#undef public_6f2c950
#undef public_6f2c95c
#undef public_6f2c969
