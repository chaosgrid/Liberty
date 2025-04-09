#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558850);

PROC_DECLARE(0x437270, internal_437270, public_437270);
extern "C" NAKED register_t __cdecl internal_437270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67eca0]
        push esi
        push eax
        mov esi, ecx
        call public_558850
        xor al, al
        add esp, 4
        mov byte ptr ds : [esi+4], al
        mov byte ptr ds : [esi+5], al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x437270)
    }
}
