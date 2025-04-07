#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48dd40);
CLANG_FORWARD_PROC_SYMBOL(public_491410);
CLANG_FORWARD_PROC_SYMBOL(public_4915b0);
CLANG_FORWARD_PROC_SYMBOL(public_496600);
CLANG_FORWARD_PROC_SYMBOL(public_49e550);
CLANG_FORWARD_PROC_SYMBOL(public_4a0220);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);
CLANG_FORWARD_PROC_SYMBOL(public_516f70);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_49e580 _public_49e580
#define public_49e582 _public_49e582
#define public_49e589 _public_49e589
#define public_49e5a0 _public_49e5a0
#define public_49e5d7 _public_49e5d7
#define public_49e5e7 _public_49e5e7
#define public_49e606 _public_49e606
#define public_49e61d _public_49e61d
#define public_49e653 _public_49e653
#define public_49e66d _public_49e66d
#define public_49e679 _public_49e679
#define public_49e695 _public_49e695
#define public_49e830 _public_49e830
#define public_49e851 _public_49e851

PROC_DECLARE(0x49e550, internal_49e550, public_49e550);
extern "C" NAKED register_t __cdecl internal_49e550()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0x7D0], 0
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 4
        push edi
        je public_49e580
        cmp eax, 7
        je public_49e580
        cmp eax, 6
        jne public_49e589
        mov eax, dword ptr ds : [esi+0xF44]
        push eax
        jmp public_49e582
        public_49e580 : nop
        push 0
        public_49e582 : nop
        mov ecx, esi
        call public_4a0220
        public_49e589 : nop
        mov eax, dword ptr ds : [esi+0x814]
        test eax, eax
        je public_49e5d7
        lea edi, ds:[esi+0x80C]
        lea esp, ss:[esp]
        public_49e5a0 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call public_53e430
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        push eax
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, edi
        call public_516f70
        mov eax, dword ptr ds : [esi+0x814]
        test eax, eax
        jne public_49e5a0
        public_49e5d7 : nop
        mov eax, dword ptr ds : [esi+0x404]
        test eax, eax
        je public_49e61d
        lea ebp, ds:[esi+0x3FC]
        public_49e5e7 : nop
        mov eax, dword ptr ds : [esi+0x400]
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edi+8]
        test ebx, ebx
        je public_49e606
        mov ecx, ebx
        call public_48dd40
        push ebx
        call public_5b7e1d
        add esp, 4
        public_49e606 : nop
        push edi
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, ebp
        call public_516f70
        mov eax, dword ptr ds : [esi+0x404]
        test eax, eax
        jne public_49e5e7
        public_49e61d : nop
        xor eax, eax
        mov ecx, 0x63
        lea edi, ds:[esi+0x4B8]
        rep stosd
        mov ecx, 0x63
        lea edi, ds:[esi+0x644]
        rep stosd
        mov ecx, esi
        call public_4915b0
        mov ecx, esi
        call public_491410
        mov eax, dword ptr ds : [esi+0x400]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_49e695
        public_49e653 : nop
        mov ebx, dword ptr ds : [edi+8]
        cmp dword ptr ds : [ebx], 0
        jne public_49e66d
        mov ecx, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ebp, eax
        call public_4c4830
        cmp ebp, eax
        je public_49e679
        public_49e66d : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x400]
        jne public_49e653
        jmp public_49e695
        public_49e679 : nop
        mov eax, dword ptr ds : [esi+0x4B4]
        add ebx, 0x30
        mov ecx, dword ptr ds : [ebx]
        add eax, 0x30
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], ecx
        public_49e695 : nop
        mov ecx, dword ptr ds : [esi+0x7F0]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x7EC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x8D8]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x8DC]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB4C]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB50]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC58]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC14]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC18]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC5C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xC60]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xC64]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB54]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xAF8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xAFC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0xB00]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0xB04]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+0x46C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call public_496600
        lea edi, ds:[esi+0xB08]
        mov ebx, 8
        lea ecx, ds:[ecx]
        public_49e830 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        add edi, 4
        dec ebx
        jne public_49e830
        lea edi, ds:[esi+0xB28]
        mov ebx, 8
        public_49e851 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        add edi, 4
        dec ebx
        jne public_49e851
        mov esi, dword ptr ds : [esi+0x8C8]
        mov edx, dword ptr ds : [esi]
        push 0
        push 0x505
        push 0x1E
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x49e550)
    }
}

#undef public_49e580
#undef public_49e582
#undef public_49e589
#undef public_49e5a0
#undef public_49e5d7
#undef public_49e5e7
#undef public_49e606
#undef public_49e61d
#undef public_49e653
#undef public_49e66d
#undef public_49e679
#undef public_49e695
#undef public_49e830
#undef public_49e851
