#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62b95d0);
CLANG_FORWARD_PROC_SYMBOL(public_62fef70);
CLANG_FORWARD_PROC_SYMBOL(public_62ffc50);
CLANG_FORWARD_PROC_SYMBOL(public_62fff60);
CLANG_FORWARD_PROC_SYMBOL(public_6300570);
CLANG_FORWARD_PROC_SYMBOL(public_63011b0);
CLANG_FORWARD_PROC_SYMBOL(public_6301280);
CLANG_FORWARD_PROC_SYMBOL(public_6301370);
CLANG_FORWARD_PROC_SYMBOL(public_63013d0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_63104c0);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_6395f23);

#define public_63005e3 _public_63005e3
#define public_6300614 _public_6300614
#define public_630064f _public_630064f
#define public_630068d _public_630068d
#define public_63006a6 _public_63006a6
#define public_63006bd _public_63006bd
#define public_63006d6 _public_63006d6
#define public_6300700 _public_6300700
#define public_6300730 _public_6300730
#define public_630073c _public_630073c
#define public_6300756 _public_6300756
#define public_6300783 _public_6300783
#define public_63007b0 _public_63007b0
#define public_63007bc _public_63007bc
#define public_63007d2 _public_63007d2
#define public_63007fa _public_63007fa
#define public_630080a _public_630080a
#define public_630080c _public_630080c
#define public_6300825 _public_6300825
#define public_6300872 _public_6300872
#define public_63008a7 _public_63008a7
#define public_63008b3 _public_63008b3
#define public_63008db _public_63008db
#define public_6300918 _public_6300918
#define public_630092c _public_630092c
#define public_630097a _public_630097a
#define public_6300a3f _public_6300a3f
#define public_6300a65 _public_6300a65
#define public_6300a78 _public_6300a78
#define public_6300a96 _public_6300a96
#define public_6300ac3 _public_6300ac3
#define public_6300ac5 _public_6300ac5
#define public_6300ada _public_6300ada
#define public_6300ae8 _public_6300ae8
#define public_6300b15 _public_6300b15
#define public_6300b35 _public_6300b35
#define public_6300bc3 _public_6300bc3
#define public_6300bcc _public_6300bcc

PROC_DECLARE(0x6300570, internal_6300570, public_6300570);
extern "C" NAKED register_t __cdecl internal_6300570()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6395f23 @0x6300578*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6395f23
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x15E0
        mov dword ptr fs : [0], esp
        call public_6391dc0
        push ebx
        push esi
        push edi
        mov ebx, ecx
        xor edi, edi
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x10], edi
        call public_630f660
        mov esi, dword ptr ss : [esp+0x15FC]
        push edi
        push esi
        lea ecx, ss:[esp+0x8C]
        mov dword ptr ss : [esp+0x15FC], edi
        call public_630f9b0
        test al, al
        je public_6300b15
        lea ecx, ss:[esp+0x84]
        call public_6310070
        test al, al
        je public_6300ada
        push ebp
/*FIXUP public_63005e3 : nop
        push offset public_63a24f8 @0x63005e3*/
  FIXUP public_63005e3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24f8
        lea ecx, ss:[esp+0x8C]
        call public_63103c0
        test al, al
        lea ecx, ss:[esp+0x88]
        je public_63006d6
        mov dword ptr ss : [esp+0x14], edi
        call public_6310170
        test al, al
        je public_6300ac5
/*FIXUP public_6300614 : nop
        push offset public_63a24ec @0x6300614*/
  FIXUP public_6300614 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24ec
        lea ecx, ss:[esp+0x8C]
        call public_6310410
        test al, al
        je public_630064f
/*FIXUP push offset public_63a24d4 @0x6300629*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24d4
        push 0x33B
/*FIXUP push offset public_63a234c @0x6300633*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x630063d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_63006bd
/*FIXUP public_630064f : nop
        push offset public_63a24d0 @0x630064f*/
  FIXUP public_630064f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24d0
        lea ecx, ss:[esp+0x8C]
        call public_6310410
        test al, al
        je public_63006bd
        lea ecx, ss:[esp+0x88]
        call public_6310b70
        mov ebp, dword ptr ds : [public_639902c]
        mov esi, eax
/*FIXUP push offset public_639b364 @0x6300678*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b364
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_630068d
        mov dword ptr ss : [esp+0x14], edi
        jmp public_63006bd
/*FIXUP public_630068d : nop
        push offset public_63a24c8 @0x630068d*/
  FIXUP public_630068d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24c8
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_63006a6
        mov dword ptr ss : [esp+0x14], 1
        jmp public_63006bd
/*FIXUP public_63006a6 : nop
        push offset public_63a24c0 @0x63006a6*/
  FIXUP public_63006a6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24c0
        push esi
        call ebp
        add esp, 8
        test eax, eax
        jne public_63006bd
        mov dword ptr ss : [esp+0x14], 2
        public_63006bd : nop
        lea ecx, ss:[esp+0x88]
        call public_6310170
        test al, al
        jne public_6300614
        jmp public_6300ac5
