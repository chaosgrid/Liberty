#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d50);
CLANG_FORWARD_PROC_SYMBOL(public_4174a0);
CLANG_FORWARD_PROC_SYMBOL(public_418fa0);
CLANG_FORWARD_PROC_SYMBOL(public_52afa0);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4174f8 _public_4174f8
#define public_417545 _public_417545
#define public_417557 _public_417557
#define public_417588 _public_417588
#define public_417595 _public_417595
#define public_4175a5 _public_4175a5
#define public_4175b1 _public_4175b1
#define public_4175c2 _public_4175c2
#define public_4175e0 _public_4175e0
#define public_4175f8 _public_4175f8
#define public_4175ff _public_4175ff
#define public_417614 _public_417614

PROC_DECLARE(0x4174a0, internal_4174a0, public_4174a0);
extern "C" NAKED register_t __cdecl internal_4174a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_616660]
        sub esp, 8
        push ebx
        push esi
        push edi
        push eax
        call dword ptr ds : [public_5c71d8]
        mov ecx, dword ptr ds : [public_616658]
        mov edx, dword ptr ds : [public_616664]
        add esp, 4
        push ecx
        push edx
        mov dword ptr ds : [public_616660], 0
        call dword ptr ds : [public_5c6e0c]
        mov eax, dword ptr ds : [public_616654]
        push eax
        call dword ptr ds : [public_5c6e3c]
        mov ecx, dword ptr ds : [public_616664]
        push ecx
        call dword ptr ds : [public_5c6e38]
        mov ebx, dword ptr ds : [public_61651c]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        je public_417545
        public_4174f8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push 0
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        call public_53ab20
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_418fa0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [public_616520]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ds : [public_616520], ecx
        jne public_4174f8
        public_417545 : nop
        mov eax, dword ptr ds : [public_616644]
        cmp eax, dword ptr ds : [public_616648]
        mov edi, eax
        je public_4175c2
        lea ebx, ds:[eax+4]
        public_417557 : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        mov esi, dword ptr ds : [edi]
        je public_417588
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xB8]
        mov edx, dword ptr ds : [esi+8]
        imul edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_616650]
        neg edx
        lea ecx, ds:[eax+edx*2]
        mov dword ptr ds : [public_616650], ecx
        public_417588 : nop
        test esi, esi
        je public_417595
        push esi
        call public_5b7e1d
        add esp, 4
        public_417595 : nop
        mov edx, dword ptr ds : [public_616648]
        mov eax, ebx
        cmp eax, edx
        je public_4175b1
        mov ecx, edi
        sub ecx, ebx
        public_4175a5 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], esi
        add eax, 4
        cmp eax, edx
        jne public_4175a5
        public_4175b1 : nop
        mov eax, dword ptr ds : [public_616648]
        sub eax, 4
        cmp edi, eax
        mov dword ptr ds : [public_616648], eax
        jne public_417557
        public_4175c2 : nop
        lea edx, ss:[esp+0xC]
        push edx
        mov ecx, offset public_616524
        call public_53e430
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_616528]
        je public_417614
        lea ecx, ds:[ecx]
        public_4175e0 : nop
        mov esi, dword ptr ds : [eax+0x10]
        test esi, esi
        je public_4175ff
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4175f8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi], 0
        public_4175f8 : nop
        mov dword ptr ds : [esi+4], 0
        public_4175ff : nop
        lea ecx, ss:[esp+0xC]
        call public_52afa0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_616528]
        jne public_4175e0
        public_417614 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        jmp public_402d50
        UNREACHABLE_TRAP(0x4174a0)
    }
}

#undef public_4174f8
#undef public_417545
#undef public_417557
#undef public_417588
#undef public_417595
#undef public_4175a5
#undef public_4175b1
#undef public_4175c2
#undef public_4175e0
#undef public_4175f8
#undef public_4175ff
#undef public_417614
