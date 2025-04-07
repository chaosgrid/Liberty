#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63602a0);

PROC_DECLARE(0x63602a0, internal_63602a0, public_63602a0);
extern "C" NAKED register_t __cdecl internal_63602a0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0x29
        lea edi, ds:[edx+4]
        mov dword ptr ds : [edx], offset public_63a5714
        rep stosd
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63602a0)
    }
}
