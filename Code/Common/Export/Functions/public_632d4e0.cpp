#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d4e0);

PROC_DECLARE(0x632d4e0, internal_632d4e0, public_632d4e0);
extern "C" NAKED register_t __cdecl internal_632d4e0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx]
        add edx, 0x1000
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax+0xC], ecx
        ret 8
        UNREACHABLE_TRAP(0x632d4e0)
    }
}
