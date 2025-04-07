#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_68020d0);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805f10);

#define public_6805f39 _public_6805f39

PROC_DECLARE(0x6805f10, internal_6805f10, public_6805f10);
extern "C" NAKED register_t __cdecl internal_6805f10()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6801cf0
        mov esi, eax
        push esi
        call public_68020d0
        add esp, 8
        test eax, eax
        jne public_6805f39
/*FIXUP push offset public_680d8c8 @0x6805f2b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d8c8
        push edi
        call public_6805d80
        add esp, 8
        public_6805f39 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805f10)
    }
}

#undef public_6805f39
