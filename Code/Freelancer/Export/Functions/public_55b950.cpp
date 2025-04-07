#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4285f0);
CLANG_FORWARD_PROC_SYMBOL(public_42ae40);
CLANG_FORWARD_PROC_SYMBOL(public_4bdd40);
CLANG_FORWARD_PROC_SYMBOL(public_55b950);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_59d580);
CLANG_FORWARD_PROC_SYMBOL(public_59d8d0);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_59e6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_55b98f _public_55b98f
#define public_55ba09 _public_55ba09
#define public_55baa4 _public_55baa4
#define public_55babd _public_55babd
#define public_55bae5 _public_55bae5
#define public_55bb22 _public_55bb22
#define public_55bb37 _public_55bb37
#define public_55bb5f _public_55bb5f
#define public_55bb66 _public_55bb66
#define public_55bb71 _public_55bb71
#define public_55bb8b _public_55bb8b
#define public_55bb94 _public_55bb94
#define public_55bb96 _public_55bb96
#define public_55bbc4 _public_55bbc4
#define public_55bc03 _public_55bc03
#define public_55bc17 _public_55bc17

PROC_DECLARE(0x55b950, internal_55b950, public_55b950);
extern "C" NAKED register_t __cdecl internal_55b950()
{
    __asm
    {
        sub esp, 0x48
        push ebx
        mov ebx, ecx
        test byte ptr ds : [ebx+0x331], 2
        push esi
        push edi
        je public_55bc17
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_55b98f
        call public_59e6a0
        test al, al
        je public_55b98f
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_55b98f
        mov cl, byte ptr ds : [eax+0x2D0]
        test cl, cl
        je public_55bc17
        public_55b98f : nop
        mov al, byte ptr ds : [ebx+0x330]
        test al, 0x10
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        je public_55bb71
        cmp edx, 0xFFFFFFFF
        jne public_55bc17
        cmp dword ptr ds : [ecx+4], 1
        jne public_55bc17
        and al, 0xEB
        push ebx
        mov byte ptr ds : [ebx+0x330], al
        call public_59d960
        fild dword ptr ds : [public_616844]
        fstp dword ptr ss : [esp]
        fild dword ptr ds : [public_616840]
        push ecx
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp]
        push ecx
        mov ecx, offset public_67dbf8
        call public_4bdd40
        mov eax, dword ptr ds : [public_679aec]
        test eax, eax
        mov ecx, 9
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x30]
        rep movsd
        jne public_55ba09
        call public_5b73e0
        mov dword ptr ds : [public_679aec], eax
        public_55ba09 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ebx]
        faddp 
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ecx
        fmul dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        call dword ptr ds : [edx+0x10]
        test al, al
        je public_55bb37
        mov eax, dword ptr ds : [ebx+0x374]
        cmp eax, 0xFFFFFFFF
        je public_55baa4
        push eax
        call public_5645c0
        add esp, 4
        jmp public_55bae5
        public_55baa4 : nop
        mov eax, dword ptr ds : [ebx+0x368]
        test eax, eax
        je public_55bae5
        mov eax, dword ptr ds : [ebx+0x364]
        test eax, eax
        jne public_55babd
        mov eax, dword ptr ds : [public_5c7078]
        public_55babd : nop
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x5C]
        push 0
        push ecx
        mov dword ptr ss : [esp+0x64], eax
        call public_42ae40
        add esp, 4
        push eax
        call public_4285f0
        add esp, 0xC
        public_55bae5 : nop
        mov al, byte ptr ds : [ebx+0x330]
        test al, al
        jns public_55bb22
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_55bb66
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        mov esi, eax
        test esi, esi
        je public_55bb66
        mov eax, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        push eax
        push 0x27
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x48
        ret 4
        public_55bb22 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0xB4]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x48
        ret 4
        public_55bb37 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        je public_55bb5f
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov esi, eax
        test esi, esi
        je public_55bb5f
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+8]
        push eax
        push 0x29
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_55bb5f : nop
        and byte ptr ds : [ebx+0x330], 0xFE
        public_55bb66 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x48
        ret 4
        public_55bb71 : nop
        cmp edx, 0xFFFFFFFF
        jne public_55bc17
        mov ecx, dword ptr ds : [ecx+4]
        cmp ecx, 2
        je public_55bb8b
        cmp ecx, 3
        jne public_55bc17
        public_55bb8b : nop
        cmp ecx, 3
        jne public_55bb94
        or al, 0x80
        jmp public_55bb96
        public_55bb94 : nop
        and al, 0x7F
        public_55bb96 : nop
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov byte ptr ds : [ebx+0x330], al
        je public_55bbc4
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov esi, eax
        test esi, esi
        je public_55bbc4
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+8]
        push eax
        push 0x28
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_55bbc4 : nop
        mov cl, byte ptr ds : [ebx+0x330]
        mov eax, dword ptr ds : [ebx+4]
        or cl, 0x14
        test eax, eax
        mov byte ptr ds : [ebx+0x330], cl
        je public_55bc03
        call public_59d580
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        mov esi, eax
        test esi, esi
        je public_55bc03
        mov edx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [esi]
        push 0
        mov ecx, ebx
        call dword ptr ds : [edx+8]
        push eax
        push 0x2C
        mov ecx, esi
        call dword ptr ds : [edi+0xA8]
        public_55bc03 : nop
        push ebx
        call public_59d8d0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x48
        ret 4
        public_55bc17 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x55b950)
    }
}

#undef public_55b98f
#undef public_55ba09
#undef public_55baa4
#undef public_55babd
#undef public_55bae5
#undef public_55bb22
#undef public_55bb37
#undef public_55bb5f
#undef public_55bb66
#undef public_55bb71
#undef public_55bb8b
#undef public_55bb94
#undef public_55bb96
#undef public_55bbc4
#undef public_55bc03
#undef public_55bc17
