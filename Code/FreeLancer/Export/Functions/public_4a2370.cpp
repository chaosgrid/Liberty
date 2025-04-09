#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2370);
CLANG_FORWARD_PROC_SYMBOL(public_4a2760);
CLANG_FORWARD_PROC_SYMBOL(public_4a2fd0);
CLANG_FORWARD_PROC_SYMBOL(public_4a3240);
CLANG_FORWARD_PROC_SYMBOL(public_4a3360);
CLANG_FORWARD_PROC_SYMBOL(public_4a3680);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcb36);

#define public_4a2410 _public_4a2410
#define public_4a24c4 _public_4a24c4
#define public_4a2520 _public_4a2520
#define public_4a2707 _public_4a2707
#define public_4a2709 _public_4a2709
#define public_4a2722 _public_4a2722
#define public_4a2733 _public_4a2733
#define public_4a273e _public_4a273e

PROC_DECLARE(0x4a2370, internal_4a2370, public_4a2370);
extern "C" NAKED register_t __cdecl internal_4a2370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcb36 @0x4a2372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcb36
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x164
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x1004]
        test al, al
        mov dword ptr ss : [esp+0x20], ebx
        jne public_4a273e
        push esi
        lea ecx, ds:[ebx+0xFD4]
        mov byte ptr ds : [ebx+0x1004], 1
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        push edi
        push eax
        push edx
        call public_4a2fd0
        mov eax, dword ptr ds : [ebx+0xFEC]
        mov edx, dword ptr ds : [ebx+0xFE8]
        lea ecx, ds:[ebx+0xFE4]
        push eax
        push edx
        call public_4a3240
        mov eax, dword ptr ds : [ebx+0xFFC]
        mov edx, dword ptr ds : [ebx+0xFF8]
        lea ecx, ds:[ebx+0xFF4]
        push eax
        push edx
        call public_4a3240
        xor esi, esi
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [public_5c63ec]
        mov edi, eax
        cmp edi, esi
        je public_4a2733
        push ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        lea ecx, ds:[ecx]
        public_4a2410 : nop
        mov edx, dword ptr ds : [edi]
        push esi
        push esi
        lea eax, ss:[esp+0x1B]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [edx]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [edi]
        add esp, 0x10
        mov ecx, edi
        call dword ptr ds : [eax+0x48]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 1
        mov byte ptr ss : [esp+0x13], cl
        je public_4a2722
        mov ecx, dword ptr ds : [public_6119f8]
        mov edx, dword ptr ds : [edi]
        push ecx
/*FIXUP push offset public_66fc60 @0x4a244e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, edi
        call dword ptr ds : [edx+0xC]
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x10
        push 0xFFFFFFFF
/*FIXUP push offset public_66fc60 @0x4a2469*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2C], esi
        mov dword ptr ss : [esp+0x30], esi
        call public_413df0
        mov eax, dword ptr ds : [ebx+0xFFC]
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[ebx+0xFF4]
        push 1
        push eax
        mov dword ptr ss : [esp+0x188], esi
        call public_4a3360
        mov eax, dword ptr ss : [esp+0x24]
        cmp eax, esi
        mov dword ptr ss : [esp+0x17C], 0xFFFFFFFF
        je public_4a24c4
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x28], esi
        public_4a24c4 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi]
        inc ebp
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x5C], esi
        mov byte ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0xB8], esi
        mov byte ptr ss : [esp+0xBC], 0
        mov dword ptr ss : [esp+0xE8], esi
        mov byte ptr ss : [esp+0xEC], 0
        mov dword ptr ss : [esp+0x12C], esi
        mov byte ptr ss : [esp+0x130], 0
        call dword ptr ds : [eax+0x3C]
        xor ecx, ecx
        cmp eax, esi
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x30], ecx
        jbe public_4a2722
        lea esp, ss:[esp]
        public_4a2520 : nop
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x5C]
        push eax
        push ecx
        mov ecx, edi
        call dword ptr ds : [edx+0x40]
        test al, al
        je public_4a2709
        cmp dword ptr ss : [esp+0xE4], esi
        je public_4a2709
        lea ecx, ss:[esp+0x60]
        push ecx
        mov byte ptr ss : [esp+0x16], 0
        call dword ptr ds : [public_5c6020]
        push esi
        push esi
        lea edx, ss:[esp+0x1E]
        push edx
        push eax
        call public_4c4da0
        mov al, byte ptr ss : [esp+0x26]
        or al, byte ptr ss : [esp+0x184]
        add esp, 0x14
        test al, 1
        mov byte ptr ss : [esp+0x12], al
        je public_4a2709
        mov eax, dword ptr ss : [esp+0xB0]
        cmp eax, 0x3FC27
        je public_4a2709
        cmp eax, 0x3FC2E
        je public_4a2709
        cmp eax, 0x3FC28
        je public_4a2709
        cmp eax, 0xEB41
        je public_4a2709
        cmp eax, esi
        je public_4a2709
        cmp eax, 0xEB3F
        je public_4a2709
        cmp eax, 0x300EA
        je public_4a2709
        cmp eax, 0x30052
        je public_4a2709
        cmp eax, 0x3009C
        je public_4a2709
        cmp eax, 0x3009D
        je public_4a2709
        cmp eax, 0x300BF
        je public_4a2709
        mov eax, dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ds : [edi]
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0xA0]
        mov ebx, dword ptr ss : [esp+0xA4]
        mov ecx, edi
        mov dword ptr ss : [esp+0x58], eax
        call dword ptr ds : [edx]
        mov ecx, esi
        inc ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x40], ebx
        mov ebx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x4C], ecx
        push edx
        lea ecx, ds:[ebx+0xFD4]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [ecx+8]
        push 1
        push eax
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ss : [esp+0x54], esi
        call public_4a3680
        mov eax, dword ptr ds : [public_6119f8]
        mov ecx, dword ptr ss : [esp+0xB0]
        mov edx, dword ptr ds : [public_67eca8]
        push eax
/*FIXUP push offset public_66fc60 @0x4a266d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ecx
        push edx
        call public_4347e0
        xor ebp, ebp
/*FIXUP push offset public_66fc60 @0x4a267b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        call dword ptr ds : [public_5c71c8]
        mov esi, eax
        add esp, 0x14
        lea eax, ds:[esi+1]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_4142a0
        mov ecx, dword ptr ss : [esp+0x14]
        push esi
/*FIXUP push offset public_66fc60 @0x4a26a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov word ptr ds : [edx+esi*2], bp
        mov eax, dword ptr ds : [ebx+0xFEC]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+0xFE4]
        push 1
        push eax
        mov dword ptr ss : [esp+0x188], 1
        call public_4a3360
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x17C], 0xFFFFFFFF
        je public_4a2707
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        public_4a2707 : nop
        xor esi, esi
        public_4a2709 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x34]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x30], ecx
        jb public_4a2520
        mov ebx, dword ptr ss : [esp+0x2C]
        public_4a2722 : nop
        call dword ptr ds : [public_5c63e8]
        mov edi, eax
        cmp edi, esi
        jne public_4a2410
        pop ebp
        public_4a2733 : nop
        push 1
        mov ecx, ebx
        call public_4a2760
        pop edi
        pop esi
        public_4a273e : nop
        mov ecx, dword ptr ss : [esp+0x168]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x170
        ret 
        UNREACHABLE_TRAP(0x4a2370)
    }
}

#undef public_4a2410
#undef public_4a24c4
#undef public_4a2520
#undef public_4a2707
#undef public_4a2709
#undef public_4a2722
#undef public_4a2733
#undef public_4a273e
