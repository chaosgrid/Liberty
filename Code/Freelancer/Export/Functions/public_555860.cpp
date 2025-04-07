#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e960);
CLANG_FORWARD_PROC_SYMBOL(public_40e990);
CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_527820);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_555860);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5ad970);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_555890 _public_555890
#define public_5558a1 _public_5558a1
#define public_5558c3 _public_5558c3
#define public_5558d2 _public_5558d2
#define public_5558e0 _public_5558e0
#define public_5558eb _public_5558eb
#define public_5558f3 _public_5558f3
#define public_5558ff _public_5558ff
#define public_555920 _public_555920
#define public_555934 _public_555934
#define public_555971 _public_555971
#define public_555980 _public_555980
#define public_5559ab _public_5559ab
#define public_5559b5 _public_5559b5

PROC_DECLARE(0x555860, internal_555860, public_555860);
extern "C" NAKED register_t __cdecl internal_555860()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x18]
        test ecx, ecx
        push esi
        lea esi, ds:[ebx+0x14]
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        je public_5558c3
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        je public_5558c3
        mov edi, dword ptr ds : [ebx+0x18]
        cmp edi, dword ptr ds : [ebx+0x1C]
        je public_5558a1
        nop 
        lea esp, ss:[esp]
        public_555890 : nop
        mov ecx, dword ptr ds : [edi]
        call public_40e990
        mov eax, dword ptr ds : [ebx+0x1C]
        add edi, 4
        cmp edi, eax
        jne public_555890
        public_5558a1 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push eax
        push eax
        call public_527820
        mov edi, eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        push eax
        push edi
        mov ecx, esi
        call public_53aaa0
        mov dword ptr ds : [esi+8], edi
        public_5558c3 : nop
        mov ecx, dword ptr ds : [ebx+8]
        test ecx, ecx
        jne public_5558d2
        xor edx, edx
        mov dword ptr ss : [esp+0x10], edx
        jmp public_5558e0
        public_5558d2 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 2
        mov dword ptr ss : [esp+0x10], eax
        mov edx, eax
        public_5558e0 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_5558eb
        xor eax, eax
        jmp public_5558f3
        public_5558eb : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_5558f3 : nop
        cmp eax, edx
        jae public_555971
        test edx, edx
        mov eax, edx
        jge public_5558ff
        xor eax, eax
        public_5558ff : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_5b7e84
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_555934
        nop 
        public_555920 : nop
        push edi
        push ebx
        call public_5999b0
        add edi, 4
        add esp, 8
        add ebx, 4
        cmp edi, ebp
        jne public_555920
        public_555934 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        mov ecx, esi
        call public_53aaa0
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea eax, ds:[edi+edx*4]
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0xC], eax
        call public_5ad970
        mov ebx, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+4], edi
        public_555971 : nop
        mov edi, dword ptr ds : [ebx+8]
        cmp edi, dword ptr ds : [ebx+0xC]
        je public_5559b5
        mov ebp, dword ptr ss : [esp+0x20]
        lea ecx, ds:[ecx]
        public_555980 : nop
        push edi
        call public_40f080
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_5559ab
        push ebp
        mov ecx, eax
        call public_40e960
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x20]
        push edx
        push 1
        push eax
        mov ecx, esi
        call public_537260
        public_5559ab : nop
        mov eax, dword ptr ds : [ebx+0xC]
        add edi, 4
        cmp edi, eax
        jne public_555980
        public_5559b5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x555860)
    }
}

#undef public_555890
#undef public_5558a1
#undef public_5558c3
#undef public_5558d2
#undef public_5558e0
#undef public_5558eb
#undef public_5558f3
#undef public_5558ff
#undef public_555920
#undef public_555934
#undef public_555971
#undef public_555980
#undef public_5559ab
#undef public_5559b5
