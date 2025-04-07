#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6980);

PROC_DECLARE(0x6ec6980, internal_6ec6980, public_6ec6980);
extern "C" NAKED register_t __cdecl internal_6ec6980()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x94]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6ec6980)
    }
}
