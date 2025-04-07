#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63277b0);

PROC_DECLARE(0x63277b0, internal_63277b0, public_63277b0);
extern "C" NAKED register_t __cdecl internal_63277b0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0xF
        mov edi, edx
        mov dword ptr ds : [edx+0x40], 0
        rep stosd
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63277b0)
    }
}
