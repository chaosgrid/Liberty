#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf220);

PROC_DECLARE(0x6ecf220, internal_6ecf220, public_6ecf220);
extern "C" NAKED register_t __cdecl internal_6ecf220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6ecf220)
    }
}
