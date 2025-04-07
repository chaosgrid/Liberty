#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

PROC_DECLARE(0x626c930, internal_626c930, public_626c930);
extern "C" NAKED register_t __cdecl internal_626c930()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call public_6391d5a
        xor eax, eax
        add esp, 4
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x626c930)
    }
}
