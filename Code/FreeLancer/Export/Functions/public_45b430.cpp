#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45b430);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);

#define public_45b456 _public_45b456
#define public_45b480 _public_45b480

PROC_DECLARE(0x45b430, internal_45b430, public_45b430);
extern "C" NAKED register_t __cdecl internal_45b430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d398]
        test eax, eax
        jne public_45b456
        push eax
        push eax
/*FIXUP push offset public_5ce83c @0x45b43b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
/*FIXUP push offset public_5ce83c @0x45b440*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ce83c
        call public_59db20
        mov eax, dword ptr ds : [public_66d398]
        add esp, 0x10
        test eax, eax
        je public_45b480
        public_45b456 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x334], ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0
        mov byte ptr ds : [eax+0x338], 0
        mov eax, dword ptr ds : [eax+0x32C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x1E
        mov ecx, eax
        call dword ptr ds : [edx+0xA8]
        public_45b480 : nop
        ret 
        UNREACHABLE_TRAP(0x45b430)
    }
}

#undef public_45b456
#undef public_45b480
