#include "Common-PCH.h"

PROC_DECLARE(0x6329990, internal_6329990, public_6329990);
extern "C" NAKED register_t __cdecl internal_6329990()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        add eax, 4
        push eax
        call dword ptr ds : [edx+0x20]
        ret 8
        UNREACHABLE_TRAP(0x6329990)
    }
}
