#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4324c0);
CLANG_FORWARD_PROC_SYMBOL(public_43b630);
CLANG_FORWARD_PROC_SYMBOL(public_43f060);
CLANG_FORWARD_PROC_SYMBOL(public_43f8e0);
CLANG_FORWARD_PROC_SYMBOL(public_43fd00);
CLANG_FORWARD_PROC_SYMBOL(public_442ab0);
CLANG_FORWARD_PROC_SYMBOL(public_442cb0);
CLANG_FORWARD_PROC_SYMBOL(public_4d9ca0);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b96b7);

#define public_43f981 _public_43f981
#define public_43f98b _public_43f98b
#define public_43f996 _public_43f996
#define public_43f9ad _public_43f9ad
#define public_43f9eb _public_43f9eb
#define public_43f9f3 _public_43f9f3
#define public_43fa0a _public_43fa0a
#define public_43fa48 _public_43fa48
#define public_43fa4e _public_43fa4e
#define public_43fa8d _public_43fa8d
#define public_43fa9a _public_43fa9a
#define public_43fb68 _public_43fb68
#define public_43fbc7 _public_43fbc7
#define public_43fc0f _public_43fc0f
#define public_43fc38 _public_43fc38
#define public_43fc70 _public_43fc70
#define public_43fcaa _public_43fcaa
#define public_43fcb7 _public_43fcb7
#define public_43fcbb _public_43fcbb
#define public_43fcd6 _public_43fcd6
#define public_43fcdf _public_43fcdf

