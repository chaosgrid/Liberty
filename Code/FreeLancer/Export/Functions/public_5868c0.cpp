#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5868c0);

PROC_DECLARE(0x5868c0, internal_5868c0, public_5868c0);
extern "C" NAKED register_t __cdecl internal_5868c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x470
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x5868c0)
    }
}
