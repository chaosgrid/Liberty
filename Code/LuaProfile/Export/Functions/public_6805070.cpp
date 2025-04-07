#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805070);
CLANG_FORWARD_PROC_SYMBOL(public_6805d20);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_6805098 _public_6805098

PROC_DECLARE(0x6805070, internal_6805070, public_6805070);
extern "C" NAKED register_t __cdecl internal_6805070()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push eax
        push edi
        call public_6805d20
        mov esi, eax
        add esp, 8
        test esi, esi
        jge public_6805098
        push edi
/*FIXUP push offset public_680d76c @0x680508b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d76c
        call public_6805fb0
        add esp, 8
        public_6805098 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805070)
    }
}

#undef public_6805098
