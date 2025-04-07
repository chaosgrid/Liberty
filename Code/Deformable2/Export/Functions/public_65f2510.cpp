#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2510);

PROC_DECLARE(0x65f2510, internal_65f2510, public_65f2510);
extern "C" NAKED register_t __cdecl internal_65f2510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x65f2510)
    }
}
