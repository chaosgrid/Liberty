#include "Content-PCH.h"

PROC_DECLARE(0x6f07120, internal_6f07120, public_6f07120);
extern "C" NAKED register_t __cdecl internal_6f07120()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0x14]
        UNREACHABLE_TRAP(0x6f07120)
    }
}
