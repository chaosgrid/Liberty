#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6276540);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

#define public_6276568 _public_6276568
#define public_6276592 _public_6276592
#define public_62765b7 _public_62765b7
#define public_62765ef _public_62765ef
#define public_6276626 _public_6276626
#define public_627662b _public_627662b
#define public_627663a _public_627663a
#define public_627666a _public_627666a
#define public_6276672 _public_6276672
#define public_6276684 _public_6276684
#define public_627668f _public_627668f
#define public_62766ba _public_62766ba
#define public_62766bd _public_62766bd
#define public_62766d4 _public_62766d4
#define public_6276700 _public_6276700

PROC_DECLARE(0x6276540, internal_6276540, public_6276540);
extern "C" NAKED register_t __cdecl internal_6276540()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        xor eax, eax
        mov dword ptr ss : [esp+0x14], ecx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], eax
        call public_6310170
        test al, al
        je public_627663a
/*FIXUP public_6276568 : nop
        push offset public_6399f10 @0x6276568*/
  FIXUP public_6276568 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f10
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276592
        call public_6310b70
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call public_6334400
        add esp, 8
        jmp public_627662b
/*FIXUP public_6276592 : nop
        push offset public_639ab3c @0x6276592*/
  FIXUP public_6276592 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab3c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62765b7
        call public_6310b70
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6334400
        add esp, 8
        jmp public_627662b
/*FIXUP public_62765b7 : nop
        push offset public_639ab34 @0x62765b7*/
  FIXUP public_62765b7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab34
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62765ef
        mov edi, 0x100001
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x635
/*FIXUP push offset public_639a188 @0x62765dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639ab00 @0x62765e2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639ab00
        push edi
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_627662b
/*FIXUP public_62765ef : nop
        push offset public_639aaf4 @0x62765ef*/
  FIXUP public_62765ef : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aaf4
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6276626
        mov edi, 0x100001
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x639
/*FIXUP push offset public_639a188 @0x6276614*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639aabc @0x6276619*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aabc
        push edi
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_627662b
        public_6276626 : nop
        call public_6310040
        public_627662b : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_6276568
        public_627663a : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jne public_627666a
        mov ecx, esi
        call public_6310040
        push eax
        push 0x647
/*FIXUP push offset public_639a188 @0x627664f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov ecx, 0x100001
/*FIXUP push offset public_639aa70 @0x6276659*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aa70
        push ecx
        mov ecx, dword ptr ds : [public_6399028]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_627666a : nop
        mov ebx, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        xor edi, edi
        public_6276672 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edx+0x178]
        test ecx, ecx
        jne public_6276684
        xor eax, eax
        jmp public_627668f
        public_6276684 : nop
        mov eax, dword ptr ds : [edx+0x17C]
        sub eax, ecx
        sar eax, 2
        public_627668f : nop
        cmp edi, eax
        jge public_62766bd
        mov edx, dword ptr ds : [edx+0x178]
        mov eax, dword ptr ds : [edx+edi*4]
        mov eax, dword ptr ds : [eax]
        push eax
        push ebx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_62766ba
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+0x178]
        mov ebp, dword ptr ds : [edx+edi*4]
        public_62766ba : nop
        inc edi
        jmp public_6276672
        public_62766bd : nop
        test ebp, ebp
        je public_62766d4
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        add ebp, 0x40
        push ebp
        call public_6334400
        add esp, 8
        jmp public_6276700
        public_62766d4 : nop
        mov ecx, esi
        call public_6310040
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x656
/*FIXUP push offset public_639a188 @0x62766eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov ecx, 0x100001
/*FIXUP push offset public_639aa10 @0x62766f5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639aa10
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x18
        public_6276700 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_6334430
        lea edx, ss:[esp+0x18]
        push edx
        call public_6334430
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6276540)
    }
}

#undef public_6276568
#undef public_6276592
#undef public_62765b7
#undef public_62765ef
#undef public_6276626
#undef public_627662b
#undef public_627663a
#undef public_627666a
#undef public_6276672
#undef public_6276684
#undef public_627668f
#undef public_62766ba
#undef public_62766bd
#undef public_62766d4
#undef public_6276700
