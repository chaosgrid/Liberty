#include "Content-PCH.h"

PROC_DECLARE(0x6f86030, internal_6f86030, public_6f86030);
extern "C" NAKED register_t __cdecl internal_6f86030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x48], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x4C], edx
        mov edx, dword ptr ss : [esp+0x10]
        add ecx, 0x50
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+8], eax
        ret 0x14
        UNREACHABLE_TRAP(0x6f86030)
    }
}
