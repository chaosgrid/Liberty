#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e3710);

PROC_DECLARE(0x62e3710, internal_62e3710, public_62e3710);
extern "C" NAKED register_t __cdecl internal_62e3710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0x20], eax
        ret 4
        UNREACHABLE_TRAP(0x62e3710)
    }
}
