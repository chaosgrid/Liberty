#include "Freelancer-PCH.h"


#define public_42a25d _public_42a25d
#define public_42a28b _public_42a28b

PROC_DECLARE(0x42a210, internal_42a210, public_42a210);
extern "C" NAKED register_t __cdecl internal_42a210()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6d48]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        je public_42a28b
        mov ecx, dword ptr ds : [esi]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push esi
        call dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [public_5c6dd8]
        mov edi, dword ptr ss : [esp+0x10]
        neg al
        mov ecx, edi
        sbb eax, eax
        and eax, 2
        push eax
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [edi]
        push eax
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_5c6d48]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [ebx+0x10]
        test eax, eax
        mov dword ptr ds : [esi+0x30], eax
        pop ebx
        je public_42a25d
        cmp eax, 0xFFFFFFFF
        jne public_42a28b
        public_42a25d : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x8E5
/*FIXUP push offset public_5c9ec8 @0x42a26f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ec8
        mov ecx, 0x100002
/*FIXUP push offset public_5ca29c @0x42a279*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca29c
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        xor al, al
        pop esi
        ret 4
        public_42a28b : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x42a210)
    }
}

#undef public_42a25d
#undef public_42a28b
