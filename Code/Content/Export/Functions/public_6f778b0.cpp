#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f778b0);

PROC_DECLARE(0x6f778b0, internal_6f778b0, public_6f778b0);
extern "C" NAKED register_t __cdecl internal_6f778b0()
{
    __asm
    {
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, 9
        mov edi, eax
        rep movsd
        xor ecx, ecx
        pop edi
        mov dword ptr ds : [eax+0x2C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x24], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f778b0)
    }
}
