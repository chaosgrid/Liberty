#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba90);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_4704d0);
CLANG_FORWARD_PROC_SYMBOL(public_47ba90);
CLANG_FORWARD_PROC_SYMBOL(public_484090);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5835f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bbf78);

#define public_47bac4 _public_47bac4
#define public_47bae2 _public_47bae2
#define public_47bb22 _public_47bb22
#define public_47bb42 _public_47bb42
#define public_47bbc9 _public_47bbc9
#define public_47bc1d _public_47bc1d
#define public_47bc37 _public_47bc37
#define public_47bc6f _public_47bc6f
#define public_47bc8b _public_47bc8b
#define public_47bcb4 _public_47bcb4
#define public_47bce8 _public_47bce8
#define public_47bd08 _public_47bd08
#define public_47bd64 _public_47bd64
#define public_47bde9 _public_47bde9
#define public_47bed1 _public_47bed1
#define public_47bf8c _public_47bf8c
#define public_47c08c _public_47c08c
#define public_47c0dd _public_47c0dd
#define public_47c0eb _public_47c0eb
#define public_47c0f3 _public_47c0f3
#define public_47c10d _public_47c10d
#define public_47c1af _public_47c1af
#define public_47c1d4 _public_47c1d4
#define public_47c1ea _public_47c1ea
#define public_47c239 _public_47c239
#define public_47c2f3 _public_47c2f3
#define public_47c32e _public_47c32e
#define public_47c3bc _public_47c3bc
#define public_47c3f7 _public_47c3f7
#define public_47c4a5 _public_47c4a5
#define public_47c4ce _public_47c4ce
#define public_47c4ec _public_47c4ec
#define public_47c567 _public_47c567
#define public_47c582 _public_47c582
#define public_47c5a4 _public_47c5a4
#define public_47c5da _public_47c5da
#define public_47c5f0 _public_47c5f0
#define public_47c5f4 _public_47c5f4
#define public_47c626 _public_47c626
#define public_47c646 _public_47c646
#define public_47c655 _public_47c655
#define public_47c66b _public_47c66b
#define public_47c67b _public_47c67b
#define public_47c695 _public_47c695
#define public_47c6b7 _public_47c6b7
#define public_47c6d0 _public_47c6d0
#define public_47c705 _public_47c705
#define public_47c706 _public_47c706
#define public_47c70e _public_47c70e

