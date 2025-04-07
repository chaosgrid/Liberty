#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801c50);
CLANG_FORWARD_PROC_SYMBOL(public_6801fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6805a80);
CLANG_FORWARD_PROC_SYMBOL(public_6805c90);

PROC_DECLARE(0x6801fe0, internal_6801fe0, public_6801fe0);
extern "C" NAKED register_t __cdecl internal_6801fe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        call public_6805a80
        push 1
        mov esi, eax
        call public_6801c50
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0xFFFFFFF0
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        push edx
        push esi
        call public_6805c90
        add esp, 0x10
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6801fe0)
    }
}
