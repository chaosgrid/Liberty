#include "Common-PCH.h"

PROC_DECLARE(0x629d4e0, internal_629d4e0, public_629d4e0);
extern "C" NAKED register_t __cdecl internal_629d4e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+0xEC]
        mov ecx, dword ptr ds : [ecx+0xF0]
        mov dword ptr ss : [esp], ecx
        mov dword ptr ss : [esp+4], 0
        fild qword ptr ss : [esp]
        fmul dword ptr ds : [eax+0x5C]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x629d4e0)
    }
}
