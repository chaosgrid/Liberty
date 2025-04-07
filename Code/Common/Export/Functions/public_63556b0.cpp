#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63556b0);

#define public_63556c1 _public_63556c1

PROC_DECLARE(0x63556b0, internal_63556b0, public_63556b0);
extern "C" NAKED register_t __cdecl internal_63556b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ax, word ptr ds : [esi+2]
        cmp ax, word ptr ds : [esi]
        jb public_63556c1
        call public_63441a0
        public_63556c1 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63556b0)
    }
}

#undef public_63556c1
