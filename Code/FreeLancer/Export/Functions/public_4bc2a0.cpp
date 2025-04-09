#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_45dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_4ba5a0);
CLANG_FORWARD_PROC_SYMBOL(public_4ba860);
CLANG_FORWARD_PROC_SYMBOL(public_4bc2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_4c4ff0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd446);

#define public_4bc34c _public_4bc34c
#define public_4bc381 _public_4bc381
#define public_4bc3a0 _public_4bc3a0
#define public_4bc402 _public_4bc402
#define public_4bc488 _public_4bc488
#define public_4bc491 _public_4bc491
#define public_4bc50f _public_4bc50f
#define public_4bc526 _public_4bc526
#define public_4bc591 _public_4bc591
#define public_4bc5a5 _public_4bc5a5
#define public_4bc5bb _public_4bc5bb
#define public_4bc5f9 _public_4bc5f9
#define public_4bc653 _public_4bc653
#define public_4bc695 _public_4bc695
#define public_4bc6a7 _public_4bc6a7
#define public_4bc705 _public_4bc705
#define public_4bc71e _public_4bc71e
#define public_4bc736 _public_4bc736
#define public_4bc773 _public_4bc773
#define public_4bc793 _public_4bc793
#define public_4bc79b _public_4bc79b
#define public_4bc7b6 _public_4bc7b6
#define public_4bc7d4 _public_4bc7d4
#define public_4bc80b _public_4bc80b

PROC_DECLARE(0x4bc2a0, internal_4bc2a0, public_4bc2a0);
extern "C" NAKED register_t __cdecl internal_4bc2a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bd446 @0x4bc2a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd446
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x68
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x334]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x2C], edi
        call public_57b370
        mov al, byte ptr ss : [esp+0xF]
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x58], al
        call public_42a7e0
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x34]
        mov dword ptr ss : [esp+0x80], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x7C], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ss : [esp+0x54]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x88], 2
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x7C], 1
        je public_4bc34c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ebx
        public_4bc34c : nop
        lea ecx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x7C], 0
        call dword ptr ds : [public_5c62b4]
        mov eax, dword ptr ds : [public_672338]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x338], eax
        jne public_4bc381
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0x40F
        call public_57da40
        add esp, 8
        jmp public_4bc7b6
        public_4bc381 : nop
        mov eax, dword ptr ds : [public_672334]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov byte ptr ss : [esp+0xE], 0
        mov byte ptr ss : [esp+0xF], 0
        mov dword ptr ss : [esp+0x20], ecx
        je public_4bc7b6
        push ebp
        nop 
        public_4bc3a0 : nop
        mov eax, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ss : [esp+0x24]
        push 1
        push eax
        lea ebp, ds:[edx+8]
