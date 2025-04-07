#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca620);

PROC_DECLARE(0x6eca620, internal_6eca620, public_6eca620);
extern "C" NAKED register_t __cdecl internal_6eca620()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [ecx+0x80]
        push esi
        mov esi, dword ptr ss : [esp+8]
        add eax, edx
        add edx, esi
        mov dword ptr ds : [ecx+0x88], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eca620)
    }
}
