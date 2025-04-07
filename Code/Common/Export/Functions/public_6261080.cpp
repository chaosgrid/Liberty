#include "Common-PCH.h"

PROC_DECLARE(0x6261080, internal_6261080, public_6261080);
extern "C" NAKED register_t __cdecl internal_6261080()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        push esi
        push edi
        lea esi, ds:[ecx+4]
        lea edi, ds:[eax+4]
        mov ecx, 0x11
        rep movsd
        pop edi
        mov dword ptr ds : [eax], offset public_63993e8
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261080)
    }
}
