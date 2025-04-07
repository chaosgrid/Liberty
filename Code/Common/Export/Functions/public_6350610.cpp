#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350610);

PROC_DECLARE(0x6350610, internal_6350610, public_6350610);
extern "C" NAKED register_t __cdecl internal_6350610()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0xC
        mov edi, edx
        rep stosd
        mov dword ptr ds : [edx], 0x100
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6350610)
    }
}
