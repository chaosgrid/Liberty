#include "DALib-PCH.h"

PROC_DECLARE(0x65c32a0, internal_65c32a0, public_65c32a0);
extern "C" NAKED register_t __cdecl internal_65c32a0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [eax+0x14], edx
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ds : [eax+0x18], edx
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [eax+0x1C], ecx
        ret 4
        UNREACHABLE_TRAP(0x65c32a0)
    }
}
