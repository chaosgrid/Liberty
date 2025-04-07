#include "System-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f11130);
CLANG_FORWARD_PROC_SYMBOL(public_6f11190);

PROC_DECLARE(0x6f11130, internal_6f11130, public_6f11130);
extern "C" NAKED register_t __cdecl internal_6f11130()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [esi], offset public_6f12098
        mov dword ptr ds : [esi+4], offset public_6f12084
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        push esi
        call public_6f11190
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f11130)
    }
}
