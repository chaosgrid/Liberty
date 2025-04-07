#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de0eb);

PROC_DECLARE(0x65de0eb, internal_65de0eb, public_65de0eb);
extern "C" NAKED register_t __cdecl internal_65de0eb()
{
    __asm
    {
        push edi
        push 0x40
        pop ecx
        xor eax, eax
        mov edi, offset public_65e67e0
        rep stosd
        stosb 
        xor eax, eax
        mov edi, offset public_65e66d0
        mov dword ptr ds : [public_65e66cc], eax
        mov dword ptr ds : [public_65e66dc], eax
        mov dword ptr ds : [public_65e68e4], eax
        stosd 
        stosd 
        stosd 
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65de0eb)
    }
}
