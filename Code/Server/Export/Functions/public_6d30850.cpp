#include "Server-PCH.h"

PROC_DECLARE(0x6d30850, internal_6d30850, public_6d30850);
extern "C" NAKED register_t __cdecl internal_6d30850()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        lea esi, ds:[eax+0x10]
        push esi
        mov dword ptr ds : [eax+0x18], edx
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x24]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d30850)
    }
}
