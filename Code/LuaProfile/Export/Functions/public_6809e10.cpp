#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_6802480);
CLANG_FORWARD_PROC_SYMBOL(public_6805f40);

PROC_DECLARE(0x6809e10, internal_6809e10, public_6809e10);
extern "C" NAKED register_t __cdecl internal_6809e10()
{
    __asm
    {
        push ecx
        push esi
        push 1
        call public_6805f40
        mov esi, eax
        push esi
        call public_6801bd0
        mov eax, dword ptr ds : [eax]
        shl eax, 2
        mov ecx, offset public_680d930
        sub ecx, eax
        mov edx, dword ptr ds : [ecx]
        push edx
        call public_68022b0
        push esi
        call public_6802480
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        add esp, 8
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 8
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6809e10)
    }
}
