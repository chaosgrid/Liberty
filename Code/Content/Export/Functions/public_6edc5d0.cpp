#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edc5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab42b);

#define public_6edc6ad _public_6edc6ad
#define public_6edc6d0 _public_6edc6d0
#define public_6edc6e8 _public_6edc6e8
#define public_6edc71f _public_6edc71f
#define public_6edc769 _public_6edc769
#define public_6edc79d _public_6edc79d
#define public_6edc7de _public_6edc7de
#define public_6edc7e1 _public_6edc7e1

PROC_DECLARE(0x6edc5d0, internal_6edc5d0, public_6edc5d0);
extern "C" NAKED register_t __cdecl internal_6edc5d0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab42b @0x6edc5d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab42b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x164
        mov eax, dword ptr ss : [esp+0x178]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x180]
        push ebp
        push esi
        xor esi, esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x180]
        lea ebp, ds:[ebx+0x14]
        push edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], esi
        mov dword ptr ds : [ebx+0x10], esi
        lea edi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x2C], esi
        lea ecx, ss:[esp+0x188]
        push edi
        push ecx
        mov dword ptr ss : [esp+0x184], esi
        mov dword ptr ds : [ebx], offset public_6fb6b08
        call dword ptr ds : [public_6fb3444]
        push edi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, esi
        je public_6edc7de
        push 0x4000
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edc7de
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edc7e1
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, esi
        je public_6edc6ad
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edc71f
        public_6edc6ad : nop
        push 4
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6edc6e8
        nop 
        lea esp, ss:[esp]
        public_6edc6d0 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edc6d0
        public_6edc6e8 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+4]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], eax
        xor esi, esi
        public_6edc71f : nop
        fld dword ptr ss : [esp+0x190]
        fcomp qword ptr ds : [public_6fb6b00]
        fnstsw ax
        test ah, 5
        jp public_6edc769
/*FIXUP push offset public_6fb6adc @0x6edc733*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6adc
        lea ecx, ss:[esp+0x28]
        push 0x40
        push ecx
        mov dword ptr ss : [esp+0x2C], esi
        mov byte ptr ss : [esp+0x30], 0
        call public_6ea9f40
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        mov dword ptr ss : [esp+0x30], eax
/*FIXUP push offset public_6fb6064 @0x6edc755*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x104]
        push ecx
        jmp public_6edc79d
/*FIXUP public_6edc769 : nop
        push offset public_6fb6abc @0x6edc769*/
  FIXUP public_6edc769 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6abc
        lea edx, ss:[esp+0x6C]
        push 0x40
        push edx
        mov dword ptr ss : [esp+0x70], esi
        mov byte ptr ss : [esp+0x74], 0
        call public_6ea9f40
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6edc78b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x148]
        push edx
        public_6edc79d : nop
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0xC8]
        add esp, 0x1C
        mov ecx, 0x11
        lea edi, ss:[esp+0xA8]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edc7e1
        public_6edc7de : nop
        mov dword ptr ds : [ebx+0x24], esi
        public_6edc7e1 : nop
        mov ecx, dword ptr ss : [esp+0x174]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x170
        ret 0x10
        UNREACHABLE_TRAP(0x6edc5d0)
    }
}

#undef public_6edc6ad
#undef public_6edc6d0
#undef public_6edc6e8
#undef public_6edc71f
#undef public_6edc769
#undef public_6edc79d
#undef public_6edc7de
#undef public_6edc7e1
