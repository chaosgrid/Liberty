#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360df0);

PROC_DECLARE(0x6360df0, internal_6360df0, public_6360df0);
extern "C" NAKED register_t __cdecl internal_6360df0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        lea edi, ds:[edx+4]
        mov dword ptr ds : [edx], offset public_63a5760
        xor ecx, ecx
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6360df0)
    }
}
