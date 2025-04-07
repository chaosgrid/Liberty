#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_634d050);

#define public_634d06e _public_634d06e

PROC_DECLARE(0x634d050, internal_634d050, public_634d050);
extern "C" NAKED register_t __cdecl internal_634d050()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0xCA]
        cmp ax, word ptr ds : [ecx+0xC8]
        push esi
        lea esi, ds:[ecx+0xC8]
        jb public_634d06e
        mov ecx, esi
        call public_63441a0
        public_634d06e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634d050)
    }
}

#undef public_634d06e
