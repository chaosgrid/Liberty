#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6348ec0);

#define public_6348ed5 _public_6348ed5

PROC_DECLARE(0x6348ec0, internal_6348ec0, public_6348ec0);
extern "C" NAKED register_t __cdecl internal_6348ec0()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0xE]
        cmp ax, word ptr ds : [ecx+0xC]
        push esi
        lea esi, ds:[ecx+0xC]
        jb public_6348ed5
        mov ecx, esi
        call public_63441a0
        public_6348ed5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6348ec0)
    }
}

#undef public_6348ed5
