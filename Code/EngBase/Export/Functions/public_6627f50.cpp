#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627f50);

PROC_DECLARE(0x6627f50, internal_6627f50, public_6627f50);
extern "C" NAKED register_t __cdecl internal_6627f50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6627f50)
    }
}
