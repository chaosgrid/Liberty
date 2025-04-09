#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d50);
CLANG_FORWARD_PROC_SYMBOL(public_405130);
CLANG_FORWARD_PROC_SYMBOL(public_405510);
CLANG_FORWARD_PROC_SYMBOL(public_405820);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_402d81 _public_402d81
#define public_402db5 _public_402db5
#define public_402de2 _public_402de2
#define public_402de6 _public_402de6
#define public_402e09 _public_402e09
#define public_402e27 _public_402e27

PROC_DECLARE(0x402d50, internal_402d50, public_402d50);
extern "C" NAKED register_t __cdecl internal_402d50()
{
    __asm
    {
        sub esp, 0xC
        mov ecx, dword ptr ds : [public_61647c]
        mov edx, dword ptr ds : [public_616488]
        test edx, edx
        mov eax, dword ptr ds : [ecx]
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+8], eax
        je public_402de2
        mov edx, eax
        cmp eax, edx
        jne public_402de2
        mov edi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [public_616480]
        cmp edi, eax
        mov esi, edi
        je public_402db5
        public_402d81 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, offset public_616478
        call public_405510
        mov esi, dword ptr ds : [esi]
        push 0
        lea ecx, ds:[edi+0xC]
        call public_405820
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_616480]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_402d81
        mov ecx, dword ptr ds : [public_61647c]
        public_402db5 : nop
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ds : [public_61647c]
        mov dword ptr ds : [public_616488], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [public_61647c]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_616478
        mov dword ptr ds : [eax+8], eax
        call public_53e430
        jmp public_402e09
        public_402de2 : nop
        cmp eax, ecx
        je public_402e09
        public_402de6 : nop
        lea ecx, ss:[esp+8]
        mov esi, eax
        call public_4f3770
        push esi
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_616478
        call public_405130
        mov eax, dword ptr ss : [esp+8]
        cmp eax, edi
        jne public_402de6
        public_402e09 : nop
        mov eax, dword ptr ds : [public_616490]
        cmp dword ptr ds : [public_616474], eax
        pop edi
        pop esi
        je public_402e27
        mov dword ptr ds : [public_616474], eax
        mov dword ptr ds : [public_616498], 0
        public_402e27 : nop
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x402d50)
    }
}

#undef public_402d81
#undef public_402db5
#undef public_402de2
#undef public_402de6
#undef public_402e09
#undef public_402e27
