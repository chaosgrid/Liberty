#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c9380, internal_4c9380, public_4c9380);
extern "C" NAKED register_t __cdecl internal_4c9380()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        mov byte ptr ds : [esi+0xDC], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c9380)
    }
}
