#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627050);

PROC_DECLARE(0x6627050, internal_6627050, public_6627050);
extern "C" NAKED register_t __cdecl internal_6627050()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x6627050)
    }
}
