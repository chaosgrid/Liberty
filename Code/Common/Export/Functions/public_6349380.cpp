#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6349380);

PROC_DECLARE(0x6349380, internal_6349380, public_6349380);
extern "C" NAKED register_t __cdecl internal_6349380()
{
    __asm
    {
        sub esp, 8
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        xor ecx, ecx
        mov dword ptr ss : [esp], 0x41100000
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x1A4], ecx
        mov dword ptr ss : [esp+4], 0x3F3AE140
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp], 0
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+4], 0x3E99999A
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6349380)
    }
}
