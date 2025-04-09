#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40c690);
CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);

#define public_40c6c9 _public_40c6c9
#define public_40c6da _public_40c6da
#define public_40c702 _public_40c702
#define public_40c713 _public_40c713
#define public_40c73b _public_40c73b
#define public_40c74c _public_40c74c
#define public_40c774 _public_40c774
#define public_40c785 _public_40c785
#define public_40c7ad _public_40c7ad
#define public_40c7be _public_40c7be

PROC_DECLARE(0x40c690, internal_40c690, public_40c690);
extern "C" NAKED register_t __cdecl internal_40c690()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xB0]
        test eax, eax
        jne public_40c7be
        lea eax, ds:[esi+0x54]
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xB4], eax
        jne public_40c6c9
        lea ecx, ds:[esi+0x68]
        push ecx
        call public_40f080
        add esp, 4
        mov dword ptr ds : [esi+0xB4], eax
        public_40c6c9 : nop
        mov ecx, dword ptr ds : [esi+0xB4]
        test ecx, ecx
        je public_40c6da
        push 0
        call public_40e960
        public_40c6da : nop
        lea edx, ds:[esi+0x58]
        push edx
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xB8], eax
        jne public_40c702
        lea eax, ds:[esi+0x6C]
        push eax
        call public_40f080
        add esp, 4
        mov dword ptr ds : [esi+0xB8], eax
        public_40c702 : nop
        mov ecx, dword ptr ds : [esi+0xB8]
        test ecx, ecx
        je public_40c713
        push 0
        call public_40e960
        public_40c713 : nop
        lea ecx, ds:[esi+0x5C]
        push ecx
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xBC], eax
        jne public_40c73b
        lea edx, ds:[esi+0x70]
        push edx
        call public_40f080
        add esp, 4
        mov dword ptr ds : [esi+0xBC], eax
        public_40c73b : nop
        mov ecx, dword ptr ds : [esi+0xBC]
        test ecx, ecx
        je public_40c74c
        push 0
        call public_40e960
        public_40c74c : nop
        lea eax, ds:[esi+0x60]
        push eax
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC0], eax
        jne public_40c774
        lea ecx, ds:[esi+0x74]
        push ecx
        call public_40f080
        add esp, 4
        mov dword ptr ds : [esi+0xC0], eax
        public_40c774 : nop
        mov ecx, dword ptr ds : [esi+0xC0]
        test ecx, ecx
        je public_40c785
        push 0
        call public_40e960
        public_40c785 : nop
        lea edx, ds:[esi+0x64]
        push edx
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC4], eax
        jne public_40c7ad
        lea eax, ds:[esi+0x78]
        push eax
        call public_40f080
        add esp, 4
        mov dword ptr ds : [esi+0xC4], eax
        public_40c7ad : nop
        mov ecx, dword ptr ds : [esi+0xC4]
        test ecx, ecx
        je public_40c7be
        push 0
        call public_40e960
        public_40c7be : nop
        mov eax, dword ptr ds : [esi+0xB0]
        inc eax
        mov dword ptr ds : [esi+0xB0], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x40c690)
    }
}

#undef public_40c6c9
#undef public_40c6da
#undef public_40c702
#undef public_40c713
#undef public_40c73b
#undef public_40c74c
#undef public_40c774
#undef public_40c785
#undef public_40c7ad
#undef public_40c7be
