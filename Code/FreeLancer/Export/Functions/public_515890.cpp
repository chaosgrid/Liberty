#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_503330);
CLANG_FORWARD_PROC_SYMBOL(public_514750);
CLANG_FORWARD_PROC_SYMBOL(public_514f20);
CLANG_FORWARD_PROC_SYMBOL(public_515200);
CLANG_FORWARD_PROC_SYMBOL(public_515640);
CLANG_FORWARD_PROC_SYMBOL(public_515890);
CLANG_FORWARD_PROC_SYMBOL(public_515b60);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5158ca _public_5158ca
#define public_5158f7 _public_5158f7
#define public_515923 _public_515923
#define public_51592d _public_51592d
#define public_515980 _public_515980
#define public_51598f _public_51598f
#define public_5159c1 _public_5159c1
#define public_515a15 _public_515a15
#define public_515a4b _public_515a4b
#define public_515a5d _public_515a5d
#define public_515a78 _public_515a78
#define public_515a96 _public_515a96
#define public_515ae1 _public_515ae1
#define public_515aea _public_515aea
#define public_515b11 _public_515b11
#define public_515b4e _public_515b4e

PROC_DECLARE(0x515890, internal_515890, public_515890);
extern "C" NAKED register_t __cdecl internal_515890()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi]
        push 1
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 1
        call dword ptr ds : [eax+0x130]
        test eax, eax
        mov ebp, dword ptr ss : [esp+0x1C]
        jl public_5158ca
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ss : [esp+8], eax
        sete al
        test al, al
        jne public_515923
        public_5158ca : nop
        mov eax, dword ptr ds : [esi]
        push 0
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x14], 0
        call dword ptr ds : [eax+0x130]
        test eax, eax
        jl public_5158f7
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x20]
        cmp dword ptr ss : [esp+8], eax
        sete al
        test al, al
        jne public_515923
/*FIXUP public_5158f7 : nop
        push offset public_5db7f8 @0x5158f7*/
  FIXUP public_5158f7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7f8
        push 0x3BC
/*FIXUP push offset public_5db798 @0x515901*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
        mov eax, 0x100001
/*FIXUP push offset public_5c862c @0x51590b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        pop esi
        xor al, al
        pop ebp
        add esp, 0xC
        ret 
        public_515923 : nop
        mov al, byte ptr ss : [esp+0x24]
        test al, al
        jne public_51592d
        mov ebp, esi
        public_51592d : nop
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push 1
        push edi
        push ebp
        call public_515200
        mov esi, dword ptr ss : [esp+0x34]
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x160]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebx
        je public_5159c1
        cmp eax, ebx
        je public_5159c1
        push 1
        push edi
        push ebp
        call public_515200
        mov ebp, dword ptr ds : [esi+0x160]
        add esp, 0xC
        test ebp, ebp
        je public_5159c1
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ds : [ecx]
        cmp ecx, edi
        je public_51598f
        lea ecx, ds:[ecx]
        public_515980 : nop
        cmp dword ptr ds : [edi+8], eax
        je public_515a4b
        mov edi, dword ptr ds : [edi]
        cmp ecx, edi
        jne public_515980
        public_51598f : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x30]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db7c8 @0x5159a7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db7c8
        push 0x367
/*FIXUP push offset public_5db798 @0x5159b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db798
/*FIXUP push offset public_5c862c @0x5159b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c862c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_5159c1 : nop
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi]
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        push eax
        mov ecx, edi
        call dword ptr ss : [ebp+0x12C]
        mov cl, byte ptr ds : [esi+0x184]
        mov al, byte ptr ss : [esp+0x20]
        shl al, 1
        xor al, cl
        and al, 2
        xor al, cl
        or al, 0x80
        mov byte ptr ds : [esi+0x184], al
        mov cl, byte ptr ds : [ebx+0x1C]
        xor cl, al
        and cl, 1
        xor cl, al
        mov al, byte ptr ss : [esp+0x2C]
        test al, al
        mov byte ptr ds : [esi+0x184], cl
        je public_515a15
        or byte ptr ds : [esi+0x185], 2
        public_515a15 : nop
        mov eax, dword ptr ds : [esi+0x160]
        test eax, eax
        je public_515aea
        cmp eax, ebx
        jne public_515ae1
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        jns public_515b4e
        push esi
        mov ecx, ebx
        call public_514750
        pop edi
        pop ebx
        pop esi
        mov al, 1
        pop ebp
        add esp, 0xC
        ret 
        public_515a4b : nop
        mov al, byte ptr ds : [esi+0x184]
        test al, al
        jns public_515a5d
        push esi
        mov ecx, ebp
        call public_514f20
        public_515a5d : nop
        call public_54baf0
        cmp esi, eax
        jne public_515a78
        lea ecx, ds:[esi+0x174]
        call public_515640
        and byte ptr ds : [esi+0x184], 0xBF
        public_515a78 : nop
        lea ecx, ds:[esi+0x164]
        call public_503330
        test al, al
        je public_515a96
        lea eax, ds:[esi+0x164]
        push eax
        lea ecx, ds:[esi+0x28]
        call public_4fcef0
        public_515a96 : nop
        xor eax, eax
        push eax
        mov dword ptr ds : [esi+0x184], eax
        mov dword ptr ds : [esi+0x160], eax
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], edi
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ss : [ebp+0x10]
        mov ebx, dword ptr ss : [esp+0x18]
        add esp, 4
        dec eax
        mov dword ptr ss : [ebp+0x10], eax
        jmp public_5159c1
        public_515ae1 : nop
        push esi
        call public_515b60
        add esp, 4
        public_515aea : nop
        mov cl, byte ptr ds : [esi+0x185]
        mov al, byte ptr ds : [esi+0x184]
        and cl, 0xFA
        test al, al
        mov dword ptr ds : [esi+0x160], ebx
        mov byte ptr ds : [esi+0x185], cl
        jns public_515b11
        push esi
        mov ecx, ebx
        call public_514750
        public_515b11 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x20]
        mov edi, dword ptr ds : [ebx+0xC]
        lea esi, ds:[ebx+8]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [edi+4]
        push eax
        push edi
        mov ecx, esi
        call public_42a7e0
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x2C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [esi+8], eax
        public_515b4e : nop
        pop edi
        pop ebx
        pop esi
        mov al, 1
        pop ebp
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x515890)
    }
}

#undef public_5158ca
#undef public_5158f7
#undef public_515923
#undef public_51592d
#undef public_515980
#undef public_51598f
#undef public_5159c1
#undef public_515a15
#undef public_515a4b
#undef public_515a5d
#undef public_515a78
#undef public_515a96
#undef public_515ae1
#undef public_515aea
#undef public_515b11
#undef public_515b4e
