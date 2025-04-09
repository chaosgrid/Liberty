#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4205c0);
CLANG_FORWARD_PROC_SYMBOL(public_512660);
CLANG_FORWARD_PROC_SYMBOL(public_54c630);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_54c670 _public_54c670
#define public_54c6c0 _public_54c6c0
#define public_54c6e0 _public_54c6e0
#define public_54c6e7 _public_54c6e7
#define public_54c70a _public_54c70a
#define public_54c727 _public_54c727
#define public_54c748 _public_54c748
#define public_54c769 _public_54c769
#define public_54c7ba _public_54c7ba
#define public_54c7fe _public_54c7fe
#define public_54c829 _public_54c829
#define public_54c854 _public_54c854
#define public_54c873 _public_54c873
#define public_54c88b _public_54c88b
#define public_54c89d _public_54c89d

PROC_DECLARE(0x54c630, internal_54c630, public_54c630);
extern "C" NAKED register_t __cdecl internal_54c630()
{
    __asm
    {
        sub esp, 0x28
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        push edi
        mov edi, ecx
        mov ecx, esi
        mov byte ptr ds : [edi+0x7C], 0
        mov dword ptr ds : [edi+0x80], 0
        mov dword ptr ds : [edi+8], 0x3F800000
        mov dword ptr ds : [edi+0x58], 1
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_54c89d
        push ebx
        push ebp
        lea esp, ss:[esp]
        public_54c670 : nop
        mov ebx, dword ptr ds : [public_5c6cf4]
/*FIXUP push offset public_5c9660 @0x54c676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9660
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_54c6e7
        call dword ptr ds : [public_5c6698]
        mov ebp, eax
        push ebp
        lea ecx, ss:[esp+0x20]
        xor ebx, ebx
        call public_4205c0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x48]
        call public_512660
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, dword ptr ds : [edx+4]
        je public_54c6c0
        lea ebx, ds:[eax+0x28]
        test ebx, ebx
        jne public_54c6e0
        public_54c6c0 : nop
        push ebp
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x54c6c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x54c6d0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_54c6e0 : nop
        mov dword ptr ds : [edi], ebx
        jmp public_54c88b
/*FIXUP public_54c6e7 : nop
        push offset public_5e0ac8 @0x54c6e7*/
  FIXUP public_54c6e7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ac8
        call ebx
        test al, al
        mov ecx, esi
        je public_54c70a
        push 0
        call dword ptr ds : [public_5c6cfc]
        fmul qword ptr ds : [public_5e0ac0]
        fstp dword ptr ds : [edi+0x40]
        jmp public_54c88b
/*FIXUP public_54c70a : nop
        push offset public_5e0ab4 @0x54c70a*/
  FIXUP public_54c70a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ab4
        call ebx
        test al, al
        mov ecx, esi
        je public_54c727
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x48]
        jmp public_54c88b
/*FIXUP public_54c727 : nop
        push offset public_5e0aa8 @0x54c727*/
  FIXUP public_54c727 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0aa8
        call ebx
        test al, al
        mov ecx, esi
        je public_54c748
        push 0
        mov byte ptr ds : [edi+0x74], 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x78]
        jmp public_54c88b
/*FIXUP public_54c748 : nop
        push offset public_5e0a98 @0x54c748*/
  FIXUP public_54c748 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0a98
        call ebx
        test al, al
        mov ecx, esi
        je public_54c769
        push 0
        mov byte ptr ds : [edi+0x74], 1
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x78]
        jmp public_54c88b
/*FIXUP public_54c769 : nop
        push offset public_5dcf40 @0x54c769*/
  FIXUP public_54c769 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dcf40
        call ebx
        test al, al
        mov ecx, esi
        je public_54c7ba
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x10]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        jmp public_54c88b
/*FIXUP public_54c7ba : nop
        push offset public_5e0a90 @0x54c7ba*/
  FIXUP public_54c7ba : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0a90
        call ebx
        test al, al
        mov ecx, esi
        je public_54c7fe
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x64]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x68]
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x6C]
        push 3
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x70]
        jmp public_54c88b
/*FIXUP public_54c7fe : nop
        push offset public_5e0a80 @0x54c7fe*/
  FIXUP public_54c7fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0a80
        call ebx
        test al, al
        mov ecx, esi
        je public_54c829
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        cmp eax, 1
        mov dword ptr ds : [edi+0x4C], eax
        jge public_54c88b
        mov dword ptr ds : [edi+0x4C], 1
        jmp public_54c88b
/*FIXUP public_54c829 : nop
        push offset public_5e0a70 @0x54c829*/
  FIXUP public_54c829 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0a70
        call ebx
        test al, al
        mov ecx, esi
        je public_54c854
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        cmp eax, 1
        mov dword ptr ds : [edi+0x58], eax
        jge public_54c88b
        mov dword ptr ds : [edi+0x58], 1
        jmp public_54c88b
/*FIXUP public_54c854 : nop
        push offset public_5e0a64 @0x54c854*/
  FIXUP public_54c854 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0a64
        call ebx
        test al, al
        mov ecx, esi
        je public_54c873
        push 0
        call dword ptr ds : [public_5c6cfc]
        call public_5b7ec0
        mov dword ptr ds : [edi+0x50], eax
        jmp public_54c88b
/*FIXUP public_54c873 : nop
        push offset public_5daef0 @0x54c873*/
  FIXUP public_54c873 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daef0
        call ebx
        test al, al
        je public_54c88b
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+8]
        public_54c88b : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_54c670
        pop ebp
        pop ebx
        public_54c89d : nop
        pop edi
        pop esi
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x54c630)
    }
}

#undef public_54c670
#undef public_54c6c0
#undef public_54c6e0
#undef public_54c6e7
#undef public_54c70a
#undef public_54c727
#undef public_54c748
#undef public_54c769
#undef public_54c7ba
#undef public_54c7fe
#undef public_54c829
#undef public_54c854
#undef public_54c873
#undef public_54c88b
#undef public_54c89d
