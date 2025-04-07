#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_50bfa0);
CLANG_FORWARD_PROC_SYMBOL(public_50c630);
CLANG_FORWARD_PROC_SYMBOL(public_533e10);
CLANG_FORWARD_PROC_SYMBOL(public_5485c0);
CLANG_FORWARD_PROC_SYMBOL(public_5553b0);

#define public_5485e8 _public_5485e8
#define public_548624 _public_548624
#define public_548638 _public_548638
#define public_548656 _public_548656
#define public_54866d _public_54866d
#define public_548688 _public_548688
#define public_5486d6 _public_5486d6
#define public_54871f _public_54871f
#define public_548749 _public_548749
#define public_548769 _public_548769
#define public_54878e _public_54878e
#define public_5487c8 _public_5487c8
#define public_5487ca _public_5487ca
#define public_5487dc _public_5487dc
#define public_548801 _public_548801
#define public_548858 _public_548858
#define public_54886a _public_54886a

PROC_DECLARE(0x5485c0, internal_5485c0, public_5485c0);
extern "C" NAKED register_t __cdecl internal_5485c0()
{
    __asm
    {
        sub esp, 0x250
        push ebx
        push ebp
        mov ebx, ecx
        call public_533e10
        mov ebp, dword ptr ss : [esp+0x25C]
        mov ecx, ebp
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_54886a
        push esi
        push edi
        public_5485e8 : nop
        mov esi, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5e0514 @0x5485ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0514
        mov ecx, ebp
        call esi
        test al, al
        mov ecx, ebp
        je public_548688
        mov esi, dword ptr ds : [public_5c6024]
        xor edi, edi
        push edi
        call esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], 0
        jne public_548624
        mov dword ptr ss : [esp+0x30], edi
        mov byte ptr ss : [esp+0x34], 0
        jmp public_548638
        public_548624 : nop
        push eax
        lea eax, ss:[esp+0x38]
        push 0x20
        push eax
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x30], eax
        public_548638 : nop
        push 1
        mov ecx, ebp
        call esi
        cmp eax, edi
        mov dword ptr ss : [esp+0x54], edi
        mov byte ptr ss : [esp+0x58], 0
        jne public_548656
        mov dword ptr ss : [esp+0x54], edi
        mov byte ptr ss : [esp+0x58], 0
        jmp public_54866d
        public_548656 : nop
        push eax
        lea ecx, ss:[esp+0x5C]
        push 0x104
        push ecx
        call public_417c50
        add esp, 0xC
        mov dword ptr ss : [esp+0x54], eax
        public_54866d : nop
        call public_50bfa0
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x34]
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        jmp public_548858
/*FIXUP public_548688 : nop
        push offset public_5e0508 @0x548688*/
  FIXUP public_548688 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0508
        call esi
        test al, al
        mov ecx, ebp
        je public_54871f
/*FIXUP push offset public_5e0508 @0x548699*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0508
        call esi
        test al, al
        je public_5486d6
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp qword ptr ss : [esp+0x28]
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x1C]
        fld qword ptr ss : [esp+0x28]
        push 2
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x24]
        public_5486d6 : nop
        fld dword ptr ss : [esp+0x1C]
        lea edx, ds:[ebx+0x1F4]
        fmul dword ptr ds : [public_5c7f68]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+8], eax
        jmp public_548858
/*FIXUP public_54871f : nop
        push offset public_5e04fc @0x54871f*/
  FIXUP public_54871f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e04fc
        call esi
        test al, al
        mov ecx, ebp
        je public_54878e
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        test esi, esi
        jne public_548749
        mov dword ptr ds : [ebx+0xE8], eax
        mov byte ptr ds : [ebx+0xEC], al
        jmp public_548858
        public_548749 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x104
        lea edx, ds:[ebx+0xEC]
        jb public_548769
        mov eax, 0x103
        public_548769 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebx+0xEC], 0
        mov dword ptr ds : [ebx+0xE8], eax
        jmp public_548858
/*FIXUP public_54878e : nop
        push offset public_5ca33c @0x54878e*/
  FIXUP public_54878e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ca33c
        call esi
        test al, al
        mov ecx, ebp
        je public_5487dc
        call dword ptr ds : [public_5c6698]
        test ebx, ebx
        je public_5487c8
        lea ecx, ds:[ebx+0xC]
        test ecx, ecx
        je public_5487c8
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_5487c8
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x303
        cmp edx, 0x303
        jne public_5487c8
        mov esi, ecx
        jmp public_5487ca
        public_5487c8 : nop
        xor esi, esi
        public_5487ca : nop
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [esi+0x13C], eax
        jmp public_548858
/*FIXUP public_5487dc : nop
        push offset public_5e04f0 @0x5487dc*/
  FIXUP public_5487dc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e04f0
        call esi
        test al, al
        mov ecx, ebp
        je public_548801
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ds : [ebx+0x200], eax
        jmp public_548858
/*FIXUP public_548801 : nop
        push offset public_5caa54 @0x548801*/
  FIXUP public_548801 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5caa54
        call esi
        test al, al
        je public_548858
        push ebx
        call public_50c630
        mov dword ptr ds : [ebx+0xE4], eax
        mov eax, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea edx, ss:[esp+0x164]
/*FIXUP push offset public_5e04dc @0x548827*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e04dc
        push edx
        call dword ptr ds : [public_5c6068]
        mov eax, dword ptr ds : [ebx+0xE4]
        mov esi, dword ptr ds : [eax]
        add esp, 0x10
        mov ecx, ebp
        call dword ptr ds : [public_5c6698]
        push eax
        lea ecx, ss:[esp+0x160]
        push ecx
        mov ecx, dword ptr ds : [ebx+0xE4]
        call dword ptr ds : [esi+4]
        public_548858 : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_5485e8
        pop edi
        pop esi
        public_54886a : nop
        mov eax, dword ptr ds : [ebx]
        push 0
        lea edx, ds:[ebx+0x3C]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax]
        push eax
        call public_5553b0
        add esp, 0xC
        pop ebp
        mov dword ptr ds : [ebx+0x38], eax
        pop ebx
        add esp, 0x250
        ret 4
        UNREACHABLE_TRAP(0x5485c0)
    }
}

#undef public_5485e8
#undef public_548624
#undef public_548638
#undef public_548656
#undef public_54866d
#undef public_548688
#undef public_5486d6
#undef public_54871f
#undef public_548749
#undef public_548769
#undef public_54878e
#undef public_5487c8
#undef public_5487ca
#undef public_5487dc
#undef public_548801
#undef public_548858
#undef public_54886a
