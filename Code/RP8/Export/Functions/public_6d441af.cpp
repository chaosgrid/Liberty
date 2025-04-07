#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d441af);

#define public_6d441c9 _public_6d441c9

PROC_DECLARE(0x6d441af, internal_6d441af, public_6d441af);
extern "C" NAKED register_t __cdecl internal_6d441af()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x50]
        test eax, eax
        je public_6d441c9
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        push ecx
        call eax
        add esp, 0xC
        ret 
/*FIXUP public_6d441c9 : nop
        push offset public_6d60f80 @0x6d441c9*/
  FIXUP public_6d441c9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60f80
        push ecx
        call public_6d41e47
        UNREACHABLE_TRAP(0x6d441af)
    }
}

#undef public_6d441c9
