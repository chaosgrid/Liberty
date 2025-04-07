#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6327410);

PROC_DECLARE(0x6327410, internal_6327410, public_6327410);
extern "C" NAKED register_t __cdecl internal_6327410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+0x30]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x2C]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        add eax, 0x10
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0x24]
        UNREACHABLE_TRAP(0x6327410)
    }
}
