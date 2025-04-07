#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10009830);

#define public_10009843 _public_10009843
#define public_1000984b _public_1000984b

PROC_DECLARE(0x10009830, internal_10009830, public_10009830);
extern "C" NAKED register_t __cdecl internal_10009830()
{
    __asm
    {
        mov ecx, dword ptr ds : [edx+0x14]
        cmp ecx, 0x7BC
        jbe public_10009843
        sub ecx, 0x7BC
        jmp public_1000984b
        public_10009843 : nop
        cmp ecx, 0x50
        jbe public_1000984b
        sub ecx, 0x50
        public_1000984b : nop
        mov eax, dword ptr ds : [edx+8]
        push esi
        mov esi, dword ptr ds : [edx+4]
        shl eax, 6
        add eax, esi
        mov esi, dword ptr ds : [edx]
        shr esi, 1
        shl eax, 5
        add eax, esi
        mov esi, dword ptr ds : [edx+0x10]
        shl ecx, 4
        lea ecx, ds:[ecx+esi+1]
        mov esi, dword ptr ds : [edx+0xC]
        shl ecx, 5
        add ecx, esi
        shl ecx, 0x10
        or eax, ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10009830)
    }
}

#undef public_10009843
#undef public_1000984b
