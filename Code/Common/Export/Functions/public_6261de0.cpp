#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a7b0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63924bb);

#define public_6261ec0 _public_6261ec0
#define public_6261edd _public_6261edd
#define public_6261f05 _public_6261f05

PROC_DECLARE(0x6261de0, internal_6261de0, public_6261de0);
extern "C" NAKED register_t __cdecl internal_6261de0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63924bb @0x6261de2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63924bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edi+8], edx
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [edi+0xC], eax
        mov cl, byte ptr ss : [ebp+0x10]
        lea ebx, ss:[ebp+0x10]
        lea esi, ds:[edi+0x10]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [ebx+1]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [ebx+0xC]
        push 0x30
        mov dword ptr ss : [esp+0x14], edi
        mov byte ptr ds : [esi+0xC], al
        call public_6391d9c
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x2D], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x2C], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x2D], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        push 0x30
        mov dword ptr ss : [esp+0x2C], edx
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x2C], 0
        mov byte ptr ds : [eax+0x2D], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        push ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], 0
        call public_626a7b0
        mov dl, byte ptr ss : [ebp+0x24]
        xor esi, esi
        push 0xC
        mov dword ptr ss : [esp+0x20], esi
        mov byte ptr ds : [edi+0x24], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+0x28], eax
        mov dword ptr ds : [edi+0x2C], esi
        mov ebx, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [ebx]
        mov ebp, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ebx
        je public_6261f05
        lea ecx, ds:[ecx]
        public_6261ec0 : nop
        mov eax, dword ptr ss : [ebp+4]
        push 0xC
        mov dword ptr ss : [esp+0x28], eax
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebp
        jne public_6261edd
        mov ecx, eax
        public_6261edd : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_630cd00
        mov ecx, dword ptr ds : [edi+0x2C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+0x2C], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, ebx
        jne public_6261ec0
        public_6261f05 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6261de0)
    }
}

#undef public_6261ec0
#undef public_6261edd
#undef public_6261f05
