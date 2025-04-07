#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68066d0);
CLANG_FORWARD_PROC_SYMBOL(public_6809090);
CLANG_FORWARD_PROC_SYMBOL(public_6809110);

#define public_6809135 _public_6809135

PROC_DECLARE(0x6809110, internal_6809110, public_6809110);
extern "C" NAKED register_t __cdecl internal_6809110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push eax
        push ecx
        push esi
        call public_68066d0
        add esp, 0xC
        test eax, eax
        je public_6809135
        push esi
        call public_6809090
        add esp, 4
        public_6809135 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6809110)
    }
}

#undef public_6809135