/*FIXUP public_63006d6 : nop
        push offset public_63a24b4 @0x63006d6*/
  FIXUP public_63006d6 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24b4
        call public_63103c0
        test al, al
        lea ecx, ss:[esp+0x88]
        je public_6300825
        call public_6310170
        test al, al
        je public_6300ac5
        lea esp, ss:[esp]
/*FIXUP public_6300700 : nop
        push offset public_639eb78 @0x6300700*/
  FIXUP public_6300700 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eb78
        lea ecx, ss:[esp+0x8C]
        call public_6310410
        test al, al
        lea ecx, ss:[esp+0x88]
        je public_6300783
        call public_6310b70
        mov edi, eax
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6300756
        lea esp, ss:[esp]
        public_6300730 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_630073c
        mov eax, dword ptr ds : [public_63991d0]
        public_630073c : nop
        push eax
        push edi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_630080a
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+4]
        jne public_6300730
        public_6300756 : nop
        lea ecx, ss:[esp+0x27]
        push ecx
        push edi
        lea ecx, ss:[esp+0x70]
        call dword ptr ds : [public_6399188]
        lea edx, ss:[esp+0x68]
        push edx
        mov ecx, ebx
        mov byte ptr ss : [esp+0x15FC], 1
        call public_6301280
        lea ecx, ss:[esp+0x68]
        jmp public_63007fa
/*FIXUP public_6300783 : nop
        push offset public_63a24ac @0x6300783*/
  FIXUP public_6300783 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a24ac
        call public_6310410
        test al, al
        je public_630080c
        lea ecx, ss:[esp+0x88]
        call public_6310b70
        lea edi, ds:[ebx+0xC]
        mov ebp, eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_63007d2
        nop 
        public_63007b0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_63007bc
        mov eax, dword ptr ds : [public_63991d0]
        public_63007bc : nop
        push eax
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_630080a
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_63007b0
        public_63007d2 : nop
        lea eax, ss:[esp+0x13]
        push eax
        push ebp
        lea ecx, ss:[esp+0x60]
        call dword ptr ds : [public_6399188]
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, edi
        mov byte ptr ss : [esp+0x15FC], 2
        call public_6301280
        lea ecx, ss:[esp+0x58]
        public_63007fa : nop
        push 1
        mov byte ptr ss : [esp+0x15FC], 0
        call dword ptr ds : [public_63991b8]
        public_630080a : nop
        xor edi, edi
        public_630080c : nop
        lea ecx, ss:[esp+0x88]
        call public_6310170
        test al, al
        jne public_6300700
        jmp public_6300ac5
/*FIXUP public_6300825 : nop
        push offset public_63a249c @0x6300825*/
  FIXUP public_6300825 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a249c
        call public_63103c0
        test al, al
        je public_630097a
        mov dl, byte ptr ss : [esp+0x13]
        push 0x18
        mov byte ptr ss : [esp+0x1C], dl
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], edi
        lea ecx, ss:[esp+0x88]
        mov byte ptr ss : [esp+0x15F8], 3
        call public_6310170
        test al, al
        je public_630092c
/*FIXUP public_6300872 : nop
        push offset public_639eb78 @0x6300872*/
  FIXUP public_6300872 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639eb78
        lea ecx, ss:[esp+0x8C]
        call public_6310410
        test al, al
        je public_6300918
        lea ecx, ss:[esp+0x88]
        call public_6310b70
        mov ecx, dword ptr ss : [esp+0x1C]
        mov esi, eax
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x28], eax
        je public_63008db
        public_63008a7 : nop
        mov eax, dword ptr ds : [eax+0xC]
        cmp eax, edi
        jne public_63008b3
        mov eax, dword ptr ds : [public_63991d0]
        public_63008b3 : nop
        push eax
        push esi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_6300918
        push edi
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x30]
        call public_632ca20
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ss : [esp+0x1C]
        jne public_63008a7
        public_63008db : nop
        lea ecx, ss:[esp+0x12]
        push ecx
        push esi
        lea ecx, ss:[esp+0x80]
        call dword ptr ds : [public_6399188]
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x15FC], 4
        call public_6301280
        push 1
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x15FC], 3
        call dword ptr ds : [public_63991b8]
        public_6300918 : nop
        lea ecx, ss:[esp+0x88]
        call public_6310170
        test al, al
        jne public_6300872
        public_630092c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        lea ecx, ds:[ebx+0x18]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x54]
        push eax
        call public_6301370
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x1604], 0
        call public_62b95d0
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call public_6391d5a
        add esp, 4
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        jmp public_6300ac5
/*FIXUP public_630097a : nop
        push offset public_63a2488 @0x630097a*/
  FIXUP public_630097a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2488
        lea ecx, ss:[esp+0x8C]
        call public_63103c0
        test al, al
        je public_6300a3f
        mov al, byte ptr ss : [esp+0x12]
        mov byte ptr ss : [esp+0x30], al
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        push 0x10
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x15FC], 5
        call public_63011b0
        mov dword ptr ss : [esp+0x40], 0x41A00000
        mov dword ptr ss : [esp+0x44], 0x44A00000
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x15FC], 6
        call public_62fef70
        mov eax, dword ptr ds : [ebx+0x28]
        lea ecx, ds:[ebx+0x24]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        lea eax, ss:[esp+0x50]
        push eax
        call public_63013d0
        mov eax, dword ptr ds : [ebx+0x28]
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x34]
        push ecx
        add eax, 8
        push edx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x34], eax
        mov byte ptr ss : [esp+0x1600], 0
        call public_628f050
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        call public_6391d5a
        add esp, 4
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], edi
        jmp public_6300ac5
