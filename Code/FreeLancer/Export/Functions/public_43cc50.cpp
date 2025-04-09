#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cc61 _public_43cc61
#define public_43cc76 _public_43cc76
#define public_43cc7f _public_43cc7f
#define public_43cc83 _public_43cc83
#define public_43cc98 _public_43cc98
#define public_43cca9 _public_43cca9
#define public_43ccc0 _public_43ccc0

PROC_DECLARE(0x43cc50, internal_43cc50, public_43cc50);
extern "C" NAKED register_t __cdecl internal_43cc50()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5cb02c
        je public_43cc83
        public_43cc61 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43cc76
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43cc7f
        public_43cc76 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43cc7f : nop
        test edi, edi
        jne public_43cc61
        public_43cc83 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_43cca9
        public_43cc98 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_43cc98
        public_43cca9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_43ccc0
        push esi
        call public_5b7e1d
        add esp, 4
        public_43ccc0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cc50)
    }
}

#undef public_43cc61
#undef public_43cc76
#undef public_43cc7f
#undef public_43cc83
#undef public_43cc98
#undef public_43cca9
#undef public_43ccc0
