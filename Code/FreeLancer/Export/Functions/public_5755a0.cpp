#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5755a0);
CLANG_FORWARD_PROC_SYMBOL(public_575b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5755af _public_5755af
#define public_5755c5 _public_5755c5
#define public_5755d7 _public_5755d7
#define public_575600 _public_575600
#define public_575614 _public_575614
#define public_575620 _public_575620
#define public_57562e _public_57562e
#define public_575668 _public_575668
#define public_57568d _public_57568d

PROC_DECLARE(0x5755a0, internal_5755a0, public_5755a0);
extern "C" NAKED register_t __cdecl internal_5755a0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_5755af
        xor edx, edx
        jmp public_5755c5
        public_5755af : nop
        mov ecx, dword ptr ds : [esi+0xC]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_5755c5 : nop
        mov eax, dword ptr ss : [esp+0xC]
        cmp edx, eax
        jae public_57568d
        test eax, eax
        jge public_5755d7
        xor eax, eax
        public_5755d7 : nop
        push ebx
        push ebp
        lea ecx, ds:[eax+eax*8]
        shl ecx, 2
        push edi
        push ecx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x10], eax
        mov ebx, eax
        je public_575614
        lea esp, ss:[esp]
        public_575600 : nop
        push edi
        push ebx
        call public_575b80
        add edi, 0x24
        add esp, 8
        add ebx, 0x24
        cmp edi, ebp
        jne public_575600
        public_575614 : nop
        mov ebx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        cmp edi, ebx
        je public_57562e
        mov edi, edi
        public_575620 : nop
        mov ecx, edi
        call public_487c30
        add edi, 0x24
        cmp edi, ebx
        jne public_575620
        public_57562e : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ds:[eax+eax*8]
        lea ecx, ds:[edi+eax*4]
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+0xC], ecx
        jne public_575668
        xor edx, edx
        lea ecx, ds:[edx+edx*8]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop ebp
        pop ebx
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ecx
        ret 4
        public_575668 : nop
        mov ecx, dword ptr ds : [esi+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        lea ecx, ds:[edx+edx*8]
        lea edx, ds:[edi+ecx*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop ebp
        mov dword ptr ds : [esi+8], edx
        pop ebx
        public_57568d : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x5755a0)
    }
}

#undef public_5755af
#undef public_5755c5
#undef public_5755d7
#undef public_575600
#undef public_575614
#undef public_575620
#undef public_57562e
#undef public_575668
#undef public_57568d
