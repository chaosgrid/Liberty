#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63922c0);

PROC_DECLARE(0x63922c0, internal_63922c0, public_63922c0);
/* CHUNK of public_6392320 */
extern "C" NAKED register_t __cdecl internal_63922c0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        lea edi, ds:[edx+8]
        mov ecx, 0x800
        mov dword ptr ds : [edx], offset public_63a5ac4
        rep stosd
        mov dword ptr ds : [edx+4], 1
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63922c0)
    }
}
