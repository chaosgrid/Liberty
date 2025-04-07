#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cce1 _public_43cce1
#define public_43ccf6 _public_43ccf6
#define public_43ccff _public_43ccff
#define public_43cd03 _public_43cd03
#define public_43cd18 _public_43cd18
#define public_43cd29 _public_43cd29
#define public_43cd40 _public_43cd40

PROC_DECLARE(0x43ccd0, internal_43ccd0, public_43ccd0);
extern "C" NAKED register_t __cdecl internal_43ccd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5cb034
        je public_43cd03
        public_43cce1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43ccf6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43ccff
        public_43ccf6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43ccff : nop
        test edi, edi
        jne public_43cce1
        public_43cd03 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_43cd29
        public_43cd18 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_43cd18
        public_43cd29 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_43cd40
        push esi
        call public_5b7e1d
        add esp, 4
        public_43cd40 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43ccd0)
    }
}

#undef public_43cce1
#undef public_43ccf6
#undef public_43ccff
#undef public_43cd03
#undef public_43cd18
#undef public_43cd29
#undef public_43cd40
