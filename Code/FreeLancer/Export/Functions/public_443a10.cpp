#include "Freelancer-PCH.h"

PROC_DECLARE(0x443a10, internal_443a10, public_443a10);
extern "C" NAKED register_t __cdecl internal_443a10()
{
    __asm
    {
        fld qword ptr ss : [esp+4]
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ds : [ecx+0x30]
        fstp dword ptr ss : [esp]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x6C]
        ret 8
        UNREACHABLE_TRAP(0x443a10)
    }
}
