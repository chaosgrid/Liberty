#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_634ce60);

#define public_634ce7e _public_634ce7e

PROC_DECLARE(0x634ce60, internal_634ce60, public_634ce60);
extern "C" NAKED register_t __cdecl internal_634ce60()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0x126]
        cmp ax, word ptr ds : [ecx+0x124]
        push esi
        lea esi, ds:[ecx+0x124]
        jb public_634ce7e
        mov ecx, esi
        call public_63441a0
        public_634ce7e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634ce60)
    }
}

#undef public_634ce7e
