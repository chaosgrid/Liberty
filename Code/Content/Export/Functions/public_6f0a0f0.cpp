#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0a0f0);

PROC_DECLARE(0x6f0a0f0, internal_6f0a0f0, public_6f0a0f0);
extern "C" NAKED register_t __cdecl internal_6f0a0f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], offset public_6fb43f8
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov cl, byte ptr ds : [ecx+0x10]
        mov byte ptr ds : [eax+0x10], cl
        mov dword ptr ds : [eax], offset public_6fb8240
        ret 4
        UNREACHABLE_TRAP(0x6f0a0f0)
    }
}
