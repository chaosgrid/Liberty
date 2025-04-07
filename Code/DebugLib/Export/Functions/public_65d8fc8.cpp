#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65d8fc8);

#define public_65d8fec _public_65d8fec
#define public_65d8ffa _public_65d8ffa
#define public_65d9008 _public_65d9008
#define public_65d9016 _public_65d9016
#define public_65d9024 _public_65d9024
#define public_65d9032 _public_65d9032
#define public_65d9040 _public_65d9040
#define public_65d9051 _public_65d9051
#define public_65d9058 _public_65d9058
#define public_65d9067 _public_65d9067

PROC_DECLARE(0x65d8fc8, internal_65d8fc8, public_65d8fc8);
extern "C" NAKED register_t __cdecl internal_65d8fc8()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e3440]
        cmp eax, 0xFFFFFFFF
        je public_65d9067
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_65d8fec
        push eax
        call dword ptr ds : [public_65e1078]
        mov esi, eax
        test esi, esi
        je public_65d9058
        public_65d8fec : nop
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_65d8ffa
        push eax
        call public_65d7f23
        pop ecx
        public_65d8ffa : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_65d9008
        push eax
        call public_65d7f23
        pop ecx
        public_65d9008 : nop
        mov eax, dword ptr ds : [esi+0x30]
        test eax, eax
        je public_65d9016
        push eax
        call public_65d7f23
        pop ecx
        public_65d9016 : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_65d9024
        push eax
        call public_65d7f23
        pop ecx
        public_65d9024 : nop
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_65d9032
        push eax
        call public_65d7f23
        pop ecx
        public_65d9032 : nop
        mov eax, dword ptr ds : [esi+0x44]
        test eax, eax
        je public_65d9040
        push eax
        call public_65d7f23
        pop ecx
        public_65d9040 : nop
        mov eax, dword ptr ds : [esi+0x50]
        cmp eax, offset public_65e56b0
        je public_65d9051
        push eax
        call public_65d7f23
        pop ecx
        public_65d9051 : nop
        push esi
        call public_65d7f23
        pop ecx
        public_65d9058 : nop
        push 0
        push dword ptr ds : [public_65e3440]
        call dword ptr ds : [public_65e1068]
        pop esi
        public_65d9067 : nop
        ret 
        UNREACHABLE_TRAP(0x65d8fc8)
    }
}

#undef public_65d8fec
#undef public_65d8ffa
#undef public_65d9008
#undef public_65d9016
#undef public_65d9024
#undef public_65d9032
#undef public_65d9040
#undef public_65d9051
#undef public_65d9058
#undef public_65d9067