PROC_DECLARE(0x43f8e0, internal_43f8e0, public_43f8e0);
extern "C" NAKED register_t __cdecl internal_43f8e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b96b7 @0x43f8e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b96b7
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x160
        mov al, byte ptr ss : [esp+0xB]
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push 0
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], al
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ss : [esp+0x18C]
        mov edi, offset public_5cb7ec
        mov esi, eax
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        mov dword ptr ss : [esp+0x178], 0
        je public_43f981
        mov edi, offset public_5cb804
        mov esi, eax
        mov ecx, 5
        xor edx, edx
        repe cmpsb
        je public_43f981
        mov edi, offset public_5cb7f8
        mov esi, eax
        mov ecx, 0xC
        xor edx, edx
        repe cmpsb
        je public_43f981
        mov edi, offset public_5cb2ec
        mov esi, eax
        mov ecx, 0x11
        xor edx, edx
        repe cmpsb
        je public_43f981
        mov esi, eax
        mov edi, offset public_5cb300
        mov ecx, 0x18
        xor eax, eax
        repe cmpsb
        jne public_43f98b
        public_43f981 : nop
        mov byte ptr ss : [esp+0x188], 1
        jmp public_43f996
        public_43f98b : nop
        mov al, byte ptr ss : [esp+0x188]
        test al, al
        je public_43f9f3
        public_43f996 : nop
        mov eax, dword ptr ds : [ebx+0x3B0]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        mov esi, dword ptr ds : [public_5c7078]
        je public_43f9ad
        mov esi, eax
        public_43f9ad : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43f9eb
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c706c]
        public_43f9eb : nop
        lea ecx, ds:[ebx+0x3AC]
        jmp public_43fa4e
        public_43f9f3 : nop
        mov eax, dword ptr ds : [ebx+0x3A4]
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        mov esi, dword ptr ds : [public_5c7078]
        je public_43fa0a
        mov esi, eax
        public_43fa0a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        push 1
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43fa48
        mov edi, dword ptr ss : [esp+0x24]
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        push ebp
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c706c]
        public_43fa48 : nop
        lea ecx, ds:[ebx+0x3A0]
        public_43fa4e : nop
        mov eax, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_4324c0
        cmp dword ptr ss : [esp+0x180], 0xFFFFFFFF
        jne public_43fa8d
        mov ecx, offset public_668708
        call public_43b630
        mov ecx, dword ptr ss : [esp+0x18C]
        mov eax, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [public_5c616c]
        add esp, 8
        mov dword ptr ss : [esp+0x180], eax
        public_43fa8d : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        jne public_43fa9a
        mov eax, dword ptr ds : [public_5c7078]
        public_43fa9a : nop
        mov edx, dword ptr ds : [ebx]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x94]
        xor esi, esi
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_43fcbb
        lea ecx, ss:[esp+0x3C]
        call public_43fd00
        lea eax, ss:[esp+0x34]
        lea esi, ds:[ebx+0x37C]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x17C], 1
        call public_53e430
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, esi
        call public_442ab0
        mov eax, dword ptr ds : [ebx+0x380]
        mov ebp, dword ptr ds : [eax]
        push 1
        lea ecx, ss:[esp+0x44]
        add ebp, 8
        mov byte ptr ss : [esp+0x17C], 0
        call dword ptr ds : [public_5c7084]
        mov ecx, dword ptr ss : [esp+0x190]
        mov edi, dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [ebp+0x14], ecx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov edi, ecx
        lea edx, ss:[ebp+4]
        push 1
        push edi
        mov ecx, edx
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x38], edi
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_43fb68
        mov esi, dword ptr ss : [esp+0x18C]
        mov ecx, edi
        mov edi, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        lea eax, ss:[ebp+4]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, edx
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c706c]
        public_43fb68 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov al, byte ptr ss : [esp+0x188]
        mov esi, dword ptr ss : [esp+0x180]
        mov byte ptr ss : [ebp+1], al
        push 0x13
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [ebp+0x18], edx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ecx
        push eax
        mov ecx, offset public_610c80
        call public_4d9ca0
        test al, al
        jne public_43fbc7
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        push 0x530
/*FIXUP push offset public_5cb860 @0x43fbad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb860
        mov eax, 0x100002
/*FIXUP push offset public_5cb82c @0x43fbb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb82c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_43fbc7 : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 3
        call dword ptr ds : [eax+0xA8]
        cmp dword ptr ss : [esp+0x14], 0x196B
        jne public_43fc0f
        cmp esi, 8
        jne public_43fc0f
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0x1968
        push 3
        call dword ptr ds : [eax+0xA8]
        public_43fc0f : nop
        mov al, byte ptr ss : [esp+0x188]
        test al, al
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x2EC], edx
        jne public_43fc38
        mov ecx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x36
        call dword ptr ds : [eax+0xA8]
        public_43fc38 : nop
        lea esi, ss:[ebp+4]
        push esi
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[ebx+0x388]
        call public_442cb0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0x38C]
        push 0
        je public_43fc70
        mov eax, dword ptr ds : [eax+0x1C]
        mov ebp, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp]
        push eax
        push 4
        mov ecx, ebp
        call dword ptr ds : [edx+0xA8]
        jmp public_43fcb7
        public_43fc70 : nop
        mov eax, dword ptr ds : [ebx+0x39C]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 4
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp]
        push 0x100
        lea eax, ss:[esp+0x74]
        push eax
        push 0xB
        mov ecx, ebp
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_43fcaa
        mov eax, dword ptr ds : [public_5c7078]
        public_43fcaa : nop
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        mov ecx, ebx
        call public_43f060
        public_43fcb7 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        public_43fcbb : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        je public_43fcdf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_43fcd6
        cmp cl, 0xFF
        je public_43fcd6
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_43fcdf
        public_43fcd6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_43fcdf : nop
        mov ecx, dword ptr ss : [esp+0x170]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16C
        ret 0x14
        UNREACHABLE_TRAP(0x43f8e0)
    }
}

#undef public_43f981
#undef public_43f98b
#undef public_43f996
#undef public_43f9ad
#undef public_43f9eb
#undef public_43f9f3
#undef public_43fa0a
#undef public_43fa48
#undef public_43fa4e
#undef public_43fa8d
#undef public_43fa9a
#undef public_43fb68
#undef public_43fbc7
#undef public_43fc0f
#undef public_43fc38
#undef public_43fc70
#undef public_43fcaa
#undef public_43fcb7
#undef public_43fcbb
#undef public_43fcd6
#undef public_43fcdf
