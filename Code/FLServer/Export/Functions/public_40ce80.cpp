#include "FLServer-PCH.h"

PROC_DECLARE(0x40ce80, internal_40ce80, public_40ce80);
extern "C" NAKED register_t __cdecl internal_40ce80()
{
    __asm
    {
        push ebx
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [eax+0xBA0]
        xor ebx, ebx
        test esi, esi
        sete bl
        push ebx
        call dword ptr ds : [edx]
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40ce80)
    }
}
