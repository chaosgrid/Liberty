#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627f60);

PROC_DECLARE(0x6627f60, internal_6627f60, public_6627f60);
extern "C" NAKED register_t __cdecl internal_6627f60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x34]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6627f60)
    }
}
