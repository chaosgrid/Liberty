#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f06560);

PROC_DECLARE(0x6f06560, internal_6f06560, public_6f06560);
extern "C" NAKED register_t __cdecl internal_6f06560()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6fb43f8
        mov dword ptr ds : [eax+4], 1
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0xC], ecx
        mov byte ptr ds : [eax+0x10], 0
        mov dword ptr ds : [eax], offset public_6fb8240
        ret 4
        UNREACHABLE_TRAP(0x6f06560)
    }
}
