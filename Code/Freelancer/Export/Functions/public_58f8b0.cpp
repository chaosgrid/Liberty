#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57afd0);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_58f8ef _public_58f8ef
#define public_58f8fa _public_58f8fa
#define public_58f912 _public_58f912
#define public_58f918 _public_58f918
#define public_58f926 _public_58f926

PROC_DECLARE(0x58f8b0, internal_58f8b0, public_58f8b0);
extern "C" NAKED register_t __cdecl internal_58f8b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        cmp edx, 0xF005
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        jne public_58f926
        mov ecx, dword ptr ds : [esi+0x588]
        cmp eax, ecx
        jne public_58f918
        mov eax, dword ptr ds : [esi+0x578]
        test eax, eax
        je public_58f912
        call public_595dd0
        call public_5b7ec0
        mov edx, dword ptr ds : [esi+0x4A4]
        test edx, edx
        jne public_58f8ef
        xor ecx, ecx
        jmp public_58f8fa
        public_58f8ef : nop
        mov ecx, dword ptr ds : [esi+0x4A8]
        sub ecx, edx
        sar ecx, 2
        public_58f8fa : nop
        sub ecx, dword ptr ds : [esi+0x580]
        push ecx
        push eax
        mov eax, dword ptr ds : [esi+0x584]
        push eax
        call dword ptr ds : [esi+0x578]
        add esp, 0xC
        public_58f912 : nop
        mov al, 1
        pop esi
        ret 0xC
        public_58f918 : nop
        cmp eax, dword ptr ds : [esi+0x3F4]
        jne public_58f926
        mov al, 1
        pop esi
        ret 0xC
        public_58f926 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        push eax
        push edx
        mov ecx, esi
        call public_57afd0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x58f8b0)
    }
}

#undef public_58f8ef
#undef public_58f8fa
#undef public_58f912
#undef public_58f918
#undef public_58f926
