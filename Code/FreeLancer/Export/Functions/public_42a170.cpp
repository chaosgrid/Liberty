#include "Freelancer-PCH.h"


#define public_42a1ba _public_42a1ba
#define public_42a1c9 _public_42a1c9

PROC_DECLARE(0x42a170, internal_42a170, public_42a170);
extern "C" NAKED register_t __cdecl internal_42a170()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+0x1C]
        mov bl, byte ptr ss : [esp+0xC]
        cmp bl, al
        je public_42a1c9
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x14]
        test al, al
        je public_42a1ba
        test bl, bl
        je public_42a1ba
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        push edi
        mov edi, 0x100001
        call dword ptr ds : [edx+4]
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x8BF
/*FIXUP push offset public_5c9ec8 @0x42a1a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ec8
/*FIXUP push offset public_5ca240 @0x42a1ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca240
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        pop edi
        public_42a1ba : nop
        mov al, byte ptr ds : [esi+0xC]
        mov cl, al
        xor cl, bl
        and cl, 1
        xor cl, al
        mov byte ptr ds : [esi+0xC], cl
        public_42a1c9 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x42a170)
    }
}

#undef public_42a1ba
#undef public_42a1c9
