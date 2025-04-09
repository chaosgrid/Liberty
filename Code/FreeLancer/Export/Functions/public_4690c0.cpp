#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_45f860);
CLANG_FORWARD_PROC_SYMBOL(public_4690c0);
CLANG_FORWARD_PROC_SYMBOL(public_4699d0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ce80);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4b6800);
CLANG_FORWARD_PROC_SYMBOL(public_4c5a10);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57eb40);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bb696);

#define public_46912d _public_46912d
#define public_46912f _public_46912f
#define public_469168 _public_469168
#define public_46916a _public_46916a
#define public_4691a3 _public_4691a3
#define public_4691a5 _public_4691a5
#define public_4691db _public_4691db
#define public_4691dd _public_4691dd
#define public_469290 _public_469290
#define public_469344 _public_469344
#define public_4693c5 _public_4693c5
#define public_46941e _public_46941e
#define public_469485 _public_469485
#define public_469493 _public_469493
#define public_4694eb _public_4694eb
#define public_469521 _public_469521
#define public_469578 _public_469578
#define public_4695db _public_4695db
#define public_4695e9 _public_4695e9
#define public_46963f _public_46963f
#define public_469675 _public_469675
#define public_4696ca _public_4696ca
#define public_469752 _public_469752
#define public_469760 _public_469760
#define public_4697b1 _public_4697b1
#define public_4697b3 _public_4697b3
#define public_4697fc _public_4697fc
#define public_46984e _public_46984e
#define public_4698a0 _public_4698a0
#define public_4698fd _public_4698fd

PROC_DECLARE(0x4690c0, internal_4690c0, public_4690c0);
extern "C" NAKED register_t __cdecl internal_4690c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bb696 @0x4690c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bb696
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2C
        push ebx
        push ebp
        push esi
        push edi
        or ebp, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5cfe5c
        mov ecx, ebp
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_5cfe5c @0x4690ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfe5c
        mov ecx, offset public_66d8e4
        call dword ptr ds : [public_5c7088]
        push 0x14
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x44], 0
        je public_46912d
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x15]
        push ecx
        mov ecx, esi
        call public_4c5a10
        jmp public_46912f
        public_46912d : nop
        xor esi, esi
        public_46912f : nop
        push 0x14
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ds : [public_66da70], esi
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x44], 1
        je public_469168
        lea edx, ss:[esp+0x11]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_4c5a10
        jmp public_46916a
        public_469168 : nop
        xor esi, esi
        public_46916a : nop
        push 0x14
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ds : [public_66da74], esi
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], esi
        test esi, esi
        mov dword ptr ss : [esp+0x44], 2
        je public_4691a3
        lea ecx, ss:[esp+0x11]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, esi
        call public_4c5a10
        jmp public_4691a5
        public_4691a3 : nop
        xor esi, esi
        public_4691a5 : nop
        push 0x44
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ds : [public_66da78], esi
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        test eax, eax
        mov dword ptr ss : [esp+0x44], 3
        je public_4691db
        push 0x2710
        push 0x20
        push 0x20
        mov ecx, eax
        call public_4699d0
        jmp public_4691dd
        public_4691db : nop
        xor eax, eax
        public_4691dd : nop
        mov edx, dword ptr ds : [public_66da40]
        mov esi, dword ptr ds : [public_5c62b8]
        lea ecx, ds:[eax+0x18]
        mov dword ptr ds : [public_66da60], eax
        mov dword ptr ds : [public_66da64], ecx
        add eax, 0x28
        push 0x3EA8
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ds : [public_66da68], eax
        mov dword ptr ds : [public_66d3fc], edx
        call esi
        mov edx, dword ptr ds : [eax]
        mov ebx, 4
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d428]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d424
        mov byte ptr ss : [esp+0x50], 5
        call public_46c800
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_66d424 @0x469262*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d424
        push 0x60052
        call public_57da40
        mov edi, dword ptr ds : [public_5c62bc]
        add esp, 8
        test al, al
        je public_469290
