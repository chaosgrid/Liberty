#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f8a580);

PROC_DECLARE(0x6f8a580, internal_6f8a580, public_6f8a580);
extern "C" NAKED register_t __cdecl internal_6f8a580()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x78]
        UNREACHABLE_TRAP(0x6f8a580)
    }
}
