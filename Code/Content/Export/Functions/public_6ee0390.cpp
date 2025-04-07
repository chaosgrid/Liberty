#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ee0390);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab42b);

#define public_6ee0481 _public_6ee0481
#define public_6ee04ce _public_6ee04ce
#define public_6ee0625 _public_6ee0625
#define public_6ee0642 _public_6ee0642
#define public_6ee065f _public_6ee065f
#define public_6ee0664 _public_6ee0664
#define public_6ee0669 _public_6ee0669
#define public_6ee06a7 _public_6ee06a7
#define public_6ee06aa _public_6ee06aa

PROC_DECLARE(0x6ee0390, internal_6ee0390, public_6ee0390);
extern "C" NAKED register_t __cdecl internal_6ee0390()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab42b @0x6ee0392*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab42b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x170
        mov eax, dword ptr ss : [esp+0x184]
        mov dl, byte ptr ss : [esp+0xB]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x190]
        push esi
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [esp+0x18C]
        lea ebx, ss:[ebp+0x14]
        push edi
        xor edi, edi
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [ebp+0x10], edi
        lea esi, ss:[ebp+0xC]
        mov byte ptr ds : [ebx], dl
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [ebp+0x24], eax
        mov dword ptr ss : [ebp+0x28], edi
        mov dword ptr ss : [ebp+0x2C], edi
        lea ecx, ss:[esp+0x194]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x190], edi
        mov dword ptr ss : [ebp], offset public_6fb7128
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ee06a7
        push 0x400
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee06a7
        mov edx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ss : [esp+0x190]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x10], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee06aa
        mov dword ptr ss : [ebp+0x28], 0x4A3E
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, edi
        je public_6ee0481
        mov eax, dword ptr ds : [ebx+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 6
        jae public_6ee04ce
        public_6ee0481 : nop
        push 0x18
        call public_6fa912a
        mov ecx, dword ptr ds : [ebx+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push eax
        push ecx
        mov ecx, ebx
        call public_6eed270
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        push edx
        push eax
        mov ecx, ebx
        call public_6ea1490
        mov ecx, dword ptr ds : [ebx+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x18]
        add esp, 4
        mov ecx, ebx
        mov dword ptr ds : [ebx+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+4], esi
/*FIXUP public_6ee04ce : nop
        push offset public_6fb6348 @0x6ee04ce*/
  FIXUP public_6ee04ce : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ds : [ebx+8]
        add esp, 4
        lea ecx, ss:[esp+0x20]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        push eax
        lea ecx, ss:[esp+0x100]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x40]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        mov ecx, ebx
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x10]
        push 0
        push edx
        lea eax, ss:[esp+0xBC]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x3C]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x40]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ebx+8]
        push edx
        push eax
        mov ecx, ebx
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6ee057f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call esi
        mov edx, dword ptr ds : [ebx+8]
        add esp, 4
        lea ecx, ss:[esp+0x24]
        push ecx
        push 1
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x30], eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x10]
        push 0
        push eax
        lea ecx, ss:[esp+0x144]
        push 3
        push ecx
        call public_6eeb210
        mov ecx, 0x11
        mov esi, eax
        lea edi, ss:[esp+0x3C]
        lea edx, ss:[esp+0x40]
        rep movsd
        push edx
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x14]
        push eax
        push 1
        push ecx
        mov ecx, ebx
        call public_6f937c0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        mov esi, dword ptr ss : [ebp+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6fb339c]
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_6fb7120]
        add esp, 8
        push esi
/*FIXUP push offset public_6fb6064 @0x6ee0612*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        fnstsw ax
        test ah, 5
        jp public_6ee0625
/*FIXUP push offset public_6fb70f8 @0x6ee061e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb70f8
        jmp public_6ee0664
        public_6ee0625 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_6fb70f0]
        fnstsw ax
        test ah, 5
        jp public_6ee0642
/*FIXUP push offset public_6fb70c8 @0x6ee0636*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb70c8
        lea ecx, ss:[esp+0x7C]
        push ecx
        jmp public_6ee0669
        public_6ee0642 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_6fb70c0]
        fnstsw ax
        test ah, 5
        jp public_6ee065f
/*FIXUP push offset public_6fb709c @0x6ee0653*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb709c
        lea edx, ss:[esp+0x7C]
        push edx
        jmp public_6ee0669
/*FIXUP public_6ee065f : nop
        push offset public_6fb707c @0x6ee065f*/
  FIXUP public_6ee065f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb707c
        public_6ee0664 : nop
        lea eax, ss:[esp+0x7C]
        push eax
        public_6ee0669 : nop
        call public_6eeaf10
        mov ecx, 0x11
        lea esi, ss:[esp+0x80]
        lea edi, ss:[esp+0x3C]
        rep movsd
        lea ecx, ss:[esp+0x40]
        add esp, 0x10
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 4
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [ebx+8]
        push edx
        push eax
        mov ecx, ebx
        call public_6eb5770
        jmp public_6ee06aa
        public_6ee06a7 : nop
        mov dword ptr ss : [ebp+0x24], edi
        public_6ee06aa : nop
        mov ecx, dword ptr ss : [esp+0x180]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x17C
        ret 0xC
        UNREACHABLE_TRAP(0x6ee0390)
    }
}

#undef public_6ee0481
#undef public_6ee04ce
#undef public_6ee0625
#undef public_6ee0642
#undef public_6ee065f
#undef public_6ee0664
#undef public_6ee0669
#undef public_6ee06a7
#undef public_6ee06aa
