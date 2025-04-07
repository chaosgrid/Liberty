#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_43cbe1 _public_43cbe1
#define public_43cbf6 _public_43cbf6
#define public_43cbff _public_43cbff
#define public_43cc03 _public_43cc03
#define public_43cc18 _public_43cc18
#define public_43cc29 _public_43cc29
#define public_43cc40 _public_43cc40

PROC_DECLARE(0x43cbd0, internal_43cbd0, public_43cbd0);
extern "C" NAKED register_t __cdecl internal_43cbd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_5cb024
        je public_43cc03
        public_43cbe1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_43cbf6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_43cbff
        public_43cbf6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43cbff : nop
        test edi, edi
        jne public_43cbe1
        public_43cc03 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_43cc29
        public_43cc18 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_5b7e1d
        add esp, 4
        test edi, edi
        jne public_43cc18
        public_43cc29 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_43cc40
        push esi
        call public_5b7e1d
        add esp, 4
        public_43cc40 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x43cbd0)
    }
}

#undef public_43cbe1
#undef public_43cbf6
#undef public_43cbff
#undef public_43cc03
#undef public_43cc18
#undef public_43cc29
#undef public_43cc40
