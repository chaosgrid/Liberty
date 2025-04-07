#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41510);

PROC_DECLARE(0x6f41510, internal_6f41510, public_6f41510);
extern "C" NAKED register_t __cdecl internal_6f41510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0xD8], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+0xDC], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0xD4], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xE0], eax
        ret 4
        UNREACHABLE_TRAP(0x6f41510)
    }
}
