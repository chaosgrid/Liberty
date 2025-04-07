#include "Common-PCH.h"

PROC_DECLARE(0x63254c0, internal_63254c0, public_63254c0);
extern "C" NAKED register_t __cdecl internal_63254c0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        ret 4
        UNREACHABLE_TRAP(0x63254c0)
    }
}
