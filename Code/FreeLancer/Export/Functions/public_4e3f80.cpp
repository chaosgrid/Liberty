#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4d4c70);
CLANG_FORWARD_PROC_SYMBOL(public_4d4d50);
CLANG_FORWARD_PROC_SYMBOL(public_4e49c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e8100);
CLANG_FORWARD_PROC_SYMBOL(public_5472a0);
CLANG_FORWARD_PROC_SYMBOL(public_5472d0);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_58a740);
CLANG_FORWARD_JUMP_SYMBOL(public_5be826);

#define public_4e408d _public_4e408d
#define public_4e408f _public_4e408f
#define public_4e40d7 _public_4e40d7
#define public_4e4139 _public_4e4139
#define public_4e4160 _public_4e4160
#define public_4e4202 _public_4e4202
#define public_4e420f _public_4e420f
#define public_4e4275 _public_4e4275
#define public_4e4340 _public_4e4340
#define public_4e436c _public_4e436c
#define public_4e4385 _public_4e4385
#define public_4e43cf _public_4e43cf
#define public_4e43ea _public_4e43ea
#define public_4e442e _public_4e442e
#define public_4e446b _public_4e446b
#define public_4e44a0 _public_4e44a0
#define public_4e44ad _public_4e44ad
#define public_4e44b2 _public_4e44b2
#define public_4e44e6 _public_4e44e6
#define public_4e44fb _public_4e44fb
#define public_4e4514 _public_4e4514
#define public_4e4577 _public_4e4577
#define public_4e4589 _public_4e4589

