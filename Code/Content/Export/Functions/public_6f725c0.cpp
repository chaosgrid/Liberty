#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f37aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38140);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb20);
CLANG_FORWARD_PROC_SYMBOL(public_6f6cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f6d280);
CLANG_FORWARD_PROC_SYMBOL(public_6f725c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f79880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faffd0);

#define public_6f72648 _public_6f72648
#define public_6f72661 _public_6f72661
#define public_6f72676 _public_6f72676
#define public_6f726d7 _public_6f726d7
#define public_6f726f5 _public_6f726f5
#define public_6f7276f _public_6f7276f
#define public_6f727f6 _public_6f727f6
#define public_6f72806 _public_6f72806
#define public_6f7283e _public_6f7283e
#define public_6f7284b _public_6f7284b
#define public_6f72854 _public_6f72854
#define public_6f72856 _public_6f72856
#define public_6f72866 _public_6f72866
#define public_6f7287b _public_6f7287b
#define public_6f728ba _public_6f728ba

PROC_DECLARE(0x6f725c0, internal_6f725c0, public_6f725c0);
extern "C" NAKED register_t __cdecl internal_6f725c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faffd0 @0x6f725c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faffd0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0xF]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x9C]
        push edx
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xA4]
        lea edx, ss:[esp+0x50]
        xor ebp, ebp
        push edx
        mov dword ptr ss : [esp+0x90], ebp
        call public_6f37aa0
        mov al, byte ptr ss : [esp+0x90]
        mov byte ptr ss : [esp+0x34], al
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, ebp
        mov byte ptr ss : [esp+0x80], 1
        jne public_6f72648
        xor edi, edi
        jmp public_6f72661
        public_6f72648 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov edi, edx
        public_6f72661 : nop
        lea ecx, ss:[esp+0x34]
        call public_6eb6b30
        cmp eax, edi
        jae public_6f726d7
        cmp edi, ebp
        mov eax, edi
        jge public_6f72676
        xor eax, eax
        public_6f72676 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x3C]
        push esi
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_6eed270
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        push edx
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6ea1490
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+edi*4]
        add esp, 4
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x40], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x38], esi
        public_6f726d7 : nop
        mov eax, dword ptr ss : [esp+0x48]
        cmp eax, dword ptr ss : [esp+0x4C]
        mov esi, eax
        je public_6f72866
        mov edi, dword ptr ds : [public_6fb3664]
        push ebx
        mov ebx, dword ptr ss : [esp+0x90]
        public_6f726f5 : nop
        mov edx, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edx]
        cmp ecx, eax
        mov dword ptr ss : [esp+0xAC], ecx
        je public_6f72856
        cmp eax, ebp
        fld dword ptr ds : [public_6fb444c]
        je public_6f7276f
        lea ecx, ss:[esp+0x58]
        fstp st(0)
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call edi
        mov edx, dword ptr ss : [esp+0xB8]
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edx
        call edi
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        add esp, 0x24
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        public_6f7276f : nop
        fcomp dword ptr ss : [esp+0xA8]
        fnstsw ax
        test ah, 1
        jne public_6f72856
        lea eax, ss:[esp+0xAC]
        push eax
        call public_6f6d280
        add esp, 4
        test al, al
        jne public_6f72854
        mov edx, dword ptr ss : [esp+0xAC]
        lea ecx, ss:[esp+0xA0]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0x94]
        lea eax, ss:[esp+0xB4]
        push eax
/*FIXUP push offset public_6fbbedc @0x6f727c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbbedc
        push ecx
        push ebx
        push edx
        call public_6f6cb90
        add esp, 0x1C
        test al, al
        je public_6f72854
        test dword ptr ss : [esp+0xA0], 0xC40
        jne public_6f7283e
        mov eax, dword ptr ds : [ebx]
        cmp eax, 0xFFFFFFFF
        je public_6f727f6
        mov dword ptr ss : [esp+0xA4], eax
        jmp public_6f72806
        public_6f727f6 : nop
        mov eax, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xA4], ecx
        public_6f72806 : nop
        lea edx, ss:[esp+0xAC]
        push edx
        lea eax, ss:[esp+0xA8]
        push eax
        call public_6f6cb20
        add esp, 8
        test al, al
        je public_6f72854
        test dword ptr ss : [esp+0xA0], 0xC40
        jne public_6f7283e
        mov edx, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0xAC]
        push ecx
        push edx
        jmp public_6f7284b
        public_6f7283e : nop
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0xAC]
        push eax
        push ecx
        public_6f7284b : nop
        lea ecx, ss:[esp+0x40]
        call public_6eb5770
        public_6f72854 : nop
        xor ebp, ebp
        public_6f72856 : nop
        mov eax, dword ptr ss : [esp+0x50]
        add esi, 0x14
        cmp esi, eax
        jne public_6f726f5
        pop ebx
        public_6f72866 : nop
        mov eax, dword ptr ss : [esp+0x38]
        cmp eax, ebp
        je public_6f7287b
        mov esi, dword ptr ss : [esp+0x3C]
        sub esi, eax
        sar esi, 2
        cmp esi, ebp
        jne public_6f728ba
        public_6f7287b : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x80], 0xFFFFFFFF
        call public_6f79880
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 0x24
        public_6f728ba : nop
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        mov ecx, dword ptr ss : [esp+0x38]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov esi, dword ptr ds : [ecx+eax*4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 4
        push edx
        push eax
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ss : [esp+0x88], 0xFFFFFFFF
        call public_6f38140
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x7C]
        add esp, 4
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 0x24
        UNREACHABLE_TRAP(0x6f725c0)
    }
}

#undef public_6f72648
#undef public_6f72661
#undef public_6f72676
#undef public_6f726d7
#undef public_6f726f5
#undef public_6f7276f
#undef public_6f727f6
#undef public_6f72806
#undef public_6f7283e
#undef public_6f7284b
#undef public_6f72854
#undef public_6f72856
#undef public_6f72866
#undef public_6f7287b
#undef public_6f728ba