PROC_DECLARE(0x47ba90, internal_47ba90, public_47ba90);
extern "C" NAKED register_t __cdecl internal_47ba90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bbf78 @0x47ba98*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bbf78
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x58
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x91C]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_47bac4
        test byte ptr ds : [eax+0x6C], 2
        jne public_47c70e
        public_47bac4 : nop
        cmp dword ptr ds : [esi+0x4BC], ebx
        jne public_47bae2
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        je public_47bae2
        mov eax, dword ptr ds : [eax+0x4BC]
        mov dword ptr ds : [esi+0x4BC], eax
        public_47bae2 : nop
        mov edi, dword ptr ss : [esp+0x78]
        cmp edi, ebx
        jne public_47bcb4
        mov ecx, dword ptr ss : [esp+0x7C]
        cmp ecx, ebx
        mov eax, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [esi+0x4E8], ebx
        mov byte ptr ds : [esi+0x4E1], bl
        je public_47bc6f
        cmp eax, ebx
        je public_47bb22
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [edx+0x4EC], ebx
        public_47bb22 : nop
        cmp byte ptr ds : [esi+0x35C], bl
        je public_47bb42
        mov eax, dword ptr ds : [esi+0x974]
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [esi+0x974]
        mov dword ptr ds : [edx+0x4EC], ebx
        public_47bb42 : nop
        cmp dword ptr ds : [esi+0x4EC], ecx
        je public_47c70e
        mov al, byte ptr ss : [esp+0x78]
        push ebx
        mov dword ptr ds : [esi+0x4EC], ecx
        push ebx
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x64], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x74], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x78], eax
        mov ecx, dword ptr ss : [esp+0x60]
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x7C], 2
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x78]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 1
        je public_47bbc9
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x78], ebx
        public_47bbc9 : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x70], bl
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ds : [esi+0x4EC]
        lea ecx, ss:[esp+0x5C]
        push ecx
        push edx
        call public_57da40
        mov eax, dword ptr ds : [esi+0x398]
        add esp, 8
        cmp eax, ebx
        je public_47bc1d
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x39C]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x3A0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x4BC]
        or byte ptr ds : [eax+0x6C], 3
        jmp public_47bc37
        public_47bc1d : nop
        mov ecx, dword ptr ds : [esi+0x944]
        cmp ecx, ebx
        je public_47bc37
        mov eax, dword ptr ds : [ecx]
        push ebx
        push 0x388
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_47bc37 : nop
        mov esi, dword ptr ds : [esi+0x4BC]
        push ebx
        push ebx
        mov ecx, esi
        call public_5798b0
        mov ecx, esi
        call public_57b370
        lea ecx, ss:[esp+0x5C]
        push ecx
        mov ecx, esi
        call public_57b3e0
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        call public_46ba90
        jmp public_47c70e
        public_47bc6f : nop
        cmp eax, ebx
        mov dword ptr ds : [esi+0x4EC], ebx
        je public_47bc8b
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [edx+0x4EC], ebx
        public_47bc8b : nop
        cmp byte ptr ds : [esi+0x35C], bl
        je public_47c70e
        mov eax, dword ptr ds : [esi+0x974]
        mov dword ptr ds : [eax+0x4E8], ebx
        mov ecx, dword ptr ds : [esi+0x974]
        mov dword ptr ds : [ecx+0x4EC], ebx
        jmp public_47c70e
        public_47bcb4 : nop
        cmp dword ptr ds : [esi+0x4E8], edi
        je public_47c70e
        mov eax, dword ptr ds : [esi+0x360]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x4E8], edi
        mov dword ptr ds : [esi+0x4EC], ebx
        je public_47bce8
        mov dword ptr ds : [eax+0x4E8], ebx
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ds : [edx+0x4EC], ebx
        public_47bce8 : nop
        cmp byte ptr ds : [esi+0x35C], bl
        je public_47bd08
        mov eax, dword ptr ds : [esi+0x974]
        mov dword ptr ds : [eax+0x4E8], ebx
        mov ecx, dword ptr ds : [esi+0x974]
        mov dword ptr ds : [ecx+0x4EC], ebx
        public_47bd08 : nop
        cmp byte ptr ds : [esi+0x4E0], bl
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x7C], bl
        push edi
        je public_47c08c
        call dword ptr ds : [public_5c61fc]
        mov ebp, eax
        add esp, 4
        cmp ebp, ebx
        je public_47c0f3
        mov eax, dword ptr ss : [ebp+0xEC]
        mov edx, dword ptr ss : [ebp+0x14]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [esp+0x14], eax
        cmp byte ptr ds : [esi+0x35C], bl
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_47bd64
        cmp dword ptr ds : [esi+0x360], ebx
        je public_47c0f3
        public_47bd64 : nop
        cmp dword ptr ds : [esi+0x398], ebx
        je public_47c0f3
        mov dl, byte ptr ss : [esp+0x78]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x64], dl
        call public_42a7e0
        mov dword ptr ss : [esp+0x60], eax
        mov dword ptr ss : [esp+0x64], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x74], 3
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x78], eax
        mov ecx, dword ptr ss : [esp+0x60]
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x7C], 5
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x78]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 4
        je public_47bde9
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x78], ebx
        public_47bde9 : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x70], 3
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ss : [ebp+0xEC]
        lea ecx, ss:[esp+0x5C]
        push ecx
        push edx
        call public_57da40
        mov eax, dword ptr ds : [esi+0x398]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x39C]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x3A0]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x4BC]
        mov cl, byte ptr ds : [eax+0x6C]
        and cl, 0xFC
        add esp, 8
        mov byte ptr ds : [eax+0x6C], cl
        mov edi, dword ptr ds : [esi+0x398]
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea eax, ss:[esp+0x5C]
        push eax
        mov ecx, edi
        call public_57b3e0
        mov cl, byte ptr ss : [esp+0x78]
        push ebx
        mov byte ptr ss : [esp+0x48], cl
        push ebx
        lea ecx, ss:[esp+0x4C]
        call public_42a7e0
        mov dword ptr ss : [esp+0x48], eax
        mov dword ptr ss : [esp+0x4C], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x74], 6
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 7
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x78], eax
        mov ecx, dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea ecx, ss:[esp+0x50]
        mov byte ptr ss : [esp+0x7C], 8
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x78]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 7
        je public_47bed1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x78], ebx
        public_47bed1 : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x70], 6
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ss : [ebp+0xF0]
        lea ecx, ss:[esp+0x44]
        push ecx
        push edx
        call public_57da40
        mov edi, dword ptr ds : [esi+0x39C]
        add esp, 8
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, edi
        call public_57b3e0
        mov cl, byte ptr ss : [esp+0x78]
        push ebx
        mov byte ptr ss : [esp+0x18], cl
        push ebx
        lea ecx, ss:[esp+0x1C]
        call public_42a7e0
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x74], 9
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 0xA
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x78], eax
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x7C], 0xB
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x78]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 0xA
        je public_47bf8c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x78], ebx
        public_47bf8c : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x70], 9
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ss : [ebp+0xF4]
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        call public_57da40
        mov esi, dword ptr ds : [esi+0x3A0]
        add esp, 8
        push ebx
        push ebx
        mov ecx, esi
        call public_5798b0
        mov ecx, esi
        call public_57b370
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_57b3e0
        lea ecx, ss:[esp+0x78]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x74], 6
        call public_53e430
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x84]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_46c860
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call public_5b7e1d
        add esp, 4
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov byte ptr ss : [esp+0x74], 3
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x50]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x48]
        push ecx
        call public_5b7e1d
        add esp, 4
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        call public_53e430
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        lea ecx, ss:[esp+0x68]
        call public_46c860
        mov ecx, dword ptr ss : [esp+0x60]
        push ecx
        jmp public_47c706
        public_47c08c : nop
        call dword ptr ds : [public_5c603c]
        push edi
        mov dword ptr ss : [esp+0x2C], eax
        call dword ptr ds : [public_5c629c]
        mov ebp, eax
        add esp, 8
        cmp ebp, ebx
        je public_47c0dd
        lea edx, ss:[esp+0x7C]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x88], ebx
        call public_5835f0
        mov ecx, dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ss : [ebp+0x8C]
        add esp, 0xC
        dec eax
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x7C], al
        jmp public_47c0eb
        public_47c0dd : nop
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, ebx
        je public_47c0f3
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x18]
        public_47c0eb : nop
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_47c0f3 : nop
        mov ecx, dword ptr ds : [esi+0x4B8]
        cmp ecx, ebx
        je public_47c10d
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_47c10d : nop
        cmp dword ptr ds : [esi+0x4BC], ebx
        je public_47c70e
        mov al, byte ptr ss : [esp+0x78]
        push ebx
        push ebx
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x40], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], ebx
        mov ebp, dword ptr ds : [public_5c62b8]
        push 0x9CA4
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x74], 0xC
        call ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 0xD
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x78], 0xE
        call public_42a7e0
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 0xD
        je public_47c1af
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_47c1af : nop
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x70], 0xC
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_47c1d4
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call public_57da40
        add esp, 8
        public_47c1d4 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        je public_47c1ea
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        call public_57da40
        add esp, 8
        public_47c1ea : nop
        cmp byte ptr ds : [esi+0x4E0], bl
        jne public_47c5f0
        cmp dword ptr ds : [esi+0x398], ebx
        je public_47c5f0
        mov edi, dword ptr ss : [esp+0x78]
        push edi
        call dword ptr ds : [public_5c603c]
        add esp, 4
        cmp eax, ebx
        je public_47c5f4
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        add eax, 0xFFFFFFF2
        cmp eax, 0x13
        ja public_47c5f4
