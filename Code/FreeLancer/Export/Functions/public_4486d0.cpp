#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4486d0);

#define public_4486e7 _public_4486e7
#define public_4486fb _public_4486fb

PROC_DECLARE(0x4486d0, internal_4486d0, public_4486d0);
extern "C" NAKED register_t __cdecl internal_4486d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_4486e7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+8], 0
        public_4486e7 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_4486fb
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0xC], 0
        public_4486fb : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4486d0)
    }
}

#undef public_4486e7
#undef public_4486fb
