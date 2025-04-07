#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c50c0);

PROC_DECLARE(0x62c50c0, internal_62c50c0, public_62c50c0);
extern "C" NAKED register_t __cdecl internal_62c50c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x444
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x62c50c0)
    }
}
