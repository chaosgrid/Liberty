#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d70);
CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb870);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb920);
CLANG_FORWARD_PROC_SYMBOL(public_6eebd10);
CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6eea228 _public_6eea228
#define public_6eea25a _public_6eea25a
#define public_6eea2fd _public_6eea2fd
#define public_6eea3b7 _public_6eea3b7
#define public_6eea421 _public_6eea421
#define public_6eea48a _public_6eea48a
#define public_6eea4ae _public_6eea4ae
#define public_6eea508 _public_6eea508
#define public_6eea585 _public_6eea585
#define public_6eea5e5 _public_6eea5e5
#define public_6eea627 _public_6eea627
#define public_6eea643 _public_6eea643
#define public_6eea683 _public_6eea683
#define public_6eea6a9 _public_6eea6a9
#define public_6eea713 _public_6eea713
#define public_6eea779 _public_6eea779
#define public_6eea802 _public_6eea802
#define public_6eea806 _public_6eea806
#define public_6eea80a _public_6eea80a
#define public_6eea80e _public_6eea80e
#define public_6eea81a _public_6eea81a

PROC_DECLARE(0x6eea160, internal_6eea160, public_6eea160);
extern "C" NAKED register_t __cdecl internal_6eea160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x28
        cmp eax, 0x1003
        push ebx
        push ebp
        push esi
        push edi
        jg public_6eea627
        je public_6eea5e5
        cmp eax, 0x39
        jg public_6eea421
        je public_6eea2fd
        cmp eax, 0xD
        je public_6eea228
        cmp eax, 0x38
        jne public_6eea81a
        mov esi, dword ptr ss : [esp+0x40]
        push esi
        call public_6f75f30
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        mov ecx, edi
        call public_6f73930
        test eax, eax
        je public_6eea81a
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push 0
        push edi
        push 7
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x34], 7
        mov dword ptr ss : [esp+0x24], offset public_6fb74d4
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], edx
        call public_6ee8d70
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        push 0
        push edi
        fstp dword ptr ds : [esi+0xC]
        push 7
        call public_6eeb920
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 8
        public_6eea228 : nop
        mov esi, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6eea81a
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, 2
        jl public_6eea81a
        cmp eax, 5
        jle public_6eea25a
        cmp eax, 7
        jne public_6eea81a
        public_6eea25a : nop
        lea edx, ds:[esi+4]
        push edx
        call public_6f75f30
        mov ecx, dword ptr ds : [esi]
        mov edi, eax
        lea eax, ss:[esp+0x20]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        add esp, 0xC
        test eax, eax
        jne public_6eea81a
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+8]
        push edx
        push eax
        push edi
        push 6
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        lea ecx, ss:[esp+0x40]
        push ecx
        push esi
        call dword ptr ds : [public_6fb339c]
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6fb5810]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_6eea81a
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+8]
        push edx
        push eax
        push edi
        push 6
        call public_6eeb920
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x40], 6
        mov dword ptr ss : [esp+0x30], offset public_6fb74d0
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x44], eax
        lea ecx, ss:[esp+0x30]
        jmp public_6eea80a
        public_6eea2fd : nop
        mov esi, dword ptr ss : [esp+0x40]
        cmp dword ptr ds : [esi+0x10], 1
        jne public_6eea81a
        lea edx, ds:[esi+8]
        push edx
        call public_6f75f30
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        push eax
        mov ecx, edi
        call public_6f73930
        mov ecx, dword ptr ds : [esi]
        push ecx
        mov ecx, edi
        mov ebx, eax
        call public_6f73930
        test ebx, ebx
        mov ebp, eax
        je public_6eea81a
        test ebp, ebp
        je public_6eea3b7
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x40], edx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6eea3b7
        mov ecx, dword ptr ss : [ebp+4]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], ecx
        call public_6f49bc0
        add esp, 4
        test eax, eax
        jne public_6eea3b7
        mov ecx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x40], eax
        call public_6eb6bb0
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ebx+8]
        call public_6f33f80
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call dword ptr ds : [public_6fb3468]
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [public_6fb6218]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_6eea81a
        public_6eea3b7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edi
        push 7
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, offset public_6fd1c08
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x34], 7
        mov dword ptr ss : [esp+0x24], offset public_6fb74d4
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], 0
        call public_6ee8d70
        fstp st(0)
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        push edi
        push 7
        call public_6eeb920
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 8
        public_6eea421 : nop
        sub eax, 0x1001
        je public_6eea48a
        dec eax
        jne public_6eea81a
        mov esi, dword ptr ss : [esp+0x40]
        lea eax, ds:[esi+4]
        push eax
        call public_6f75f30
        mov ecx, dword ptr ds : [esi]
        push 0
        push ecx
        mov edi, eax
        push edi
        push 0xD
        call public_6eebd10
        add esp, 0x14
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi]
        push 0
        push edx
        push edi
        push 0xD
        call public_6eeb920
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x40], 0xD
        mov dword ptr ss : [esp+0x30], offset public_6fb74d4
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0
        jmp public_6eea806
        public_6eea48a : nop
        mov esi, dword ptr ss : [esp+0x40]
        lea edx, ds:[esi+0xC]
        push edx
        call public_6f75f30
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        add esp, 4
        cmp eax, 4
        ja public_6eea81a
