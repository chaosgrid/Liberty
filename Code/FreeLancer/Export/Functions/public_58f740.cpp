#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f740);
CLANG_FORWARD_PROC_SYMBOL(public_595dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_58f779 _public_58f779
#define public_58f784 _public_58f784
#define public_58f79c _public_58f79c

PROC_DECLARE(0x58f740, internal_58f740, public_58f740);
extern "C" NAKED register_t __cdecl internal_58f740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x578], eax
        mov dword ptr ds : [esi+0x584], ecx
        je public_58f79c
        mov ecx, dword ptr ds : [esi+0x588]
        call public_595dd0
        call public_5b7ec0
        mov edx, dword ptr ds : [esi+0x4A4]
        test edx, edx
        jne public_58f779
        xor ecx, ecx
        jmp public_58f784
        public_58f779 : nop
        mov ecx, dword ptr ds : [esi+0x4A8]
        sub ecx, edx
        sar ecx, 2
        public_58f784 : nop
        sub ecx, dword ptr ds : [esi+0x580]
        mov edx, dword ptr ds : [esi+0x584]
        push ecx
        push eax
        push edx
        call dword ptr ds : [esi+0x578]
        add esp, 0xC
        public_58f79c : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x58f740)
    }
}

#undef public_58f779
#undef public_58f784
#undef public_58f79c
