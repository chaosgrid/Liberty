#include "EngBase-PCH.h"

PROC_DECLARE(0x661f3b0, internal_661f3b0, public_661f3b0);
extern "C" NAKED register_t __cdecl internal_661f3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+4]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x661f3b0)
    }
}
