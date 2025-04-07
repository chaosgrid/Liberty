#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbb70);

PROC_DECLARE(0x6ecbb70, internal_6ecbb70, public_6ecbb70);
extern "C" NAKED register_t __cdecl internal_6ecbb70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx]
        UNREACHABLE_TRAP(0x6ecbb70)
    }
}
