#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_428030);
CLANG_FORWARD_PROC_SYMBOL(public_42acb0);
CLANG_FORWARD_PROC_SYMBOL(public_439200);
CLANG_FORWARD_PROC_SYMBOL(public_43a460);
CLANG_FORWARD_PROC_SYMBOL(public_43b290);
CLANG_FORWARD_PROC_SYMBOL(public_43b570);
CLANG_FORWARD_PROC_SYMBOL(public_43b6b0);
CLANG_FORWARD_PROC_SYMBOL(public_43bab0);
CLANG_FORWARD_PROC_SYMBOL(public_43d590);
CLANG_FORWARD_PROC_SYMBOL(public_4489f0);
CLANG_FORWARD_PROC_SYMBOL(public_44ab60);
CLANG_FORWARD_PROC_SYMBOL(public_4564d0);
CLANG_FORWARD_PROC_SYMBOL(public_45b2d0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4910);
CLANG_FORWARD_PROC_SYMBOL(public_4c4a10);
CLANG_FORWARD_PROC_SYMBOL(public_557550);
CLANG_FORWARD_PROC_SYMBOL(public_5588a0);
CLANG_FORWARD_PROC_SYMBOL(public_558db0);
CLANG_FORWARD_PROC_SYMBOL(public_579290);

#define public_558965 _public_558965
#define public_558967 _public_558967
#define public_55898d _public_55898d
#define public_5589ad _public_5589ad
#define public_5589c3 _public_5589c3
#define public_5589cf _public_5589cf
#define public_5589e8 _public_5589e8
#define public_558a0c _public_558a0c

PROC_DECLARE(0x5588a0, internal_5588a0, public_5588a0);
extern "C" NAKED register_t __cdecl internal_5588a0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        call public_579290
        mov ecx, offset public_668708
        call public_439200
        lea eax, ss:[esp+0x18]
        xor ebx, ebx
        push eax
        mov byte ptr ds : [public_668761], 1
        mov dword ptr ds : [public_6799e4], ebx
        call public_4c4910
        mov edi, dword ptr ss : [esp+0x20]
        push edi
        call public_4c4a10
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_43d590
        call public_557550
        push 2
        call public_42acb0
        mov esi, dword ptr ds : [public_5c60f8]
        call esi
        push 3
        call public_428030
        call esi
        push 0x3F800000
        call public_412070
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        add esp, 0x14
        fstp dword ptr ss : [esp]
        push ebx
        call public_412050
        call esi
        call public_558db0
        push ebx
/*FIXUP push offset public_5cb128 @0x558929*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        call public_41dde0
        add esp, 0x10
        call esi
        mov ecx, offset public_66d2d0
        call public_4564d0
        mov dword ptr ds : [public_6799e0], ebx
        call esi
        cmp byte ptr ss : [esp+0x20], bl
        mov byte ptr ds : [public_6799dc], bl
        mov byte ptr ds : [public_6799dd], bl
        mov byte ptr ds : [public_6799de], bl
        je public_558965
        push ebx
        jmp public_558967
        public_558965 : nop
        push 1
        public_558967 : nop
        call public_4489f0
        add esp, 4
        mov byte ptr ds : [public_668760], 1
        call esi
        cmp edi, ebx
        mov ecx, offset public_668708
        jne public_55898d
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_43b290
        jmp public_5589ad
        public_55898d : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        call public_43b570
        push edi
        mov ecx, offset public_668708
        call public_43bab0
        push edi
        mov ecx, offset public_668708
        call public_43b6b0
        public_5589ad : nop
        call esi
        mov ecx, offset public_668708
        call public_43a460
        cmp byte ptr ss : [esp+0x20], bl
        mov cl, 1
        je public_5589c3
        xor cl, cl
        public_5589c3 : nop
        cmp eax, ebx
        je public_5589cf
        cmp byte ptr ds : [eax+0x517], bl
        jne public_558a0c
        public_5589cf : nop
        cmp cl, bl
        je public_558a0c
        cmp eax, ebx
        je public_5589e8
        mov ecx, eax
        call public_44ab60
        test al, al
        jne public_5589e8
        mov dword ptr ds : [public_6799e4], ebx
        public_5589e8 : nop
        mov ecx, dword ptr ds : [public_6799e4]
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ebx
        fild qword ptr ss : [esp+0xC]
        push ecx
        fmul dword ptr ds : [public_5d1494]
        fstp dword ptr ss : [esp]
        call public_45b2d0
        add esp, 4
        public_558a0c : nop
        call esi
        call dword ptr ds : [public_5c6bbc]
        fstp dword ptr ds : [public_610a0c]
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x5588a0)
    }
}

#undef public_558965
#undef public_558967
#undef public_55898d
#undef public_5589ad
#undef public_5589c3
#undef public_5589cf
#undef public_5589e8
#undef public_558a0c
