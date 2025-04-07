#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d7590);

PROC_DECLARE(0x62d7590, internal_62d7590, public_62d7590);
extern "C" NAKED register_t __cdecl internal_62d7590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0xA0], 3
        mov edx, dword ptr ds : [eax]
        add ecx, 0x28
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x62d7590)
    }
}
