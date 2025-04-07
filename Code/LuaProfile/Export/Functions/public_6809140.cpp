#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68058a0);
CLANG_FORWARD_PROC_SYMBOL(public_6809010);
CLANG_FORWARD_PROC_SYMBOL(public_6809110);
CLANG_FORWARD_PROC_SYMBOL(public_6809140);
CLANG_FORWARD_PROC_SYMBOL(public_680bb70);

#define public_6809158 _public_6809158

PROC_DECLARE(0x6809140, internal_6809140, public_6809140);
extern "C" NAKED register_t __cdecl internal_6809140()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push ebx
        call public_6809010
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_6809158
        pop esi
        pop ebx
        ret 
        public_6809158 : nop
        push edi
        push esi
        call public_680bb70
        mov edi, eax
        push esi
        push edi
        push ebx
        call public_6809110
        dec esi
        push esi
        push edi
        call public_68058a0
        add esp, 0x18
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6809140)
    }
}

#undef public_6809158
