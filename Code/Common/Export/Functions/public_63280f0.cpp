#include "Common-PCH.h"

PROC_DECLARE(0x63280f0, internal_63280f0, public_63280f0);
extern "C" NAKED register_t __cdecl internal_63280f0()
{
    __asm
    {
        movzx eax, byte ptr ds : [ecx+0x1C]
        imul eax, 0x7C
        mov edx, dword ptr ds : [eax+public_64019b0]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        movzx ecx, byte ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+8]
        imul ecx, 0x7C
        mov edx, dword ptr ds : [ecx+public_64019b4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x63280f0)
    }
}