/*FIXUP push offset public_66d424 @0x46927e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d424
        call public_57eb40
        add esp, 4
        jmp public_469344
        public_469290 : nop
        push 1
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 6
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d428]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d424
        mov byte ptr ss : [esp+0x50], 7
        call public_46c800
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call edi
        push ebp
/*FIXUP push offset public_5cfe34 @0x4692e7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfe34
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 8
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d428]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d424
        mov byte ptr ss : [esp+0x50], 9
        call public_46c800
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62ac]
        public_469344 : nop
        push 0x3EA8
        lea ecx, ss:[esp+0x20]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xA
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d41c]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d418
        mov byte ptr ss : [esp+0x50], 0xB
        call public_46c800
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x44], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_66d418 @0x46939d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d418
        push 0x60053
        call public_57da40
        add esp, 8
        test al, al
        je public_4693c5
/*FIXUP push offset public_66d418 @0x4693b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d418
        call public_57eb40
        add esp, 4
        jmp public_469493
        public_4693c5 : nop
        push 1
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xC
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d41c]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d418
        mov byte ptr ss : [esp+0x50], 0xD
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x44], bl
        je public_46941e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        public_46941e : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call edi
        push ebp
/*FIXUP push offset public_5cfe00 @0x469429*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfe00
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0xE
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d41c]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d418
        mov byte ptr ss : [esp+0x50], 0xF
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x44], bl
        je public_469485
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        public_469485 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62ac]
        public_469493 : nop
        push 0x3EA8
        lea ecx, ss:[esp+0x20]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x10
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d410]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d40c
        mov byte ptr ss : [esp+0x50], 0x11
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x44], bl
        je public_4694eb
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        public_4694eb : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_66d40c @0x4694f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d40c
        push 0x6004F
        call public_57da40
        add esp, 8
        test al, al
        je public_469521
/*FIXUP push offset public_66d40c @0x46950f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d40c
        call public_57eb40
        add esp, 4
        jmp public_4695e9
        public_469521 : nop
        push 1
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x12
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d410]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d40c
        mov byte ptr ss : [esp+0x50], 0x13
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x44], bl
        xor ebx, ebx
        cmp ecx, ebx
        je public_469578
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        public_469578 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call edi
        push ebp
/*FIXUP push offset public_5cfdcc @0x469583*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfdcc
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], 0x14
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d410]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d40c
        mov byte ptr ss : [esp+0x50], 0x15
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x44], 0x14
        je public_4695db
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ebx
        public_4695db : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62ac]
        public_4695e9 : nop
        push 0x3EA8
        lea ecx, ss:[esp+0x20]
        call esi
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x16
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d404]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d400
        mov byte ptr ss : [esp+0x50], 0x17
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        xor esi, esi
        cmp ecx, esi
        mov byte ptr ss : [esp+0x44], bl
        je public_46963f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], esi
        public_46963f : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62b4]
/*FIXUP push offset public_66d400 @0x46964d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d400
        push 0x60050
        call public_57da40
        add esp, 8
        test al, al
        je public_469675
/*FIXUP push offset public_66d400 @0x469663*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66d400
        call public_57eb40
        add esp, 4
        jmp public_469760
        public_469675 : nop
        push 1
        lea ecx, ss:[esp+0x20]
        call dword ptr ds : [public_5c62c0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x18
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_66d404]
        lea ecx, ss:[esp+0x14]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, offset public_66d400
        mov byte ptr ss : [esp+0x50], 0x19
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, esi
        mov byte ptr ss : [esp+0x44], bl
        je public_4696ca
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], esi
        public_4696ca : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call edi
        push ebp
/*FIXUP push offset public_5cfd98 @0x4696d5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cfd98
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_5c62b0]
        mov edx, dword ptr ds : [eax]
        mov ebx, 0x1A
        mov ecx, eax
        mov dword ptr ss : [esp+0x44], ebx
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov esi, dword ptr ds : [public_66d404]
        mov eax, dword ptr ds : [esi+4]
        push eax
        push esi
        mov ecx, offset public_66d400
        mov byte ptr ss : [esp+0x4C], 0x1B
        call public_42a7e0
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x14]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [public_66d408]
        add esp, 8
        inc ecx
        mov dword ptr ds : [public_66d408], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x44], bl
        je public_469752
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], 0
        public_469752 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call dword ptr ds : [public_5c62ac]
        public_469760 : nop
        push 0x2C
        call public_5b7e84
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x44], 0x1C
        je public_4697b1
        lea eax, ss:[esp+0x11]
        push eax
        push 0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_4b6800
        lea edx, ss:[esp+0x12]
        push edx
        push 0
        lea eax, ss:[esp+0x1B]
        lea ecx, ds:[esi+0x18]
        push eax
        mov byte ptr ss : [esp+0x50], 0x1D
        call public_46ce80
        mov dword ptr ds : [esi+0x14], 0
        jmp public_4697b3
        public_4697b1 : nop
        xor esi, esi
        public_4697b3 : nop
        mov edi, dword ptr ds : [public_66da40]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ds : [public_66da7c], esi
        call public_46ba60
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x6003D
        mov dword ptr ss : [esp+0x4C], 0x1E
        call public_57da40
        add esp, 8
        test al, al
        je public_4697fc
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        mov ecx, esi
        call public_45f860
        public_4697fc : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call public_46ba90
        mov esi, dword ptr ds : [public_66da38]
        mov edi, dword ptr ds : [public_66da7c]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_46ba60
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x60036
        mov dword ptr ss : [esp+0x4C], 0x1F
        call public_57da40
        add esp, 8
        test al, al
        je public_46984e
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        mov ecx, edi
        call public_45f860
        public_46984e : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call public_46ba90
        mov esi, dword ptr ds : [public_66da48]
        mov ebx, dword ptr ds : [public_66da7c]
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_46ba60
        lea edx, ss:[esp+0x1C]
        push edx
        push 0x60035
        mov dword ptr ss : [esp+0x4C], 0x20
        call public_57da40
        add esp, 8
        test al, al
        je public_4698a0
        lea eax, ss:[esp+0x1C]
        push eax
        push esi
        mov ecx, ebx
        call public_45f860
        public_4698a0 : nop
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x44], ebp
        call public_46ba90
        push 0
        push 0
/*FIXUP push offset public_5ced90 @0x4698b1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced90
/*FIXUP push offset public_5ced90 @0x4698b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ced90
        call public_59db20
        add esp, 0x10
        test eax, eax
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [public_66da84], eax
        pop ebx
        je public_4698fd
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [public_66da84]
        and byte ptr ds : [eax+0x6C], 0xFC
        public_4698fd : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr fs : [0], ecx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x4690c0)
    }
}

#undef public_46912d
#undef public_46912f
#undef public_469168
#undef public_46916a
#undef public_4691a3
#undef public_4691a5
#undef public_4691db
#undef public_4691dd
#undef public_469290
#undef public_469344
#undef public_4693c5
#undef public_46941e
#undef public_469485
#undef public_469493
#undef public_4694eb
#undef public_469521
#undef public_469578
#undef public_4695db
#undef public_4695e9
#undef public_46963f
#undef public_469675
#undef public_4696ca
#undef public_469752
#undef public_469760
#undef public_4697b1
#undef public_4697b3
#undef public_4697fc
#undef public_46984e
#undef public_4698a0
#undef public_4698fd
