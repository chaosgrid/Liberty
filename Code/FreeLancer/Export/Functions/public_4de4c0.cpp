#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_4de4c0);
CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_540fc0);
CLANG_FORWARD_PROC_SYMBOL(public_544d00);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5be631);

#define public_4de524 _public_4de524
#define public_4de583 _public_4de583
#define public_4de58a _public_4de58a
#define public_4de596 _public_4de596
#define public_4de59f _public_4de59f
#define public_4de5e6 _public_4de5e6
#define public_4de5f0 _public_4de5f0
#define public_4de63b _public_4de63b
#define public_4de65d _public_4de65d
#define public_4de665 _public_4de665
#define public_4de68b _public_4de68b
#define public_4de690 _public_4de690
#define public_4de698 _public_4de698
#define public_4de6d4 _public_4de6d4
#define public_4de6dd _public_4de6dd
#define public_4de6f5 _public_4de6f5
#define public_4de716 _public_4de716

PROC_DECLARE(0x4de4c0, internal_4de4c0, public_4de4c0);
extern "C" NAKED register_t __cdecl internal_4de4c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be631 @0x4de4c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be631
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        push ebx
        push ebp
        call public_54baf0
        mov ebp, eax
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x18], ebp
        je public_4de716
        mov al, byte ptr ss : [esp+0xB]
        push esi
        push edi
        mov byte ptr ss : [esp+0x40], al
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        lea ecx, ss:[esp+0x14]
        push ecx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x18], 7
        call public_540fc0
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_4de58a
        public_4de524 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax]
        push edi
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        add esp, 0xC
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fcomp dword ptr ds : [public_5d848c]
        fnstsw ax
        test ah, 5
        jp public_4de583
        mov eax, dword ptr ss : [esp+0x48]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [public_5c6554]
        public_4de583 : nop
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, ebx
        jne public_4de524
        public_4de58a : nop
        mov eax, dword ptr ss : [esp+0x44]
        cmp eax, ebx
        jne public_4de596
        xor edi, edi
        jmp public_4de59f
        public_4de596 : nop
        mov edi, dword ptr ss : [esp+0x48]
        sub edi, eax
        sar edi, 2
        public_4de59f : nop
        mov ecx, dword ptr ds : [public_674a8c]
        mov edx, dword ptr ds : [public_674a88]
        mov dword ptr ss : [esp+0x18], ecx
        mov cl, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x1C], edx
        xor edx, edx
        mov byte ptr ss : [esp+0x30], cl
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        xor esi, esi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x58], 1
        jle public_4de68b
        mov ebx, dword ptr ds : [public_5c632c]
        mov ebp, dword ptr ds : [public_5c6088]
        jmp public_4de5f0
        public_4de5e6 : nop
        mov eax, dword ptr ss : [esp+0x44]
        lea ebx, ds:[ebx]
        public_4de5f0 : nop
        mov ecx, dword ptr ds : [eax+esi*4]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_4de665
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_4de665
        mov eax, dword ptr ds : [eax+0xEC]
        fld dword ptr ds : [eax+0x5C]
        mov ecx, dword ptr ds : [eax+8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_4de63b
        mov dword ptr ss : [esp+0x14], 0x7149F2CA
        jmp public_4de665
        public_4de63b : nop
        cmp ecx, dword ptr ss : [esp+0x18]
        je public_4de65d
        cmp ecx, dword ptr ss : [esp+0x1C]
        je public_4de65d
        push ecx
        call ebx
        push eax
        call ebp
        add esp, 8
        test eax, eax
        je public_4de665
        mov edx, dword ptr ds : [eax+0x58]
        mov dword ptr ss : [esp+0x14], edx
        jmp public_4de665
        public_4de65d : nop
        mov dword ptr ss : [esp+0x14], 0x60AD78EC
        public_4de665 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_537260
        inc esi
        cmp esi, edi
        jl public_4de5e6
        mov edx, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x20]
        public_4de68b : nop
        lea esi, ds:[edi-1]
        mov edi, edi
        public_4de690 : nop
        xor ecx, ecx
        test esi, esi
        mov bl, 1
        jle public_4de6dd
        public_4de698 : nop
        fld dword ptr ds : [edx+ecx*4]
        fcomp dword ptr ds : [edx+ecx*4+4]
        fnstsw ax
        test ah, 5
        jp public_4de6d4
        mov eax, dword ptr ds : [edx+ecx*4+4]
        fld dword ptr ds : [edx+ecx*4]
        mov dword ptr ds : [edx+ecx*4], eax
        mov edx, dword ptr ss : [esp+0x34]
        fstp dword ptr ds : [edx+ecx*4+4]
        mov eax, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ds : [eax+ecx*4]
        mov edi, dword ptr ds : [eax+ecx*4+4]
        mov dword ptr ds : [eax+ecx*4], edi
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+ecx*4+4], edx
        mov edx, dword ptr ss : [esp+0x34]
        xor bl, bl
        public_4de6d4 : nop
        inc ecx
        cmp ecx, esi
        jl public_4de698
        test bl, bl
        je public_4de690
        public_4de6dd : nop
        cmp dword ptr ss : [ebp+0x1C], 1
        pop edi
        pop esi
        jne public_4de6f5
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, ebp
        call public_544d00
        mov edx, dword ptr ss : [esp+0x2C]
        public_4de6f5 : nop
        push edx
        call public_5b7e1d
        mov edx, dword ptr ss : [esp+0x40]
        xor eax, eax
        push edx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        call public_5b7e1d
        add esp, 8
        public_4de716 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x4de4c0)
    }
}

#undef public_4de524
#undef public_4de583
#undef public_4de58a
#undef public_4de596
#undef public_4de59f
#undef public_4de5e6
#undef public_4de5f0
#undef public_4de63b
#undef public_4de65d
#undef public_4de665
#undef public_4de68b
#undef public_4de690
#undef public_4de698
#undef public_4de6d4
#undef public_4de6dd
#undef public_4de6f5
#undef public_4de716
