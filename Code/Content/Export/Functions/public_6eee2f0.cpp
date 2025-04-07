#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eee6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eee35a _public_6eee35a
#define public_6eee378 _public_6eee378
#define public_6eee3a0 _public_6eee3a0
#define public_6eee3ab _public_6eee3ab
#define public_6eee3c0 _public_6eee3c0
#define public_6eee3cc _public_6eee3cc
#define public_6eee3d8 _public_6eee3d8

PROC_DECLARE(0x6eee2f0, internal_6eee2f0, public_6eee2f0);
extern "C" NAKED register_t __cdecl internal_6eee2f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x15]
        test al, al
        jne public_6eee378
        mov al, byte ptr ss : [ebp+0x14]
        push edi
        push 0x18
        mov byte ptr ss : [esp+0x14], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x14], dl
        mov byte ptr ds : [edi+0x15], 0
        call public_6f305b0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6eee35a
        mov ebx, edi
        public_6eee35a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6eee6f0
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6eee6f0
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6eee378 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6eee3d8
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6eee3ab
        mov edi, edi
        public_6eee3a0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6eee3a0
        public_6eee3ab : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6eee3cc
        lea ecx, ds:[ecx]
        public_6eee3c0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6eee3c0
        public_6eee3cc : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6eee3d8 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6eee2f0)
    }
}

#undef public_6eee35a
#undef public_6eee378
#undef public_6eee3a0
#undef public_6eee3ab
#undef public_6eee3c0
#undef public_6eee3cc
#undef public_6eee3d8