/*FIXUP public_6300a3f : nop
        push offset public_63a247c @0x6300a3f*/
  FIXUP public_6300a3f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a247c
        lea ecx, ss:[esp+0x8C]
        call public_63103c0
        test al, al
        je public_6300a65
        lea ecx, ss:[esp+0x88]
        push ecx
        mov ecx, ebx
        call public_62fff60
        jmp public_6300ac5
        public_6300a65 : nop
        lea ecx, ss:[esp+0x88]
        call public_63104c0
        mov ebp, eax
        mov esi, offset public_63ecd6c
        public_6300a78 : nop
        push ebp
        push esi
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        je public_6300ae8
        add esi, 0x104
        inc edi
        cmp esi, offset public_63ed17c
        jl public_6300a78
        public_6300a96 : nop
        lea ecx, ss:[esp+0x88]
        mov esi, 0x100001
        call public_63104c0
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x3A8
/*FIXUP push offset public_63a234c @0x6300ab3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
/*FIXUP push offset public_63a2444 @0x6300ab8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a2444
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6300ac3 : nop
        xor edi, edi
        public_6300ac5 : nop
        lea ecx, ss:[esp+0x88]
        call public_6310070
        test al, al
        jne public_63005e3
        pop ebp
        public_6300ada : nop
        lea ecx, ss:[esp+0x84]
        call public_630f770
        jmp public_6300b35
        public_6300ae8 : nop
        imul edi, 0x104
        mov edi, dword ptr ds : [edi+public_63ecd68]
        cmp edi, 0xFFFFFFFF
        je public_6300a96
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x88]
        push edx
        push eax
        push ecx
        push edi
        mov ecx, ebx
        call public_62ffc50
        jmp public_6300ac3
        public_6300b15 : nop
        push esi
        push 0x3B0
/*FIXUP push offset public_63a234c @0x6300b1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a234c
        mov eax, 0x100001
/*FIXUP push offset public_63a240c @0x6300b25*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a240c
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6300b35 : nop
        mov ebx, 7
        lea ecx, ss:[esp+0x14AC]
        mov dword ptr ss : [esp+0x15F4], ebx
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x14AC]
        mov byte ptr ss : [esp+0x15F4], 8
        call public_6262630
        push 1
        lea ecx, ss:[esp+0x14B0]
        mov byte ptr ss : [esp+0x15F8], bl
        call dword ptr ds : [public_63991b8]
        lea ecx, ss:[esp+0x84]
        mov dword ptr ss : [esp+0x15F4], 9
        call public_6262630
        mov eax, dword ptr ss : [esp+0x88]
        cmp eax, edi
        pop edi
        pop esi
        pop ebx
        je public_6300bcc
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6300bc3
        cmp cl, 0xFF
        je public_6300bc3
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x15E0]
        mov dword ptr fs : [0], ecx
        add esp, 0x15EC
        ret 4
        public_6300bc3 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6300bcc : nop
        mov ecx, dword ptr ss : [esp+0x15E0]
        mov dword ptr fs : [0], ecx
        add esp, 0x15EC
        ret 4
        UNREACHABLE_TRAP(0x6300570)
    }
}

#undef public_63005e3
#undef public_6300614
#undef public_630064f
#undef public_630068d
#undef public_63006a6
#undef public_63006bd
#undef public_63006d6
#undef public_6300700
#undef public_6300730
#undef public_630073c
#undef public_6300756
#undef public_6300783
#undef public_63007b0
#undef public_63007bc
#undef public_63007d2
#undef public_63007fa
#undef public_630080a
#undef public_630080c
#undef public_6300825
#undef public_6300872
#undef public_63008a7
#undef public_63008b3
#undef public_63008db
#undef public_6300918
#undef public_630092c
#undef public_630097a
#undef public_6300a3f
#undef public_6300a65
#undef public_6300a78
#undef public_6300a96
#undef public_6300ac3
#undef public_6300ac5
#undef public_6300ada
#undef public_6300ae8
#undef public_6300b15
#undef public_6300b35
#undef public_6300bc3
#undef public_6300bcc