/*FIXUP movzx eax, byte ptr ds : [eax+public_47c72c] @0x47c22b*/
/*FIXUP jmp dword ptr ds : [eax*4+public_47c724] @0x47c232*/
  JMPTB cmp eax, 0
  JMPTB jne public_4c0000000000aaa1
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aaa1 : nop
        je public_47c239
  JMPTB cmp eax, 1
  JMPTB jne public_4c0000000000aa9d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa9d : nop
        je public_47c239
  JMPTB cmp eax, 2
  JMPTB jne public_4c0000000000aa99
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa99 : nop
        je public_47c5f4
  JMPTB cmp eax, 3
  JMPTB jne public_4c0000000000aa95
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa95 : nop
        je public_47c239
  JMPTB cmp eax, 4
  JMPTB jne public_4c0000000000aa91
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa91 : nop
        je public_47c239
  JMPTB cmp eax, 5
  JMPTB jne public_4c0000000000aa8d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa8d : nop
        je public_47c239
  JMPTB cmp eax, 6
  JMPTB jne public_4c0000000000aa89
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa89 : nop
        je public_47c5f4
  JMPTB cmp eax, 7
  JMPTB jne public_4c0000000000aa85
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa85 : nop
        je public_47c5f4
  JMPTB cmp eax, 8
  JMPTB jne public_4c0000000000aa81
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa81 : nop
        je public_47c5f4
  JMPTB cmp eax, 9
  JMPTB jne public_4c0000000000aa7d
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa7d : nop
        je public_47c5f4
  JMPTB cmp eax, 0xA
  JMPTB jne public_4c0000000000aa79
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa79 : nop
        je public_47c5f4
  JMPTB cmp eax, 0xB
  JMPTB jne public_4c0000000000aa75
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa75 : nop
        je public_47c5f4
  JMPTB cmp eax, 0xC
  JMPTB jne public_4c0000000000aa71
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa71 : nop
        je public_47c239
  JMPTB cmp eax, 0xD
  JMPTB jne public_4c0000000000aa6d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa6d : nop
        je public_47c239
  JMPTB cmp eax, 0xE
  JMPTB jne public_4c0000000000aa69
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa69 : nop
        je public_47c5f4
  JMPTB cmp eax, 0xF
  JMPTB jne public_4c0000000000aa65
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa65 : nop
        je public_47c5f4
  JMPTB cmp eax, 0x10
  JMPTB jne public_4c0000000000aa61
  JMPTB mov eax, 1
  JMPTB public_4c0000000000aa61 : nop
        je public_47c5f4
  JMPTB cmp eax, 0x11
  JMPTB jne public_4c0000000000aa5d
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa5d : nop
        je public_47c239
  JMPTB cmp eax, 0x12
  JMPTB jne public_4c0000000000aa59
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa59 : nop
        je public_47c239
  JMPTB cmp eax, 0x13
  JMPTB jne public_4c0000000000aa55
  JMPTB mov eax, 0
  JMPTB public_4c0000000000aa55 : nop
        je public_47c239
  JMPTB int 3
        public_47c239 : nop
        mov eax, dword ptr ds : [esi+0x398]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x39C]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x3A0]
        or byte ptr ds : [eax+0x6C], 3
        mov eax, dword ptr ds : [esi+0x4BC]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov edi, dword ptr ds : [esi+0x398]
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, edi
        call public_57b3e0
        mov dl, byte ptr ss : [esp+0x78]
        push 0xC
        mov byte ptr ss : [esp+0x30], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebx
        push 0xF64
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x74], 0xF
        call ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 0x10
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x24], edi
        add edi, 4
        push 0xC
        mov byte ptr ss : [esp+0x74], 0x11
        mov dword ptr ss : [esp+0x24], eax
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp ecx, ebx
        jne public_47c2f3
        mov ecx, eax
        public_47c2f3 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x7C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 0x10
        je public_47c32e
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x7C], ebx
        public_47c32e : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x70], 0xF
        call dword ptr ds : [public_5c62b4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0x6E1
        call public_57da40
        add esp, 8
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
/*FIXUP push offset public_5d0254 @0x47c355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_5d0254 @0x47c364*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
        call public_57e2c0
        add esp, 0x10
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        call ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 0x12
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ss : [esp+0x30]
        lea edi, ds:[eax+4]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi]
        push 0xC
        mov byte ptr ss : [esp+0x74], 0x13
        mov dword ptr ss : [esp+0x24], eax
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        cmp ecx, ebx
        jne public_47c3bc
        mov ecx, eax
        public_47c3bc : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x7C]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x3C]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x70], 0x12
        je public_47c3f7
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x7C], ebx
        public_47c3f7 : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x70], 0xF
        call dword ptr ds : [public_5c62b4]
        mov ecx, dword ptr ss : [esp+0x78]
        push ebx
        push 1
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_484090
        mov edi, dword ptr ds : [esi+0x39C]
        add esp, 0x10
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea eax, ss:[esp+0x2C]
        push eax
        mov ecx, edi
        call public_57b3e0
        mov cl, byte ptr ss : [esp+0x78]
        push 0xC
        mov byte ptr ss : [esp+0x54], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x74], 0x14
        call ebp
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x70], 0x15
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x7C], eax
        mov edi, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x24], edi
        add edi, 4
        push 0xC
        mov byte ptr ss : [esp+0x74], 0x16
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        cmp ebp, ebx
        mov dword ptr ds : [eax], ecx
        jne public_47c4a5
        mov ebp, eax
        public_47c4a5 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x20], edi
        cmp edi, ebx
        mov byte ptr ss : [esp+0x70], 0x17
        je public_47c4ce
        mov ecx, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [edi], eax
        public_47c4ce : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x7C]
        inc ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x58], ecx
        mov byte ptr ss : [esp+0x70], 0x15
        je public_47c4ec
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_47c4ec : nop
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x70], 0x14
        call dword ptr ds : [public_5c62b4]
        push ebx
        lea ecx, ss:[esp+0x54]
        push ecx
/*FIXUP push offset public_5d0254 @0x47c501*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_5d0254 @0x47c510*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0254
        call public_57e2c0
        mov edx, dword ptr ss : [esp+0x88]
        push 1
        push ebx
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        call public_484090
        mov esi, dword ptr ds : [esi+0x3A0]
        add esp, 0x20
        push ebx
        push ebx
        mov ecx, esi
        call public_5798b0
        mov ecx, esi
        call public_57b370
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, esi
        call public_57b3e0
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0x70], 0xF
        mov edi, eax
        mov esi, ecx
        je public_47c582
        public_47c567 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x58]
        call public_46d680
        cmp esi, edi
        jne public_47c567
        mov eax, dword ptr ss : [esp+0x54]
        public_47c582 : nop
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        mov byte ptr ss : [esp+0x70], 0xC
        mov ebp, eax
        je public_47c5da
        public_47c5a4 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push ebx
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x38]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x34], ecx
        jne public_47c5a4
        mov eax, dword ptr ss : [esp+0x30]
        public_47c5da : nop
        push eax
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        jmp public_47c6b7
        public_47c5f0 : nop
        mov edi, dword ptr ss : [esp+0x78]
        public_47c5f4 : nop
        mov eax, dword ptr ds : [esi+0x398]
        cmp eax, ebx
        je public_47c626
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x39C]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x3A0]
        and byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x4BC]
        or byte ptr ds : [eax+0x6C], 3
        jmp public_47c655
        public_47c626 : nop
        cmp byte ptr ds : [esi+0x4E0], bl
        mov ecx, dword ptr ds : [esi+0x944]
        push ebx
        je public_47c646
        mov edx, dword ptr ds : [ecx]
        push 0x387
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        jmp public_47c655
        public_47c646 : nop
        mov eax, dword ptr ds : [ecx]
        push 0x388
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        public_47c655 : nop
        cmp byte ptr ss : [esp+0x7C], bl
        je public_47c67b
        cmp byte ptr ds : [esi+0x35C], bl
        jne public_47c66b
        cmp dword ptr ds : [esi+0x360], ebx
        je public_47c67b
        public_47c66b : nop
        lea ecx, ss:[esp+0x38]
        push edi
        push ecx
        call public_4704d0
        add esp, 8
        jmp public_47c695
        public_47c67b : nop
        cmp byte ptr ds : [esi+0x4E0], bl
        jne public_47c695
        push 1
        push 1
        lea edx, ss:[esp+0x40]
        push edi
        push edx
        call public_484090
        add esp, 0x10
        public_47c695 : nop
        mov esi, dword ptr ds : [esi+0x4BC]
        push ebx
        push ebx
        mov ecx, esi
        call public_5798b0
        mov ecx, esi
        call public_57b370
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, esi
        call public_57b3e0
        public_47c6b7 : nop
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        je public_47c705
        lea esp, ss:[esp]
        public_47c6d0 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x40], ecx
        jne public_47c6d0
        mov ebx, dword ptr ss : [esp+0x3C]
        public_47c705 : nop
        push ebx
        public_47c706 : nop
        call public_5b7e1d
        add esp, 4
        public_47c70e : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x64
        ret 8
        UNREACHABLE_TRAP(0x47ba90)
        ASM_EXPORT_ENTRY_SINGLE(0x47c5f4, public_47c5f4)
    }
}

#undef public_47bac4
#undef public_47bae2
#undef public_47bb22
#undef public_47bb42
#undef public_47bbc9
#undef public_47bc1d
#undef public_47bc37
#undef public_47bc6f
#undef public_47bc8b
#undef public_47bcb4
#undef public_47bce8
#undef public_47bd08
#undef public_47bd64
#undef public_47bde9
#undef public_47bed1
#undef public_47bf8c
#undef public_47c08c
#undef public_47c0dd
#undef public_47c0eb
#undef public_47c0f3
#undef public_47c10d
#undef public_47c1af
#undef public_47c1d4
#undef public_47c1ea
#undef public_47c239
#undef public_47c2f3
#undef public_47c32e
#undef public_47c3bc
#undef public_47c3f7
#undef public_47c4a5
#undef public_47c4ce
#undef public_47c4ec
#undef public_47c567
#undef public_47c582
#undef public_47c5a4
#undef public_47c5da
#undef public_47c5f0
#undef public_47c5f4
#undef public_47c626
#undef public_47c646
#undef public_47c655
#undef public_47c66b
#undef public_47c67b
#undef public_47c695
#undef public_47c6b7
#undef public_47c6d0
#undef public_47c705
#undef public_47c706
#undef public_47c70e

#pragma init_seg(compiler)
extern "C" void const* const public_47c5f4 = __AsmFindLabelExport(&internal_47ba90, 0x47c5f4);
