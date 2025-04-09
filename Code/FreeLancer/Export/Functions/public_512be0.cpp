#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420690);
CLANG_FORWARD_PROC_SYMBOL(public_4206c0);
CLANG_FORWARD_PROC_SYMBOL(public_427020);
CLANG_FORWARD_PROC_SYMBOL(public_4f7af0);
CLANG_FORWARD_PROC_SYMBOL(public_512be0);

#define public_512c92 _public_512c92
#define public_512cad _public_512cad
#define public_512cbc _public_512cbc
#define public_512ce1 _public_512ce1
#define public_512cf3 _public_512cf3
#define public_512d25 _public_512d25
#define public_512d40 _public_512d40
#define public_512d4f _public_512d4f
#define public_512d73 _public_512d73
#define public_512d88 _public_512d88

PROC_DECLARE(0x512be0, internal_512be0, public_512be0);
extern "C" NAKED register_t __cdecl internal_512be0()
{
    __asm
    {
        sub esp, 0x34
        mov eax, dword ptr ss : [esp+0x38]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+0x6C], eax
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+4]
        movzx edx, byte ptr ds : [eax+0x54]
        movzx ecx, byte ptr ds : [eax+0x55]
        add eax, 0x54
        mov dword ptr ss : [esp+0x44], edx
        movzx edx, byte ptr ds : [eax+2]
        fild dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x44], ecx
        lea eax, ds:[edi+0x70]
        fild dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x44], edx
        xor ebx, ebx
        fild dword ptr ss : [esp+0x44]
/*FIXUP push offset public_5db700 @0x512c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db700
        fstp dword ptr ss : [esp+0x24]
        fxch 
        xor esi, esi
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5c7f68]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], ecx
        lea ecx, ss:[esp+0x28]
        call public_427020
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, offset public_674f24
        call public_420690
        test al, al
        je public_512c92
        mov eax, dword ptr ds : [public_674f38]
        jmp public_512cad
        public_512c92 : nop
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, offset public_674f24
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_674f38], eax
        public_512cad : nop
        cmp eax, dword ptr ds : [public_674f28]
        je public_512cbc
        lea esi, ds:[eax+0x28]
        cmp esi, ebx
        jne public_512ce1
        public_512cbc : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5db700 @0x512cc2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db700
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x512ccc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x512cd6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_512ce1 : nop
        cmp esi, ebx
        mov dword ptr ds : [edi+0x7C], esi
        jne public_512cf3
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x34
        ret 4
/*FIXUP public_512cf3 : nop
        push offset public_5db6f8 @0x512cf3*/
  FIXUP public_512cf3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6f8
        lea ecx, ss:[esp+0x28]
        xor esi, esi
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ss : [esp+0x2C], bl
        call public_427020
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, offset public_674f24
        call public_420690
        test al, al
        je public_512d25
        mov eax, dword ptr ds : [public_674f38]
        jmp public_512d40
        public_512d25 : nop
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        mov ecx, offset public_674f24
        call public_4206c0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [public_674f38], eax
        public_512d40 : nop
        cmp eax, dword ptr ds : [public_674f28]
        je public_512d4f
        lea esi, ds:[eax+0x28]
        cmp esi, ebx
        jne public_512d73
/*FIXUP public_512d4f : nop
        push offset public_5db6f8 @0x512d4f*/
  FIXUP public_512d4f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db6f8
        push 0xF2
/*FIXUP push offset public_5da4a0 @0x512d59*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da4a0
        mov eax, 0x100002
/*FIXUP push offset public_5c958c @0x512d63*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c958c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_512d73 : nop
        cmp esi, ebx
        mov dword ptr ds : [edi+0x80], esi
        jne public_512d88
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x34
        ret 4
        public_512d88 : nop
        mov ecx, edi
        call public_4f7af0
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x34
        ret 4
        UNREACHABLE_TRAP(0x512be0)
    }
}

#undef public_512c92
#undef public_512cad
#undef public_512cbc
#undef public_512ce1
#undef public_512cf3
#undef public_512d25
#undef public_512d40
#undef public_512d4f
#undef public_512d73
#undef public_512d88
