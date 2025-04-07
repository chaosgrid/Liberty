#include "Common-PCH.h"

PROC_DECLARE(0x62a2a70, internal_62a2a70, public_62a2a70);
extern "C" NAKED register_t __cdecl internal_62a2a70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ds : [eax]
        push esi
        lea esi, ds:[eax+0x10]
        push esi
        add eax, 4
        push eax
        call dword ptr ds : [edx+0x80]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a2a70)
    }
}
