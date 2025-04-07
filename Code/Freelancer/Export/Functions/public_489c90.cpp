#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_489c90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x489c90, internal_489c90, public_489c90);
extern "C" NAKED register_t __cdecl internal_489c90()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push esi
        mov esi, ecx
        push 0x14
        mov byte ptr ds : [esi], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        mov eax, esi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x489c90)
    }
}
