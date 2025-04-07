#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aba0);
CLANG_FORWARD_PROC_SYMBOL(public_635abf0);

PROC_DECLARE(0x635abf0, internal_635abf0, public_635abf0);
extern "C" NAKED register_t __cdecl internal_635abf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x20]
        add ecx, eax
        push ecx
        call public_635aba0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x635abf0)
    }
}
