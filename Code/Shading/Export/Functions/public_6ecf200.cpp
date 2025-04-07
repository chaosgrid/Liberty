#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf200);

PROC_DECLARE(0x6ecf200, internal_6ecf200, public_6ecf200);
extern "C" NAKED register_t __cdecl internal_6ecf200()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x44]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6ecf200)
    }
}
