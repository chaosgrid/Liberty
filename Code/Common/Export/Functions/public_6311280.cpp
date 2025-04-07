#include "Common-PCH.h"

PROC_DECLARE(0x6311280, internal_6311280, public_6311280);
extern "C" NAKED register_t __cdecl internal_6311280()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        push edi
        lea esi, ds:[ecx+8]
        mov dword ptr ds : [eax], offset public_63a3700
        lea edi, ds:[eax+8]
        mov ecx, 0xD
        mov dword ptr ds : [eax+4], edx
        rep movsd
        pop edi
        mov dword ptr ds : [eax], offset public_63a3714
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6311280)
    }
}
