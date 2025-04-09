#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ceb0);

PROC_DECLARE(0x44ceb0, internal_44ceb0, public_44ceb0);
extern "C" NAKED register_t __cdecl internal_44ceb0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        lea edi, ds:[edx+0x1134]
        mov ecx, 0x80
        rep stosd
        mov dword ptr ds : [edx+0x1334], eax
        mov dword ptr ds : [edx+0x13A8], eax
        pop edi
        ret 
        UNREACHABLE_TRAP(0x44ceb0)
    }
}
