#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d8a0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5a6900);
CLANG_FORWARD_PROC_SYMBOL(public_5abde0);
CLANG_FORWARD_PROC_SYMBOL(public_5ac010);
CLANG_FORWARD_PROC_SYMBOL(public_5ad6a0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c5746);

#define public_5ace29 _public_5ace29
#define public_5ace30 _public_5ace30
#define public_5ace61 _public_5ace61
#define public_5acea9 _public_5acea9
#define public_5acf2a _public_5acf2a
#define public_5acf37 _public_5acf37
#define public_5ad0ce _public_5ad0ce
#define public_5ad109 _public_5ad109
#define public_5ad125 _public_5ad125
#define public_5ad162 _public_5ad162
#define public_5ad18b _public_5ad18b
#define public_5ad19b _public_5ad19b
#define public_5ad1c0 _public_5ad1c0
#define public_5ad1e4 _public_5ad1e4
#define public_5ad1f4 _public_5ad1f4
#define public_5ad212 _public_5ad212
#define public_5ad214 _public_5ad214
#define public_5ad21f _public_5ad21f
#define public_5ad283 _public_5ad283
#define public_5ad30b _public_5ad30b

PROC_DECLARE(0x5accd0, internal_5accd0, public_5accd0);
extern "C" NAKED register_t __cdecl internal_5accd0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c5746 @0x5accd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c5746
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x93C
        mov al, byte ptr ss : [esp+7]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x958]
        push edi
        mov edi, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0xC4], ecx
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x28], al
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x17]
        push ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x958], ebx
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x3C], ebx
        call public_5a6900
        lea edx, ss:[esp+0x21]
        push edx
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x958], 1
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFE
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x5C], ebx
        mov dword ptr ss : [esp+0x60], ebx
        mov byte ptr ss : [esp+0x64], bl
        mov byte ptr ss : [esp+0x65], bl
        mov byte ptr ss : [esp+0x66], bl
        mov dword ptr ss : [esp+0x68], ebx
        call dword ptr ds : [public_5c6fc0]
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x958], 2
        call dword ptr ds : [public_5c6fc0]
        lea ecx, ss:[esp+0x22]
        push ecx
        lea ecx, ss:[esp+0x8C]
        mov byte ptr ss : [esp+0x958], 3
        call dword ptr ds : [public_5c6f98]
        lea edx, ss:[esp+0x23]
        push edx
        lea ecx, ss:[esp+0x9C]
        mov byte ptr ss : [esp+0x958], 4
        call dword ptr ds : [public_5c6f98]
        mov dword ptr ss : [esp+0xA8], ebx
        mov dword ptr ss : [esp+0xAC], ebx
        mov dword ptr ss : [esp+0xB0], ebx
        mov dword ptr ss : [esp+0xB4], ebx
        mov byte ptr ss : [esp+0xB8], bl
        mov byte ptr ss : [esp+0xB9], 1
        mov byte ptr ss : [esp+0xBA], 1
        mov dword ptr ss : [esp+0xBC], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x4C], 1
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [edi+0x2C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x954], 5
        je public_5ace29
        dec eax
        mov dword ptr ss : [esp+0xA8], eax
        jmp public_5ace30
        public_5ace29 : nop
        mov dword ptr ss : [esp+0xA8], ebx
        public_5ace30 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        dec ecx
        mov dword ptr ss : [esp+0xAC], ecx
        mov dword ptr ss : [esp+0xBC], 2
        call dword ptr ds : [public_5c72ec]
        mov dword ptr ss : [esp+0x54], eax
        cmp dword ptr ds : [esi+0x18], ebx
        mov dword ptr ss : [esp+0xB0], ebx
        jne public_5ace61
        mov byte ptr ss : [esp+0x62], 1
        public_5ace61 : nop
        mov eax, dword ptr ds : [edi+0x30]
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push 1
        push eax
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5acea9
        mov ebp, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x6C]
        push ebp
        push edx
        push eax
        call public_41d8a0
        add esp, 0xC
        push ebp
        lea ecx, ss:[esp+0x6C]
        call dword ptr ds : [public_5c7054]
        public_5acea9 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0xC8]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x154]
        push edx
