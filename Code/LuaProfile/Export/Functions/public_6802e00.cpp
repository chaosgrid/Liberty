#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6802e40);

#define public_6802e11 _public_6802e11
#define public_6802e26 _public_6802e26

PROC_DECLARE(0x6802e00, internal_6802e00, public_6802e00);
extern "C" NAKED register_t __cdecl internal_6802e00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6802e11
        push eax
        call public_6802e40
        add esp, 4
        public_6802e11 : nop
        mov eax, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [eax+0x18]
        test eax, eax
        je public_6802e26
        push 1
        push eax
        call dword ptr ds : [public_680c034]
/*FIXUP public_6802e26 : nop
        push offset public_680d4c8 @0x6802e26*/
  FIXUP public_6802e26 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d4c8
        call public_6802e40
        add esp, 4
        push 1
        call dword ptr ds : [public_680c030]
        UNREACHABLE_TRAP(0x6802e00)
    }
}

#undef public_6802e11
#undef public_6802e26
