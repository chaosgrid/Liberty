#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4135e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_413590 _public_413590
#define public_4135a7 _public_4135a7
#define public_4135ad _public_4135ad

PROC_DECLARE(0x413540, internal_413540, public_413540);
extern "C" NAKED register_t __cdecl internal_413540()
{
    __asm
    {
        push esi
        push edi
/*FIXUP push offset public_5c8c90 @0x413542*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8c90
        mov dword ptr ds : [public_616638], 0
        mov dword ptr ds : [public_61663c], 0
        call dword ptr ds : [public_5c71c8]
        mov edi, eax
        mov eax, dword ptr ds : [public_61663c]
        lea esi, ds:[edi+1]
        add esp, 4
        cmp esi, eax
        jbe public_4135ad
        mov eax, dword ptr ds : [public_616638]
        test eax, eax
        je public_413590
        lea ecx, ds:[esi+esi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [public_616638], eax
        jmp public_4135a7
        public_413590 : nop
        lea edx, ds:[esi+esi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [public_616638], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_4135a7 : nop
        mov dword ptr ds : [public_61663c], esi
        public_4135ad : nop
        mov eax, dword ptr ds : [public_616638]
        push edi
/*FIXUP push offset public_5c8c90 @0x4135b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8c90
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [public_616638]
/*FIXUP push offset _public_4135e0 @0x4135c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4135e0
        mov word ptr ds : [ecx+edi*2], 0
        call public_5b7e6c
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x413540)
    }
}

#undef public_413590
#undef public_4135a7
#undef public_4135ad