/*FIXUP jmp dword ptr ds : [eax*4+public_6eea824] @0x6eea4a7*/
  JMPTB cmp eax, 0
  JMPTB je public_6eea4ae
  JMPTB cmp eax, 1
  JMPTB je public_6eea508
  JMPTB cmp eax, 2
  JMPTB je public_6eea508
  JMPTB cmp eax, 3
  JMPTB je public_6eea585
  JMPTB cmp eax, 4
  JMPTB je public_6eea585
  JMPTB int 3
        public_6eea4ae : nop
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edi
        push 9
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        push edi
        push 9
        call public_6eeb920
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        add esp, 0x10
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x30], 9
        mov dword ptr ss : [esp+0x20], offset public_6fb74d4
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        push eax
        jmp public_6eea80e
        public_6eea508 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        push edi
        push 0xB
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x48]
        add esp, 8
        test eax, 0x7F0000
        je public_6eea81a
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        push edi
        push 0xB
        call public_6eeb920
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x40], 0xB
        mov dword ptr ss : [esp+0x30], offset public_6fb74cc
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        lea ecx, ss:[esp+0x30]
        jmp public_6eea80a
        public_6eea585 : nop
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        push edi
        push 0xA
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        push edi
        push 0xA
        call public_6eeb920
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x44], eax
        add esp, 0x10
        lea eax, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x30], 0xA
        mov dword ptr ss : [esp+0x20], offset public_6fb74c8
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        push eax
        jmp public_6eea80e
        public_6eea5e5 : nop
        mov esi, dword ptr ss : [esp+0x40]
        lea ecx, ds:[esi+8]
        push ecx
        call public_6f75f30
        mov edx, dword ptr ds : [esi+4]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        push edi
        push 0xC
        call public_6eebd10
        add esp, 0x14
        test al, al
        je public_6eea81a
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        push edi
        push 0xC
        call public_6eeb920
        mov dword ptr ss : [esp+0x40], 0xC
        jmp public_6eea683
        public_6eea627 : nop
        add eax, 0xFFFFEFFC
        cmp eax, 0xA
        ja public_6eea81a
