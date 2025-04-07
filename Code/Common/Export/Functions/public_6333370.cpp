#include "Common-PCH.h"

PROC_DECLARE(0x6333370, internal_6333370, public_6333370);
extern "C" NAKED register_t __cdecl internal_6333370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x14], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0xC], eax
        mov dword ptr ds : [ecx+0x10], edx
        mov byte ptr ds : [ecx+0x18], 0
        ret 0x10
        UNREACHABLE_TRAP(0x6333370)
    }
}
