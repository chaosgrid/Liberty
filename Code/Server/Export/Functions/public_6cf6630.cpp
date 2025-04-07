#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6630);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7140);

#define public_6cf664a _public_6cf664a
#define public_6cf664c _public_6cf664c
#define public_6cf66c0 _public_6cf66c0
#define public_6cf66e7 _public_6cf66e7

PROC_DECLARE(0x6cf6630, internal_6cf6630, public_6cf6630);
extern "C" NAKED register_t __cdecl internal_6cf6630()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov esi, ecx
        je public_6cf664a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6cf664c
        public_6cf664a : nop
        xor eax, eax
        public_6cf664c : nop
        mov edx, dword ptr ds : [eax+0xB4]
        cmp edx, dword ptr ds : [esi+0x38]
        je public_6cf66e7
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        jne public_6cf66e7
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x160]
        test al, al
        jne public_6cf66c0
        push edi
        mov ecx, esi
        call public_6cf7140
        call dword ptr ds : [public_6d641c0]
        test al, al
        je public_6cf66e7
        mov ecx, dword ptr ds : [esi+0x38]
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov ecx, dword ptr ds : [ecx+edx-0x100]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0xD4], ecx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ds : [esi+0x38]
        push eax
        call dword ptr ds : [edx+0xBC]
        pop edi
        pop esi
        ret 8
        mov edi, edi
        public_6cf66c0 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        mov esi, 0x100002
        call dword ptr ds : [edx+0x20]
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        push 0x19B
/*FIXUP push offset public_6d669dc @0x6cf66d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d669dc
/*FIXUP push offset public_6d66998 @0x6cf66dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66998
        push esi
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6cf66e7 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6cf6630)
    }
}

#undef public_6cf664a
#undef public_6cf664c
#undef public_6cf66c0
#undef public_6cf66e7
