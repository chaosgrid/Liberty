#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);
CLANG_FORWARD_PROC_SYMBOL(public_628e0b0);
CLANG_FORWARD_PROC_SYMBOL(public_62b7750);
CLANG_FORWARD_PROC_SYMBOL(public_62efff0);
CLANG_FORWARD_PROC_SYMBOL(public_62f0dc0);
CLANG_FORWARD_PROC_SYMBOL(public_62fbad0);
CLANG_FORWARD_PROC_SYMBOL(public_62fd2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_6303220);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63954fb);

#define public_62f0df3 _public_62f0df3
#define public_62f0e19 _public_62f0e19
#define public_62f0e1b _public_62f0e1b
#define public_62f0e32 _public_62f0e32
#define public_62f0e43 _public_62f0e43
#define public_62f0e4e _public_62f0e4e
#define public_62f0ef4 _public_62f0ef4
#define public_62f0f01 _public_62f0f01
#define public_62f0f15 _public_62f0f15
#define public_62f0f46 _public_62f0f46
#define public_62f0fa9 _public_62f0fa9
#define public_62f0fb6 _public_62f0fb6
#define public_62f0fdd _public_62f0fdd

PROC_DECLARE(0x62f0dc0, internal_62f0dc0, public_62f0dc0);
extern "C" NAKED register_t __cdecl internal_62f0dc0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63954fb @0x62f0dc2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63954fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        mov ecx, dword ptr ss : [esp+0x4C]
        push ebx
        xor ebx, ebx
        cmp ecx, ebx
        push esi
        push edi
        mov dword ptr ss : [esp+0xC], ebx
        je public_62f0df3
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC]
        push edx
        push ebx
        call dword ptr ds : [eax]
        public_62f0df3 : nop
        push 0x5C
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x58], eax
        cmp eax, ebx
        mov dword ptr ss : [esp+0x48], ebx
        je public_62f0e19
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_62efff0
        mov esi, eax
        jmp public_62f0e1b
        public_62f0e19 : nop
        xor esi, esi
        public_62f0e1b : nop
        mov edi, dword ptr ss : [esp+0x50]
        mov ecx, edi
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call public_6310170
        test al, al
        je public_62f0e4e
        public_62f0e32 : nop
        mov edx, dword ptr ds : [esi]
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_62f0e43
        call public_6303220
        public_62f0e43 : nop
        mov ecx, edi
        call public_6310170
        test al, al
        jne public_62f0e32
        public_62f0e4e : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebx
        lea edi, ds:[esi+8]
        mov dword ptr ss : [esp+0x58], eax
        je public_62f0f15
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, offset public_63fcae8
        mov dword ptr ss : [esp+0x24], esi
        call public_62fbad0
        cmp byte ptr ss : [esp+0x2C], bl
        je public_62f0f46
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, offset public_63fcb0c
        call public_6301640
        mov ecx, dword ptr ss : [esp+0x50]
        cmp ecx, dword ptr ds : [public_63fcb10]
        jne public_62f0ef4
        mov eax, dword ptr ds : [public_63fcb04]
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        mov ecx, offset public_63fcafc
        call public_628e0b0
        mov ecx, offset public_63fcafc
        call public_626a600
        mov ecx, dword ptr ss : [esp+0x58]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], ecx
        push edx
        lea ecx, ss:[esp+0x34]
        mov word ptr ss : [esp+0x28], ax
        call public_62fd2f0
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, offset public_63fcb0c
        call public_62fbad0
        public_62f0ef4 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_62f0f01
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+0x14]
        public_62f0f01 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        public_62f0f15 : nop
        push 1
        push 0x10000
        lea ecx, ss:[esp+0x1C]
        call public_62b7750
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6399028]
/*FIXUP push offset public_63a1524 @0x62f0f2c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1524
        push 0x84
/*FIXUP push offset public_63a123c @0x62f0f36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14d8 @0x62f0f3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14d8
        push edx
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f0f46 : nop
        cmp byte ptr ss : [esp+0x54], bl
        push ebp
        je public_62f0fb6
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov ecx, offset public_63fcae8
        mov dword ptr ss : [esp+0x60], eax
        call public_6301640
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [public_63fcaec]
        jne public_62f0fa9
        mov eax, dword ptr ss : [esp+0x58]
        push eax
        mov ecx, edi
        mov ebp, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x49
/*FIXUP push offset public_63a123c @0x62f0f8d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a14a4 @0x62f0f92*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a14a4
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x18
        xor ecx, ecx
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        mov bl, 1
        jmp public_62f0fdd
        public_62f0fa9 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        mov bl, 1
        jmp public_62f0fdd
        public_62f0fb6 : nop
        mov ecx, edi
        mov ebp, 0x100002
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x364
/*FIXUP push offset public_63a123c @0x62f0fcd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a123c
/*FIXUP push offset public_63a1448 @0x62f0fd2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a1448
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x14
        public_62f0fdd : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x44]
        pop ebp
        pop edi
        pop esi
        mov al, bl
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x62f0dc0)
    }
}

#undef public_62f0df3
#undef public_62f0e19
#undef public_62f0e1b
#undef public_62f0e32
#undef public_62f0e43
#undef public_62f0e4e
#undef public_62f0ef4
#undef public_62f0f01
#undef public_62f0f15
#undef public_62f0f46
#undef public_62f0fa9
#undef public_62f0fb6
#undef public_62f0fdd
