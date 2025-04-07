#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68064e0);
CLANG_FORWARD_PROC_SYMBOL(public_68065d0);

PROC_DECLARE(0x68064e0, internal_68064e0, public_68064e0);
extern "C" NAKED register_t __cdecl internal_68064e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        push 0
        push eax
        call public_68065d0
        mov ecx, dword ptr ds : [esi+0x1C]
        push 0
        push ecx
        call public_68065d0
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        call public_68065d0
        push 0
        push esi
        call public_68065d0
        add esp, 0x20
        pop esi
        ret 
        UNREACHABLE_TRAP(0x68064e0)
    }
}
