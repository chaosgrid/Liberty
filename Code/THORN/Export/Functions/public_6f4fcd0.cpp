#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4fcd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

PROC_DECLARE(0x6f4fcd0, internal_6f4fcd0, public_6f4fcd0);
extern "C" NAKED register_t __cdecl internal_6f4fcd0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x10]
        push 0
        push eax
        call public_6f4fe10
        mov ecx, dword ptr ds : [esi+0x1C]
        push 0
        push ecx
        call public_6f4fe10
        mov edx, dword ptr ds : [esi+8]
        push 0
        push edx
        call public_6f4fe10
        push 0
        push esi
        call public_6f4fe10
        add esp, 0x20
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4fcd0)
    }
}
