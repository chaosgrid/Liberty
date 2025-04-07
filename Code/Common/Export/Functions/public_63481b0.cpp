#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63481b0);

PROC_DECLARE(0x63481b0, internal_63481b0, public_63481b0);
extern "C" NAKED register_t __cdecl internal_63481b0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0x10
        mov edi, edx
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+0x14], eax
        mov dword ptr ds : [edx+0x28], eax
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63481b0)
    }
}