/*FIXUP push offset public_5e6604 @0x5acec1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e6604
        mov dword ptr ss : [esp+0x2C], 0x800
        mov dword ptr ss : [esp+0xD8], 1
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x40]
        lea eax, ss:[esp+0x14C]
        push eax
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push 1
        push eax
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5acf2a
        mov ebp, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x28]
        push ebp
        lea ecx, ss:[esp+0x150]
        push ecx
        push edx
        call public_41d8a0
        add esp, 0xC
        push ebp
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_5c7054]
        public_5acf2a : nop
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, ebx
        jne public_5acf37
        mov eax, dword ptr ds : [public_5c700c]
        public_5acf37 : nop
        push eax
        lea eax, ss:[esp+0xD0]
/*FIXUP push offset public_5e65f4 @0x5acf3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e65f4
        push eax
        call dword ptr ds : [public_5c71ec]
        add esp, 0xC
        lea ecx, ss:[esp+0xCC]
        push ecx
        call dword ptr ds : [public_5c72f4]
        push eax
        call dword ptr ds : [public_5c72f8]
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [esi+4]
/*FIXUP push offset public_5e65f8 @0x5acf7f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e65f8
        mov dword ptr ss : [esp+0xD0], ebx
        mov dword ptr ss : [esp+0x2C], 4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x40]
        mov edx, dword ptr ss : [esp+0xC0]
        mov ebp, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x38], edx
        mov eax, dword ptr ds : [edi+4]
        shr eax, 7
        and al, 1
        cmp ebp, ebx
        mov byte ptr ss : [esp+0xB8], al
        je public_5ad109
        mov edi, dword ptr ds : [public_5c7168]
        push 0x3A
        push ebp
        call edi
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_5ad212
        push ebp
        mov ebp, dword ptr ds : [public_5c70c4]
        mov byte ptr ds : [esi], bl
        call ebp
        test eax, eax
        lea eax, ds:[esi+1]
        setne cl
        push 0x3A
        push eax
        mov byte ptr ss : [esp+0xC6], cl
        mov dword ptr ss : [esp+0x1C], eax
        call edi
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_5ad212
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov byte ptr ds : [esi], bl
        call ebp
        test eax, eax
        setne al
        mov byte ptr ss : [esp+0xBD], al
        lea eax, ds:[esi+1]
        push 0x3A
        push eax
        mov dword ptr ss : [esp+0x1C], eax
        call edi
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_5ad212
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        mov byte ptr ds : [esi], bl
        call ebp
        inc esi
        push 0x3A
        push esi
        mov dword ptr ss : [esp+0xBC], eax
        mov dword ptr ss : [esp+0x1C], esi
        call edi
        mov esi, eax
        add esp, 0xC
        cmp esi, ebx
        je public_5ad212
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        mov byte ptr ds : [esi], bl
        call ebp
        inc esi
        push 0x3A
        push esi
        mov dword ptr ss : [esp+0xC0], eax
        call edi
        add esp, 0xC
        mov ebp, eax
        cmp ebp, ebx
        push 1
        je public_5ad214
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov byte ptr ss : [ebp], bl
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov dword ptr ss : [esp+0x14], ecx
        push ecx
        lea ecx, ss:[esp+0x90]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_5ad0ce
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x8C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, eax
        push ecx
        lea ecx, ss:[esp+0x8C]
        call dword ptr ds : [public_5c706c]
        public_5ad0ce : nop
        inc ebp
        push ebp
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov esi, eax
        push 1
        push esi
        lea ecx, ss:[esp+0x80]
        call dword ptr ds : [public_5c6f88]
        test al, al
        je public_5ad109
        mov edx, dword ptr ss : [esp+0x7C]
        push esi
        push ebp
        push edx
        call public_41d8a0
        add esp, 0xC
        push esi
        lea ecx, ss:[esp+0x7C]
        call dword ptr ds : [public_5c7054]
        public_5ad109 : nop
        mov ecx, dword ptr ss : [esp+0xB4]
        or eax, 0xFFFFFFFF
        cmp ecx, eax
        jne public_5ad125
        mov dword ptr ss : [esp+0x954], eax
        push 1
        jmp public_5ad21f
        public_5ad125 : nop
        mov eax, dword ptr ss : [esp+0xC4]
        lea ecx, ss:[esp+0x24]
        lea edi, ds:[eax-4]
        push ecx
        mov ecx, edi
        call public_5ac010
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_5abde0
        mov eax, dword ptr ss : [esp+0xB4]
        mov esi, dword ptr ds : [edi+0x144]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+0x148]
        cmp esi, eax
        je public_5ad19b
        public_5ad162 : nop
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ds:[esi+0x64]
        push edx
        call dword ptr ds : [public_5c704c]
        add esp, 8
        test al, al
        je public_5ad18b
        mov eax, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [esi+0x90], eax
        je public_5ad283
        public_5ad18b : nop
        mov eax, dword ptr ds : [edi+0x148]
        add esi, 0x9C
        cmp esi, eax
        jne public_5ad162
        public_5ad19b : nop
        cmp dword ptr ss : [esp+0x4C], ebx
        je public_5ad212
        cmp dword ptr ss : [esp+0xBC], ebx
        je public_5ad212
        mov esi, dword ptr ds : [edi+0x144]
        cmp esi, dword ptr ds : [edi+0x148]
        je public_5ad1f4
        mov ebx, dword ptr ds : [public_5c704c]
        mov edi, edi
        public_5ad1c0 : nop
        mov ecx, dword ptr ss : [esp+0xB4]
        cmp dword ptr ds : [esi+0x90], ecx
        jne public_5ad1e4
        lea edx, ss:[esp+0x88]
        push edx
        lea eax, ds:[esi+0x64]
        push eax
        call ebx
        add esp, 8
        test al, al
        jne public_5ad212
        public_5ad1e4 : nop
        mov eax, dword ptr ds : [edi+0x148]
        add esi, 0x9C
        cmp esi, eax
        jne public_5ad1c0
        public_5ad1f4 : nop
        mov eax, dword ptr ds : [edi+0x148]
        lea ecx, ds:[edi+0x140]
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call public_5ad6a0
        mov byte ptr ds : [edi+0x238], 1
        public_5ad212 : nop
        push 1
        public_5ad214 : nop
        mov dword ptr ss : [esp+0x958], 0xFFFFFFFF
        public_5ad21f : nop
        lea ecx, ss:[esp+0x9C]
        call dword ptr ds : [public_5c7084]
        lea ecx, ss:[esp+0x88]
        push 1
        call dword ptr ds : [public_5c7084]
        lea ecx, ss:[esp+0x78]
        push 1
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x68]
        push 1
        call dword ptr ds : [public_5c6fb8]
        lea ecx, ss:[esp+0x3C]
        call public_4de730
        lea ecx, ss:[esp+0x24]
        push 1
        call dword ptr ds : [public_5c6fb8]
        mov ecx, dword ptr ss : [esp+0x94C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x948
        ret 4
        public_5ad283 : nop
        mov cl, byte ptr ss : [esp+0xBA]
        mov byte ptr ds : [esi+0x96], cl
        mov dl, byte ptr ss : [esp+0xB9]
        mov byte ptr ds : [esi+0x95], dl
        mov al, byte ptr ss : [esp+0xB8]
        mov byte ptr ds : [esi+0x94], al
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ds:[esi+0x54]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ds : [public_5c705c]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea eax, ss:[esp+0x70]
        push eax
        lea ecx, ds:[esi+0x44]
        call dword ptr ds : [public_5c7060]
        mov ecx, dword ptr ss : [esp+0xA8]
        mov edi, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [esi+0x2C]
        mov dword ptr ds : [esi+0x84], ecx
        mov edx, dword ptr ss : [esp+0xAC]
        inc edi
        mov dword ptr ds : [esi+0x88], edx
        mov dword ptr ds : [esi+0x38], edi
        mov ecx, dword ptr ss : [esp+0x50]
        cmp ecx, eax
        jae public_5ad30b
        mov eax, ecx
        public_5ad30b : nop
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x40], ebx
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+0x30], eax
        mov ecx, dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ss : [esp+0xC4]
        mov dword ptr ds : [esi+0x8C], ecx
        mov dl, byte ptr ss : [esp+0x62]
        mov byte ptr ds : [esi+0x3E], dl
        mov byte ptr ds : [eax+0x234], 1
        mov byte ptr ds : [esi+0x3D], bl
        jmp public_5ad212
        UNREACHABLE_TRAP(0x5accd0)
    }
}

#undef public_5ace29
#undef public_5ace30
#undef public_5ace61
#undef public_5acea9
#undef public_5acf2a
#undef public_5acf37
#undef public_5ad0ce
#undef public_5ad109
#undef public_5ad125
#undef public_5ad162
#undef public_5ad18b
#undef public_5ad19b
#undef public_5ad1c0
#undef public_5ad1e4
#undef public_5ad1f4
#undef public_5ad212
#undef public_5ad214
#undef public_5ad21f
#undef public_5ad283
#undef public_5ad30b
