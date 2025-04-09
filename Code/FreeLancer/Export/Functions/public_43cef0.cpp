#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43cef0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cf00 _public_43cf00
#define public_43cf11 _public_43cf11

PROC_DECLARE(0x43cef0, internal_43cef0, public_43cef0);
extern "C" NAKED register_t __cdecl internal_43cef0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x10]
        test esi, esi
        je public_43cf11
        nop 
        lea esp, ss:[esp]
        public_43cf00 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        call public_5b7e1d
        add esp, 4
        test esi, esi
        jne public_43cf00
        public_43cf11 : nop
        mov dword ptr ds : [edi+0x10], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x43cef0)
    }
}

#undef public_43cf00
#undef public_43cf11
