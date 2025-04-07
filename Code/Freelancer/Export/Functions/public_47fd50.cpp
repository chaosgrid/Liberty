#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_47fd50);

#define public_47fea3 _public_47fea3

PROC_DECLARE(0x47fd50, internal_47fd50, public_47fd50);
extern "C" NAKED register_t __cdecl internal_47fd50()
{
    __asm
    {
        push esi
        push edi
        push 0
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x9D4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9A8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9AC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9B0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9B4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9B8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9BC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9C0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9C4]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9C8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x9CC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x9D8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        jne public_47fea3
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x9D4]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        ret 8
        public_47fea3 : nop
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x47feb3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edx
        push eax
        call public_4347e0
        push edi
/*FIXUP push offset public_66dc60 @0x47fec0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
/*FIXUP push offset public_66fc60 @0x47fec5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c70ec]
        mov ecx, dword ptr ds : [esi+0x9D4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x1C
        push 0
/*FIXUP push offset public_66fc60 @0x47fedd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x47fd50)
    }
}

#undef public_47fea3
