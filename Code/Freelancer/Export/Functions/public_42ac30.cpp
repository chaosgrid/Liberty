#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42ac30);
CLANG_FORWARD_PROC_SYMBOL(public_42bf90);

#define public_42ac50 _public_42ac50
#define public_42ac73 _public_42ac73
#define public_42ac80 _public_42ac80
#define public_42ac88 _public_42ac88
#define public_42ac92 _public_42ac92
#define public_42ac99 _public_42ac99
#define public_42aca1 _public_42aca1

PROC_DECLARE(0x42ac30, internal_42ac30, public_42ac30);
extern "C" NAKED register_t __cdecl internal_42ac30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [public_667ce4]
        push esi
        je public_42aca1
        mov dword ptr ds : [public_667ce4], eax
        mov eax, dword ptr ds : [public_667cc4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_42aca1
        lea ecx, ds:[ecx]
        public_42ac50 : nop
        mov eax, dword ptr ds : [public_667ce4]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_42bf90
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42ac80
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        jne public_42ac99
        public_42ac73 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x39]
        test cl, cl
        je public_42ac73
        jmp public_42ac99
        public_42ac80 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_42ac92
        public_42ac88 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_42ac88
        public_42ac92 : nop
        cmp dword ptr ds : [esi+8], eax
        je public_42ac99
        mov esi, eax
        public_42ac99 : nop
        cmp esi, dword ptr ds : [public_667cc4]
        jne public_42ac50
        public_42aca1 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42ac30)
    }
}

#undef public_42ac50
#undef public_42ac73
#undef public_42ac80
#undef public_42ac88
#undef public_42ac92
#undef public_42ac99
#undef public_42aca1
