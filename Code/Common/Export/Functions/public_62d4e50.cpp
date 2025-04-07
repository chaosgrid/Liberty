#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);

PROC_DECLARE(0x62d4e50, internal_62d4e50, public_62d4e50);
extern "C" NAKED register_t __cdecl internal_62d4e50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x64], edx
        ret 4
        UNREACHABLE_TRAP(0x62d4e50)
    }
}
