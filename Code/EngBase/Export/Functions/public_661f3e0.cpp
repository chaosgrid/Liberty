#include "EngBase-PCH.h"

PROC_DECLARE(0x661f3e0, internal_661f3e0, public_661f3e0);
extern "C" NAKED register_t __cdecl internal_661f3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+4]
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x661f3e0)
    }
}
