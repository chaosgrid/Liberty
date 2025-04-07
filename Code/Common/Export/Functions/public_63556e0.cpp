#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63556e0);

#define public_63556f5 _public_63556f5

PROC_DECLARE(0x63556e0, internal_63556e0, public_63556e0);
extern "C" NAKED register_t __cdecl internal_63556e0()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0x36]
        cmp ax, word ptr ds : [ecx+0x34]
        push esi
        lea esi, ds:[ecx+0x34]
        jb public_63556f5
        mov ecx, esi
        call public_63441a0
        public_63556f5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63556e0)
    }
}

#undef public_63556f5
