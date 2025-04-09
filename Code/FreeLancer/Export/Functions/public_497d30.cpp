#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_492410);
CLANG_FORWARD_PROC_SYMBOL(public_496d40);
CLANG_FORWARD_PROC_SYMBOL(public_4978c0);
CLANG_FORWARD_PROC_SYMBOL(public_497970);
CLANG_FORWARD_PROC_SYMBOL(public_49ea50);
CLANG_FORWARD_PROC_SYMBOL(public_4a1b50);
CLANG_FORWARD_PROC_SYMBOL(public_4be390);
CLANG_FORWARD_PROC_SYMBOL(public_4c4810);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_497d53 _public_497d53
#define public_497e19 _public_497e19
#define public_497e99 _public_497e99
#define public_497eed _public_497eed
#define public_497fa7 _public_497fa7
#define public_497fdf _public_497fdf
#define public_498064 _public_498064
#define public_498066 _public_498066
#define public_4980a2 _public_4980a2
#define public_4980b4 _public_4980b4
#define public_4980b6 _public_4980b6

PROC_DECLARE(0x497d30, internal_497d30, public_497d30);
extern "C" NAKED register_t __cdecl internal_497d30()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi]
        cmp eax, 0xFFFFFFFF
        mov esi, ecx
        je public_497d53
        cmp eax, 0xFFFFFFFE
        je public_497d53
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 4
        public_497d53 : nop
        call public_4be390
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 4
        je public_4980b6
        cmp eax, 6
        je public_4980b6
        cmp eax, 7
        je public_4980b6
        fild dword ptr ds : [public_616840]
        fsub dword ptr ds : [esi+0x424]
        fild dword ptr ds : [public_616844]
        fsub dword ptr ds : [esi+0x428]
        fstp dword ptr ss : [esp+0x2C]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4980b4
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_4980b4
        fcomp dword ptr ds : [esi+0x430]
        fnstsw ax
        test ah, 5
        jp public_4980b6
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [esi+0x434]
        fnstsw ax
        test ah, 5
        jp public_4980b6
        mov eax, dword ptr ds : [edi+4]
        mov ecx, 2
        cmp eax, ecx
        jne public_497e19
        cmp dword ptr ds : [esi+0x7D0], ecx
        jne public_497e19
        mov byte ptr ds : [esi+0x7D4], 1
        mov byte ptr ds : [esi+0x7D5], 0
        mov eax, dword ptr ds : [public_616840]
        mov dword ptr ds : [esi+0x7D8], eax
        mov edx, dword ptr ds : [public_616844]
        mov dword ptr ds : [esi+0x7DC], edx
        public_497e19 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 3
        jne public_497fa7
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_492410
        test al, al
        je public_4980b6
        push 0
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_496d40
        mov edi, eax
        test edi, edi
        je public_497eed
        cmp dword ptr ds : [edi], 0
        jne public_4980b6
        mov eax, dword ptr ds : [edi+0x70]
        test eax, eax
        je public_497e99
        push 0
        push 0
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        mov byte ptr ss : [esp+0x3C], 0
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x3C]
        mov dl, byte ptr ds : [edi+0x74]
        or dl, al
        mov al, dl
        and al, 1
        mov byte ptr ds : [edi+0x74], dl
        mov byte ptr ds : [edi+0x48], al
        mov al, byte ptr ds : [esi+0x87E]
        add esp, 0x10
        test al, al
        je public_497e99
        mov byte ptr ds : [edi+0x48], 1
        public_497e99 : nop
        mov edx, dword ptr ds : [edi+0x70]
        mov ebx, dword ptr ds : [edi+0x50]
        push ebp
        mov ebp, dword ptr ds : [edi+0x4C]
        push 0
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov byte ptr ss : [esp+0x20], 0
        call public_4c4da0
        mov cl, byte ptr ss : [esp+0x20]
        mov al, byte ptr ds : [edi+0x74]
        or cl, al
        mov byte ptr ss : [esp+0x20], cl
        mov ecx, dword ptr ds : [edi+0x70]
        add esp, 0x10
        push ecx
        mov ecx, esi
        call public_4978c0
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push edx
        push ebx
        push ebp
        mov ecx, esi
        call public_497970
        pop ebp
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 4
        public_497eed : nop
        fld dword ptr ds : [esi+0xF48]
        mov edx, dword ptr ds : [esi+0x7E0]
        fdivr dword ptr ds : [public_5c75dc]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x87E]
        lea ecx, ss:[esp+0x10]
        push eax
        push 1
        push 0
        push ecx
        push edx
        fld st(0)
        fmul dword ptr ds : [esi+0x90C]
        fstp dword ptr ss : [esp+0x24]
        fld st(0)
        fmul dword ptr ds : [esi+0x910]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [esi+0x914]
        fstp dword ptr ss : [esp+0x2C]
        call public_4a1b50
        mov edi, eax
        add esp, 0x14
        test edi, edi
        je public_4980b6
        mov edx, dword ptr ds : [edi]
        push 0
        push 1
        lea eax, ss:[esp+0x34]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x38], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [edi]
        add esp, 0x10
        mov ecx, edi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edi]
        or cl, al
        mov byte ptr ss : [esp+0x2C], cl
        mov ecx, dword ptr ss : [esp+0x2C]
        push 0
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x88]
        push eax
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x84]
        push eax
        mov ecx, esi
        call public_497970
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 4
        public_497fa7 : nop
        cmp eax, 1
        jne public_4980b6
        mov al, byte ptr ds : [esi+0x7D5]
        test al, al
        jne public_4980b6
        mov al, byte ptr ds : [esi+0x818]
        test al, al
        je public_4980a2
        mov eax, dword ptr ds : [esi+0x7D0]
        cmp eax, 1
        je public_497fdf
        cmp eax, ecx
        jne public_4980a2
        public_497fdf : nop
        call public_4c4810
        test al, al
        jne public_4980b6
        mov eax, dword ptr ds : [esi+0x7D0]
        test eax, eax
        je public_4980b6
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_492410
        test al, al
        je public_4980b6
        call public_54baf0
        test eax, eax
        je public_4980b6
        fld dword ptr ds : [esi+0xF48]
        lea ecx, ds:[eax+0xC]
        test ecx, ecx
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        je public_498064
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_498064
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 1
        cmp dl, 1
        jne public_498064
        mov edi, ecx
        jmp public_498066
        public_498064 : nop
        xor edi, edi
        public_498066 : nop
        mov edx, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [edi]
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call dword ptr ds : [ebx+0x7C]
        mov ecx, dword ptr ds : [esi+0x8CC]
        push 0
        push 1
        mov byte ptr ds : [esi+0x818], 0
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0xA8]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 4
        public_4980a2 : nop
        mov ecx, esi
        call public_49ea50
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 4
        public_4980b4 : nop
        fstp st(0)
        public_4980b6 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x497d30)
    }
}

#undef public_497d53
#undef public_497e19
#undef public_497e99
#undef public_497eed
#undef public_497fa7
#undef public_497fdf
#undef public_498064
#undef public_498066
#undef public_4980a2
#undef public_4980b4
#undef public_4980b6
