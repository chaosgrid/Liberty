#include "Common-PCH.h"

PROC_DECLARE(0x6309960, internal_6309960, public_6309960);
extern "C" NAKED register_t __cdecl internal_6309960()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+8]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6309960)
    }
}
