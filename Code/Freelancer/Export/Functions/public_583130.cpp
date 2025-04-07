#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1130);

#define public_58319e _public_58319e
#define public_5831a5 _public_5831a5

PROC_DECLARE(0x583130, internal_583130, public_583130);
extern "C" NAKED register_t __cdecl internal_583130()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push edi
        lea eax, ds:[esi+0x360]
        push eax
        lea ecx, ds:[esi+0x390]
        call public_5a1130
        test al, al
        jne public_5831a5
        push edi
        lea ecx, ds:[esi+0x404]
        push ecx
        lea ecx, ds:[esi+0x434]
        call public_5a1130
        test al, al
        jne public_5831a5
        push edi
        lea edx, ds:[esi+0x4A8]
        push edx
        lea ecx, ds:[esi+0x4D8]
        call public_5a1130
        test al, al
        jne public_5831a5
        mov al, byte ptr ds : [esi+0x66D]
        test al, al
        je public_58319e
        push edi
        lea eax, ds:[esi+0x5B8]
        push eax
        lea ecx, ds:[esi+0x5E8]
        call public_5a1130
        test al, al
        jne public_5831a5
        public_58319e : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        public_5831a5 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x583130)
    }
}

#undef public_58319e
#undef public_5831a5
