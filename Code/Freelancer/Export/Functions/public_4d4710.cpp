#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4710);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x4d4710, internal_4d4710, public_4d4710);
extern "C" NAKED register_t __cdecl internal_4d4710()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x24
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], 0
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4d4710)
    }
}
