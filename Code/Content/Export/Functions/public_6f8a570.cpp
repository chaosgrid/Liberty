#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8a570);

PROC_DECLARE(0x6f8a570, internal_6f8a570, public_6f8a570);
extern "C" NAKED register_t __cdecl internal_6f8a570()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x74]
        UNREACHABLE_TRAP(0x6f8a570)
    }
}
