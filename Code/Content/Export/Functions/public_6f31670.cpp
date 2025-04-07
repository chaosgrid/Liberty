#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31670);

PROC_DECLARE(0x6f31670, internal_6f31670, public_6f31670);
extern "C" NAKED register_t __cdecl internal_6f31670()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0xC], edx
        mov dword ptr ds : [eax+0x10], ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6f31670)
    }
}