/*FIXUP movzx eax, byte ptr ds : [eax+public_6eea84c] @0x6eea635*/
/*FIXUP jmp dword ptr ds : [eax*4+public_6eea838] @0x6eea63c*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c00000000004d35
  JMPTB mov eax, 0
  JMPTB public_4c00000000004d35 : nop
        je public_6eea6a9
  JMPTB cmp eax, 1
  JMPTB jne public_4c00000000004d31
  JMPTB mov eax, 1
  JMPTB public_4c00000000004d31 : nop
        je public_6eea713
  JMPTB cmp eax, 2
  JMPTB jne public_4c00000000004d2d
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d2d : nop
        je public_6eea81a
  JMPTB cmp eax, 3
  JMPTB jne public_4c00000000004d29
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d29 : nop
        je public_6eea81a
  JMPTB cmp eax, 4
  JMPTB jne public_4c00000000004d25
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d25 : nop
        je public_6eea81a
  JMPTB cmp eax, 5
  JMPTB jne public_4c00000000004d21
  JMPTB mov eax, 2
  JMPTB public_4c00000000004d21 : nop
        je public_6eea779
  JMPTB cmp eax, 6
  JMPTB jne public_4c00000000004d1d
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d1d : nop
        je public_6eea81a
  JMPTB cmp eax, 7
  JMPTB jne public_4c00000000004d19
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d19 : nop
        je public_6eea81a
  JMPTB cmp eax, 8
  JMPTB jne public_4c00000000004d15
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d15 : nop
        je public_6eea81a
  JMPTB cmp eax, 9
  JMPTB jne public_4c00000000004d11
  JMPTB mov eax, 4
  JMPTB public_4c00000000004d11 : nop
        je public_6eea81a
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c00000000004d0d
  JMPTB mov eax, 3
  JMPTB public_4c00000000004d0d : nop
        je public_6eea643
  JMPTB int 3
        public_6eea643 : nop
        mov esi, dword ptr ss : [esp+0x40]
        lea ecx, ds:[esi+8]
        push ecx
        call public_6f75f30
        mov edx, dword ptr ds : [esi+4]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        push edi
        push 8
        call public_6eebd10
        add esp, 0x14
        test al, al
        je public_6eea81a
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        push ecx
        push edx
        push edi
        push 8
        call public_6eeb920
        mov dword ptr ss : [esp+0x40], 8
        public_6eea683 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0x10
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x20], offset public_6fb74d4
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ecx
        push edx
        jmp public_6eea80e
        public_6eea6a9 : nop
        mov esi, dword ptr ss : [esp+0x40]
        lea eax, ds:[esi+8]
        push eax
        call public_6f75f30
        mov ecx, dword ptr ds : [esi]
        push 0
        push ecx
        mov edi, eax
        push edi
        push 0xE
        call public_6eebd10
        add esp, 0x14
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi]
        push 0
        push edx
        push edi
        push 0xE
        call public_6eeb920
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 0x10
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x30], 0xE
        mov dword ptr ss : [esp+0x20], offset public_6fb74c4
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        jmp public_6eea80e
        public_6eea713 : nop
        mov esi, dword ptr ss : [esp+0x40]
        cmp dword ptr ds : [esi], 0
        jne public_6eea81a
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f75f30
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        push ecx
        push edx
        mov edi, eax
        push edi
        push 0xF
        call public_6eebd10
        add esp, 0x14
        test al, al
        je public_6eea81a
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        push edi
        push 0xF
        call public_6eeb920
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x40], 0xF
        mov dword ptr ss : [esp+0x30], offset public_6fb74d4
        mov dword ptr ss : [esp+0x38], edx
        jmp public_6eea802
        public_6eea779 : nop
        mov esi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [esi]
        call public_6eea860
        mov ecx, dword ptr ds : [esi]
        mov edi, eax
        call public_6f33e80
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi]
        push edx
        call public_6eeb870
        add esp, 4
        test al, al
        je public_6eea81a
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
        push ecx
        push edi
        push 0x10
        call public_6eebd10
        add esp, 0x10
        test al, al
        je public_6eea81a
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx+4]
        push eax
        push edx
        push edi
        push 0x10
        call public_6eeb920
        mov edx, dword ptr ds : [esi+4]
        xor eax, eax
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x40], 0x10
        mov dword ptr ss : [esp+0x30], offset public_6fb74d4
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x38], ecx
        mov eax, dword ptr ds : [edx+4]
        public_6eea802 : nop
        mov dword ptr ss : [esp+0x3C], eax
        public_6eea806 : nop
        lea ecx, ss:[esp+0x30]
        public_6eea80a : nop
        add esp, 0x10
        push ecx
        public_6eea80e : nop
        mov ecx, offset public_6fd1c08
        call public_6ee8d70
        fstp st(0)
        public_6eea81a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x6eea160)
        ASM_EXPORT_ENTRY_FIRST(0x6eea4ae, public_6eea4ae)
        ASM_EXPORT_ENTRY(0x6eea508, public_6eea508)
        ASM_EXPORT_ENTRY(0x6eea585, public_6eea585)
        ASM_EXPORT_ENTRY(0x6eea643, public_6eea643)
        ASM_EXPORT_ENTRY(0x6eea6a9, public_6eea6a9)
        ASM_EXPORT_ENTRY(0x6eea713, public_6eea713)
        ASM_EXPORT_ENTRY(0x6eea779, public_6eea779)
        ASM_EXPORT_ENTRY_LAST(0x6eea81a, public_6eea81a)
    }
}

#undef public_6eea228
#undef public_6eea25a
#undef public_6eea2fd
#undef public_6eea3b7
#undef public_6eea421
#undef public_6eea48a
#undef public_6eea4ae
#undef public_6eea508
#undef public_6eea585
#undef public_6eea5e5
#undef public_6eea627
#undef public_6eea643
#undef public_6eea683
#undef public_6eea6a9
#undef public_6eea713
#undef public_6eea779
#undef public_6eea802
#undef public_6eea806
#undef public_6eea80a
#undef public_6eea80e
#undef public_6eea81a

#pragma init_seg(compiler)
extern "C" void const* const public_6eea4ae = __AsmFindLabelExport(&internal_6eea160, 0x6eea4ae);
extern "C" void const* const public_6eea508 = __AsmFindLabelExport(&internal_6eea160, 0x6eea508);
extern "C" void const* const public_6eea585 = __AsmFindLabelExport(&internal_6eea160, 0x6eea585);
extern "C" void const* const public_6eea643 = __AsmFindLabelExport(&internal_6eea160, 0x6eea643);
extern "C" void const* const public_6eea6a9 = __AsmFindLabelExport(&internal_6eea160, 0x6eea6a9);
extern "C" void const* const public_6eea713 = __AsmFindLabelExport(&internal_6eea160, 0x6eea713);
extern "C" void const* const public_6eea779 = __AsmFindLabelExport(&internal_6eea160, 0x6eea779);
extern "C" void const* const public_6eea81a = __AsmFindLabelExport(&internal_6eea160, 0x6eea81a);
