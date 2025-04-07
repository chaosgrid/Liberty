#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_635bda0);

PROC_DECLARE(0x635bda0, internal_635bda0, public_635bda0);
extern "C" NAKED register_t __cdecl internal_635bda0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        and edx, 0xFFFF
        shl edx, 4
        add edx, ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        call public_634d8d0
        ret 
        UNREACHABLE_TRAP(0x635bda0)
    }
}
