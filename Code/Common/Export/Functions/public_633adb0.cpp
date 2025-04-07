#include "Common-PCH.h"

PROC_DECLARE(0x633adb0, internal_633adb0, public_633adb0);
extern "C" NAKED register_t __cdecl internal_633adb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x70]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x74]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+0x40]
        shr eax, 0x15
        and eax, 1
        ret 8
        UNREACHABLE_TRAP(0x633adb0)
    }
}