PROC_DECLARE(0x4e3f80, internal_4e3f80, public_4e3f80);
extern "C" NAKED register_t __cdecl internal_4e3f80()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5be826 @0x4e3f88*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be826
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x818
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x500]
        test ecx, ecx
        push edi
        je public_4e4589
        mov eax, dword ptr ds : [esi+0x504]
        test eax, eax
        je public_4e4589
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x500]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e4589
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4589
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e4589
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4589
        add eax, 0xC
        test eax, eax
        je public_4e4589
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        mov dword ptr ss : [esp+0x1C], edi
        je public_4e4589
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 3
        cmp al, 3
        jne public_4e4589
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        je public_4e408d
        lea ecx, ds:[esi+0x364]
        call public_55e280
        test al, al
        jne public_4e408d
        lea ecx, ds:[esi+0x4E0]
        call public_55e280
        test al, al
        jne public_4e408d
        mov bl, 1
        jmp public_4e408f
        public_4e408d : nop
        xor bl, bl
        public_4e408f : nop
        push edi
        mov byte ptr ss : [esp+0x16], bl
        call public_4d4c70
        add esp, 4
        test al, al
        je public_4e4139
        xor ebp, ebp
        push edi
        mov word ptr ss : [esp+0x12C], bp
        call public_4d4d50
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_4e40d7
        mov word ptr ss : [esp+0x28], bp
        public_4e40d7 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x12C]
        push ecx
        call dword ptr ds : [public_5c70b4]
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        push ebp
        lea eax, ss:[esp+0x12C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push ebp
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov esi, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [esi]
        push ebp
        push 1
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        jmp public_4e4589
        public_4e4139 : nop
        mov ecx, dword ptr ds : [edi+0x4C]
        and ecx, 0x503
        xor al, al
        cmp ecx, 0x503
        jne public_4e4202
        mov cl, byte ptr ds : [edi+0x2BD]
        test cl, cl
        mov dword ptr ss : [esp+0x24], edi
        je public_4e4160
        mov al, 1
        public_4e4160 : nop
        test al, al
        mov edi, dword ptr ds : [esi+0x500]
        mov ebp, dword ptr ds : [esi+0x504]
        mov ecx, edi
        je public_4e420f
        mov edx, dword ptr ds : [esi+0x668]
        push edx
        call public_58a740
        lea eax, ds:[edi+0xA8]
        lea ecx, ds:[edi+0x2D4]
        mov ebx, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], ebx
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ds : [edi+0xAC]
        fsub qword ptr ds : [public_5d7bf0]
        mov edx, dword ptr ds : [edi]
        xor ebx, ebx
        push ebx
        push eax
        fstp dword ptr ds : [edi+0xAC]
        push 6
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x668]
        push eax
        mov ecx, ebp
        call public_58a740
        lea ecx, ss:[ebp+0x2D4]
        mov edi, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0xA8]
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        fld dword ptr ss : [ebp+0xAC]
        fsub qword ptr ds : [public_5d7bf0]
        fstp dword ptr ss : [ebp+0xAC]
        jmp public_4e4275
        public_4e4202 : nop
        mov dword ptr ss : [esp+0x24], 0
        jmp public_4e4160
        public_4e420f : nop
        mov eax, dword ptr ds : [esi+0x664]
        push eax
        call public_58a740
        lea eax, ds:[edi+0xA8]
        lea ecx, ds:[edi+0x2D4]
        mov ebx, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], ebx
        xor ebx, ebx
        push ebx
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ds : [edi]
        push eax
        push 6
        mov ecx, edi
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x664]
        push eax
        mov ecx, ebp
        call public_58a740
        lea ecx, ss:[ebp+0x2D4]
        mov edi, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0xA8]
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        public_4e4275 : nop
        mov edx, dword ptr ss : [ebp]
        push ebx
        push eax
        mov ecx, ebp
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        push 1
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        mov dword ptr ss : [esp+0x840], ebx
        call public_4e8100
        add esp, 0x10
        test al, al
        je public_4e4385
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov al, byte ptr ss : [esp+0x12]
        mov ecx, dword ptr ds : [esi+0x500]
        xor edx, edx
        cmp al, bl
        mov eax, dword ptr ds : [ecx]
        sete dl
        push ebx
        mov edi, edx
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov cx, word ptr ds : [esi+0x534]
        mov edx, dword ptr ds : [public_5c6368]
        cmp cx, word ptr ds : [edx]
        je public_4e4340
        lea eax, ss:[esp+0x128]
        push eax
        mov ecx, esi
        call public_4e49c0
        cmp word ptr ss : [esp+0x128], bx
        je public_4e4340
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x12C]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        jmp public_4e4577
        public_4e4340 : nop
        push 1
        push 1
        lea eax, ss:[esp+0x1C]
        push eax
        push ebp
        call public_4e8100
        add esp, 0x10
        test al, al
        je public_4e436c
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        public_4e436c : nop
        mov esi, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [esi]
        push ebx
        push edi
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0xA8]
        jmp public_4e4577
        public_4e4385 : nop
        push ebp
        mov word ptr ss : [esp+0x42C], bx
        mov word ptr ss : [esp+0x62C], bx
        mov byte ptr ss : [esp+0x17], bl
        call public_4d4c70
        add esp, 4
        test al, al
        je public_4e43ea
        push ebp
        call public_4d4d50
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_4e43cf
        mov word ptr ss : [esp+0x28], bx
        public_4e43cf : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x42C]
        push ecx
        call dword ptr ds : [public_5c70b4]
        add esp, 8
        jmp public_4e4514
        public_4e43ea : nop
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        lea edx, ss:[esp+0x1C]
        push edx
        push ebp
        mov byte ptr ss : [esp+0x838], 1
        call public_5472d0
        mov eax, dword ptr ss : [esp+0x24]
        mov edi, dword ptr ds : [public_5c70b4]
        add esp, 8
        cmp eax, ebx
        je public_4e442e
        cmp word ptr ds : [eax], bx
        je public_4e442e
        push eax
        lea eax, ss:[esp+0x42C]
        push eax
        call edi
        add esp, 8
        mov byte ptr ss : [esp+0x13], 1
        public_4e442e : nop
        mov cx, word ptr ds : [esi+0x534]
        mov edx, dword ptr ds : [public_5c6368]
        cmp cx, word ptr ds : [edx]
        je public_4e446b
        lea eax, ss:[esp+0x128]
        push eax
        mov ecx, esi
        call public_4e49c0
        cmp word ptr ss : [esp+0x128], bx
        je public_4e44b2
        lea ecx, ss:[esp+0x128]
        push ecx
        lea edx, ss:[esp+0x62C]
        push edx
        jmp public_4e44ad
        public_4e446b : nop
        mov ecx, dword ptr ss : [esp+0x24]
        cmp ecx, ebx
        je public_4e44b2
        call dword ptr ds : [public_5c6354]
        cmp eax, ebx
        je public_4e44b2
        mov edx, dword ptr ds : [public_67eca8]
        push 0x80
        lea ecx, ss:[esp+0x2C]
        push ecx
        push eax
        push edx
        call public_4347e0
        add esp, 0x10
        test eax, eax
        jne public_4e44a0
        mov word ptr ss : [esp+0x28], bx
        public_4e44a0 : nop
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0x62C]
        push ecx
        public_4e44ad : nop
        call edi
        add esp, 8
        public_4e44b2 : nop
        cmp byte ptr ss : [esp+0x13], bl
        jne public_4e44fb
        push ebp
        call public_5472a0
        push 0x80
        lea edx, ss:[esp+0x330]
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push eax
        call public_4347e0
        add esp, 0x14
        test eax, eax
        jne public_4e44e6
        mov word ptr ss : [esp+0x328], bx
        public_4e44e6 : nop
        lea ecx, ss:[esp+0x328]
        push ecx
        lea edx, ss:[esp+0x42C]
        push edx
        call edi
        add esp, 8
        public_4e44fb : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x830], bl
        je public_4e4514
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_4e4514 : nop
        mov ecx, dword ptr ds : [esi+0x500]
        mov eax, dword ptr ds : [ecx]
        push ebx
        lea edx, ss:[esp+0x42C]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov dl, byte ptr ss : [esp+0x12]
        mov ecx, dword ptr ds : [esi+0x500]
        xor eax, eax
        cmp dl, bl
        mov edx, dword ptr ds : [ecx]
        sete al
        push ebx
        mov edi, eax
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov eax, dword ptr ds : [ecx]
        push ebx
        lea edx, ss:[esp+0x62C]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        public_4e4577 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ebx
        je public_4e4589
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_4e4589 : nop
        mov ecx, dword ptr ss : [esp+0x828]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x824
        ret 
        UNREACHABLE_TRAP(0x4e3f80)
    }
}

#undef public_4e408d
#undef public_4e408f
#undef public_4e40d7
#undef public_4e4139
#undef public_4e4160
#undef public_4e4202
#undef public_4e420f
#undef public_4e4275
#undef public_4e4340
#undef public_4e436c
#undef public_4e4385
#undef public_4e43cf
#undef public_4e43ea
#undef public_4e442e
#undef public_4e446b
#undef public_4e44a0
#undef public_4e44ad
#undef public_4e44b2
#undef public_4e44e6
#undef public_4e44fb
#undef public_4e4514
#undef public_4e4577
#undef public_4e4589
