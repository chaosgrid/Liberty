#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4018b0);

PROC_DECLARE(0x4018b0, internal_4018b0, public_4018b0);
extern "C" NAKED register_t __cdecl internal_4018b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x784
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x4018b0)
    }
}
