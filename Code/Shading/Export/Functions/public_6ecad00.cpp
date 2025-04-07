#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecad00);

PROC_DECLARE(0x6ecad00, internal_6ecad00, public_6ecad00);
extern "C" NAKED register_t __cdecl internal_6ecad00()
{
    __asm
    {
        mov edx, dword ptr ds : [public_6ed57fc]
        mov ecx, dword ptr ds : [edx]
        mov eax, dword ptr ds : [public_6ed57f8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        add eax, ecx
        add ecx, esi
        mov dword ptr ds : [edx], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecad00)
    }
}
