#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6803bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);

#define public_6803c07 _public_6803c07

PROC_DECLARE(0x6803bf0, internal_6803bf0, public_6803bf0);
extern "C" NAKED register_t __cdecl internal_6803bf0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        cmp dword ptr ds : [esi], 0xFFFFFFFF
        je public_6803c07
        mov eax, 1
        pop esi
        add esp, 0x20
        ret 
        public_6803c07 : nop
        fld qword ptr ds : [esi+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        lea eax, ss:[esp+0xC]
/*FIXUP push offset public_680d518 @0x6803c14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d518
        push eax
        call dword ptr ds : [public_680c060]
        lea ecx, ss:[esp+0x14]
        push ecx
        call public_6805a80
        add esp, 0x14
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0xFFFFFFFE
        xor eax, eax
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6803bf0)
    }
}

#undef public_6803c07
