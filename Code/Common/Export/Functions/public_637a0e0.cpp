#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637a0e0);

PROC_DECLARE(0x637a0e0, internal_637a0e0, public_637a0e0);
extern "C" NAKED register_t __cdecl internal_637a0e0()
{
    __asm
    {
        mov edx, ecx
        xor eax, eax
        push edi
        mov dword ptr ds : [edx+0xC], eax
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [edx+4], eax
        mov dword ptr ds : [edx+0x10], eax
        mov byte ptr ds : [edx+0x14], al
        mov byte ptr ds : [edx+0x15], al
        mov dword ptr ds : [edx+0x18], eax
        mov ecx, 0x1B
        lea edi, ds:[edx+0x1C]
        mov dword ptr ds : [edx], offset public_63a5998
        rep stosd
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x637a0e0)
    }
}
