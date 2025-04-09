#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428430);
CLANG_FORWARD_PROC_SYMBOL(public_4284f0);

#define public_428524 _public_428524

PROC_DECLARE(0x4284f0, internal_4284f0, public_4284f0);
extern "C" NAKED register_t __cdecl internal_4284f0()
{
    __asm
    {
        push 0
        call public_428430
        mov ecx, dword ptr ds : [public_667cbc]
        add esp, 4
        test ecx, ecx
        je public_428524
        push ecx
        push 0x4DA
/*FIXUP push offset public_5c9ec8 @0x42850a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9ec8
        mov eax, 0x100002
/*FIXUP push offset public_5c9e80 @0x428514*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9e80
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_428524 : nop
        push esi
        mov esi, dword ptr ds : [public_5c60bc]
        mov ecx, offset public_667a44
        call esi
        mov ecx, offset public_667a34
        call esi
        mov ecx, offset public_667a24
        call esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4284f0)
    }
}

#undef public_428524
