#include "FLServer-PCH.h"

PROC_DECLARE(0x401100, internal_401100, public_401100);
extern "C" NAKED register_t __cdecl internal_401100()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_41be08
        mov dword ptr ds : [eax+4], offset public_41be04
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], offset public_41bc90
        mov dword ptr ds : [eax+4], offset public_41bc88
        ret 4
        UNREACHABLE_TRAP(0x401100)
    }
}