/*FIXUP push offset public_66fc60 @0x4bc3af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ebp
        call public_4ba860
        mov al, byte ptr ds : [esi+0x37C]
        add esp, 0x10
        test al, al
        mov dword ptr ss : [esp+0x20], offset public_66fc60
        je public_4bc5a5
        cmp word ptr ds : [public_66fc60], 0x2A
        je public_4bc79b
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_4bc491
        call public_4c4fb0
        mov esi, eax
        xor ebx, ebx
        test esi, esi
        mov dword ptr ss : [esp+0x2C], esi
        jle public_4bc491
        public_4bc402 : nop
        push ebx
        call public_4c4ff0
        add esp, 4
        test eax, eax
        je public_4bc488
        push eax
        lea ecx, ss:[esp+0x64]
        call dword ptr ds : [public_5c6420]
        lea ecx, ss:[esp+0x60]
        push ecx
        mov byte ptr ss : [esp+0x84], 3
        call public_4ba5a0
        mov eax, dword ptr ds : [public_6119f8]
        cdq 
        sub eax, edx
        mov esi, eax
        push 0
        sar esi, 1
        push esi
        lea edx, ss:[esp+0x6C]
/*FIXUP push offset public_66dc60 @0x4bc43f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edx
        call public_4ba860
        push 0
        push esi
        lea edi, ds : [esi*2+public_66dc60]
        push edi
        push ebp
        call public_4ba860
/*FIXUP push offset public_66dc60 @0x4bc45b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push edi
        call dword ptr ds : [public_5c71d4]
        add esp, 0x2C
        test eax, eax
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x80], 0
        je public_4bc526
        call dword ptr ds : [public_5c6098]
        mov esi, dword ptr ss : [esp+0x2C]
        public_4bc488 : nop
        inc ebx
        cmp ebx, esi
        jl public_4bc402
        public_4bc491 : nop
        push 0x9CA4
        lea ecx, ss:[esp+0x48]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x80], 6
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x88], 7
        call public_42a7e0
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        mov byte ptr ss : [esp+0x80], 6
        je public_4bc50f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], 0
        public_4bc50f : nop
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x80], 0
        call dword ptr ds : [public_5c62b4]
        jmp public_4bc5bb
        public_4bc526 : nop
        mov byte ptr ss : [esp+0x13], 1
        call dword ptr ds : [public_5c6098]
        push 0x3D0A
        lea ecx, ss:[esp+0x40]
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x80], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ss : [esp+0x58]
        lea eax, ss:[esp+0x14]
        push eax
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x8C], 5
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x14]
        test ecx, ecx
        mov byte ptr ss : [esp+0x80], 4
        je public_4bc591
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], 0
        public_4bc591 : nop
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x80], 0
        call dword ptr ds : [public_5c62b4]
        jmp public_4bc5bb
        public_4bc5a5 : nop
        cmp word ptr ds : [public_66fc60], 0x2A
        jne public_4bc79b
        mov dword ptr ss : [esp+0x20], offset public_66fc62
        public_4bc5bb : nop
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        je public_4bc5f9
/*FIXUP push offset public_5d0a08 @0x4bc5c3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d0a08
/*FIXUP push offset public_66dc60 @0x4bc5c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        push 0
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_66dc60 @0x4bc5dd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66dc60 @0x4bc5ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call public_57e2c0
        add esp, 0x10
        public_4bc5f9 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor bl, bl
        cmp eax, 0x723
        jne public_4bc6a7
        push 0x3D0A
        lea ecx, ss:[esp+0x50]
        mov bl, 1
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x80], 8
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov edi, dword ptr ds : [eax+4]
        lea esi, ds:[eax+4]
        push 0xC
        mov byte ptr ss : [esp+0x84], 9
        mov ebp, eax
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], ebp
        jne public_4bc653
        mov edi, eax
        public_4bc653 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        mov byte ptr ss : [esp+0x80], 8
        je public_4bc695
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], 0
        public_4bc695 : nop
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x80], 0
        call dword ptr ds : [public_5c62b4]
        public_4bc6a7 : nop
        push 0x3A
/*FIXUP push offset public_66fc60 @0x4bc6a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c7118]
        add esp, 8
        test eax, eax
        jne public_4bc773
        test bl, bl
        jne public_4bc773
        mov esi, dword ptr ss : [esp+0x28]
        mov al, byte ptr ds : [esi+0x37C]
        test al, al
        je public_4bc71e
        mov ecx, dword ptr ds : [public_66d3f0]
        call public_45dcd0
        test al, al
        je public_4bc705
        mov al, byte ptr ss : [esp+0x12]
        test al, al
        jne public_4bc705
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66dc60 @0x4bc6f8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x3DB
        push ecx
        jmp public_4bc736
        public_4bc705 : nop
        mov edx, dword ptr ds : [public_6119f8]
        mov eax, dword ptr ds : [public_67eca8]
        push edx
/*FIXUP push offset public_66dc60 @0x4bc711*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x626
        push eax
        jmp public_4bc736
        public_4bc71e : nop
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [public_67eca8]
        push ecx
/*FIXUP push offset public_66dc60 @0x4bc72b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        push 0x63C
        push edx
        public_4bc736 : nop
        call public_4347e0
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x10
        push eax
/*FIXUP push offset public_66dc60 @0x4bc743*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c70ac]
        add esp, 8
        push 0
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_66dc60 @0x4bc758*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66dc60 @0x4bc767*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66dc60
        call public_57e2c0
        jmp public_4bc793
        public_4bc773 : nop
        mov esi, dword ptr ss : [esp+0x20]
        push 0
        lea edx, ss:[esp+0x58]
        push edx
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        push esi
        call public_57e2c0
        mov esi, dword ptr ss : [esp+0x38]
        public_4bc793 : nop
        add esp, 0x10
        mov byte ptr ss : [esp+0x12], 1
        public_4bc79b : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [public_672334]
        mov dword ptr ss : [esp+0x24], eax
        jne public_4bc3a0
        mov edi, dword ptr ss : [esp+0x30]
        pop ebp
        public_4bc7b6 : nop
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, edi
        call public_57b3e0
        mov ebx, dword ptr ss : [esp+0x54]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x7C], 0xFFFFFFFF
        je public_4bc80b
        public_4bc7d4 : nop
        mov esi, edi
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x5C]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x58], ecx
        jne public_4bc7d4
        mov ebx, dword ptr ss : [esp+0x54]
        public_4bc80b : nop
        push ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x78]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x74
        ret 
        UNREACHABLE_TRAP(0x4bc2a0)
    }
}

#undef public_4bc34c
#undef public_4bc381
#undef public_4bc3a0
#undef public_4bc402
#undef public_4bc488
#undef public_4bc491
#undef public_4bc50f
#undef public_4bc526
#undef public_4bc591
#undef public_4bc5a5
#undef public_4bc5bb
#undef public_4bc5f9
#undef public_4bc653
#undef public_4bc695
#undef public_4bc6a7
#undef public_4bc705
#undef public_4bc71e
#undef public_4bc736
#undef public_4bc773
#undef public_4bc793
#undef public_4bc79b
#undef public_4bc7b6
#undef public_4bc7d4
#undef public_4bc80b
