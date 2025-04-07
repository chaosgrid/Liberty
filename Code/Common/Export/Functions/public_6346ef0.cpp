#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6346ef0);

#define public_6346f05 _public_6346f05

PROC_DECLARE(0x6346ef0, internal_6346ef0, public_6346ef0);
extern "C" NAKED register_t __cdecl internal_6346ef0()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0x52]
        cmp ax, word ptr ds : [ecx+0x50]
        push esi
        lea esi, ds:[ecx+0x50]
        jb public_6346f05
        mov ecx, esi
        call public_63441a0
        public_6346f05 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6346ef0)
    }
}

#undef public_6346f05
