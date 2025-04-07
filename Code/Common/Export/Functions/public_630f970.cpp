#include "Common-PCH.h"


#define public_630f9a1 _public_630f9a1

PROC_DECLARE(0x630f970, internal_630f970, public_630f970);
extern "C" NAKED register_t __cdecl internal_630f970()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_630f9a1
/*FIXUP push offset public_63a36a8 @0x630f97a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a36a8
        push 0x1F6
/*FIXUP push offset public_63a366c @0x630f984*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a366c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x630f98e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        ret 
        public_630f9a1 : nop
        mov eax, dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x630f970)
    }
}

#undef public_630f9a1
