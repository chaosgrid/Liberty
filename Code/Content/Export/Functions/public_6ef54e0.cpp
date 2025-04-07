#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ee93f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee9b70);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef54e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef5a20);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8790);
CLANG_FORWARD_PROC_SYMBOL(public_6efec10);
CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f35890);
CLANG_FORWARD_PROC_SYMBOL(public_6f471a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f47840);
CLANG_FORWARD_PROC_SYMBOL(public_6f47870);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f73810);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac3d0);

#define public_6ef5520 _public_6ef5520
#define public_6ef553b _public_6ef553b
#define public_6ef5540 _public_6ef5540
#define public_6ef559f _public_6ef559f
#define public_6ef55e0 _public_6ef55e0
#define public_6ef55fa _public_6ef55fa
#define public_6ef563c _public_6ef563c
#define public_6ef5660 _public_6ef5660
#define public_6ef5675 _public_6ef5675
#define public_6ef56b5 _public_6ef56b5
#define public_6ef56ce _public_6ef56ce
#define public_6ef5700 _public_6ef5700
#define public_6ef5711 _public_6ef5711
#define public_6ef5727 _public_6ef5727
#define public_6ef5742 _public_6ef5742
#define public_6ef5750 _public_6ef5750
#define public_6ef57a8 _public_6ef57a8
#define public_6ef587e _public_6ef587e
#define public_6ef5884 _public_6ef5884
#define public_6ef58c0 _public_6ef58c0
#define public_6ef58e7 _public_6ef58e7
#define public_6ef58eb _public_6ef58eb
#define public_6ef58f1 _public_6ef58f1
#define public_6ef5907 _public_6ef5907
#define public_6ef5910 _public_6ef5910
#define public_6ef5938 _public_6ef5938
#define public_6ef593c _public_6ef593c
#define public_6ef5953 _public_6ef5953
#define public_6ef596e _public_6ef596e
#define public_6ef5996 _public_6ef5996
#define public_6ef59cc _public_6ef59cc
#define public_6ef59e1 _public_6ef59e1
#define public_6ef59f8 _public_6ef59f8

PROC_DECLARE(0x6ef54e0, internal_6ef54e0, public_6ef54e0);
extern "C" NAKED register_t __cdecl internal_6ef54e0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac3d0 @0x6ef54e2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac3d0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x28]
        mov ecx, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [eax+8]
        xor edx, edx
        xor ebx, ebx
        cmp ecx, esi
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6ef5540
        mov eax, edx
        public_6ef5520 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 0xC
        public_6ef553b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        nop 
        public_6ef5540 : nop
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+0x30]
        shl edi, 7
        add edi, eax
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ecx+8]
        call public_6f33f80
        mov dword ptr ss : [esp+0x2C], eax
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ds:[edi+0x24]
        push eax
        lea eax, ss:[esp+0x34]
        push eax
        call dword ptr ds : [public_6fb35e8]
        add esp, 0xC
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6ef559f
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb7830]
        fnstsw ax
        test ah, 0x41
        jp public_6ef559f
        call public_6f5a7a0
        test al, al
        je public_6ef59f8
        public_6ef559f : nop
        mov esi, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        call public_6f49bc0
        add esp, 4
        mov ecx, eax
        call public_6f471a0
        mov ecx, eax
        test cl, 1
        je public_6ef55e0
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb7830]
        fnstsw ax
        test ah, 0x41
        jnp public_6ef59f8
        public_6ef55e0 : nop
        test cl, 2
        je public_6ef55fa
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb7830]
        fnstsw ax
        test ah, 0x41
        je public_6ef59f8
        public_6ef55fa : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        je public_6ef563c
        lea ecx, ss:[ebp+4]
        push ecx
        call public_6f75f30
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        push edx
        mov ecx, eax
        call public_6f72cb0
        mov esi, dword ptr ds : [eax+0x50]
        mov eax, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [eax+0xC]
        call public_6f47870
        cmp eax, esi
        jae public_6ef59f8
        jmp public_6ef56ce
        public_6ef563c : nop
        mov esi, dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6f47840
        fcomp qword ptr ds : [public_6fb78f0]
        fnstsw ax
        test ah, 0x44
        jp public_6ef5660
        fld qword ptr ds : [public_6fb78f0]
        jmp public_6ef5675
        public_6ef5660 : nop
        call public_6efec10
        fstp qword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6f47840
        fsubr qword ptr ss : [esp+0x24]
        public_6ef5675 : nop
        fst dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef56b5
        lea ecx, ss:[ebp+4]
        push ecx
        call public_6f75f30
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        push edx
        mov ecx, eax
        call public_6f72cb0
        fld dword ptr ds : [eax+0x54]
        fld dword ptr ss : [esp+0x24]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_6ef59f8
        jmp public_6ef56ce
        public_6ef56b5 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        call public_6f47840
        fcomp qword ptr ds : [public_6fb78f0]
        fnstsw ax
        test ah, 0x44
        jp public_6ef59f8
        public_6ef56ce : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov cl, byte ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0xA4]
        cmp cl, byte ptr ds : [edx]
        jne public_6ef59e1
        cmp byte ptr ds : [edi+0x74], bl
        jne public_6ef5700
        mov ecx, dword ptr ds : [edi+0x64]
        cmp ecx, ebx
        je public_6ef5700
        mov eax, dword ptr ds : [edi+0x68]
        sub eax, ecx
        sar eax, 2
        cmp eax, ebx
        jne public_6ef59e1
        public_6ef5700 : nop
        mov eax, dword ptr ds : [edi+0x70]
        cmp eax, 0xFFFFFFFF
        je public_6ef5711
        cmp dword ptr ds : [edi+0x78], eax
        jge public_6ef59e1
        public_6ef5711 : nop
        cmp dword ptr ds : [edi+0x24], 0xFFFFFFFF
        je public_6ef59e1
        mov esi, dword ptr ds : [edi+0x2C]
        cmp esi, dword ptr ds : [edi+0x30]
        je public_6ef59e1
        public_6ef5727 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        lea eax, ds:[esi+0x10]
        jne public_6ef5742
        mov eax, dword ptr ds : [edi+0x24]
        push 0xFFFFFFFF
        push esi
        push eax
        call public_6f35890
        add esp, 0xC
        jmp public_6ef5750
/*FIXUP public_6ef5742 : nop
        push offset public_6fd0830 @0x6ef5742*/
  FIXUP public_6ef5742 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push eax
        call public_6f32480
        add esp, 8
        public_6ef5750 : nop
        mov edx, eax
        cmp edx, ebx
        mov dword ptr ds : [esi+0x14], eax
        setne al
        cmp al, bl
        je public_6ef59e1
        mov eax, dword ptr ds : [edi+0x30]
        add esi, 0x38
        cmp esi, eax
        jne public_6ef5727
        inc dword ptr ds : [edi+0x78]
        mov ecx, dword ptr ss : [esp+0xA4]
        cmp byte ptr ds : [ecx], bl
        jne public_6ef57a8
        mov edx, dword ptr ss : [esp+0xA8]
        mov eax, dword ptr ss : [esp+0xA0]
        push edi
        push edx
        add eax, 0x10
        push eax
        mov ecx, ebp
        call public_6ef5a20
        test al, al
        jne public_6ef57a8
        mov ecx, dword ptr ss : [esp+0xA4]
        cmp byte ptr ds : [ecx], bl
        je public_6ef59e1
        public_6ef57a8 : nop
        mov dl, byte ptr ss : [esp+0x13]
        push 0x50C
        mov byte ptr ss : [esp+0x50], dl
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x58], ebx
        mov al, byte ptr ss : [esp+0x17]
        push 0xC
        mov dword ptr ss : [esp+0xA0], ebx
        mov byte ptr ss : [esp+0x48], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 8
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
        or eax, 0xFFFFFFFF
        push edi
        lea edx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0x8C], eax
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ss : [esp+0xA8]
        push edx
        push eax
        mov ecx, ebp
        mov byte ptr ss : [esp+0xA8], 1
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebx
        mov dword ptr ss : [esp+0x90], ebx
        mov dword ptr ss : [esp+0x9C], ebx
        call public_6ef4eb0
        cmp dword ptr ss : [esp+0x54], ebx
        je public_6ef5938
        lea ecx, ss:[ebp+4]
        push ecx
        call public_6f75f30
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov esi, eax
        push edx
        mov ecx, esi
        call public_6f72cb0
        cmp dword ptr ss : [esp+0x58], 2
        lea eax, ss:[esp+0x40]
        push eax
        jne public_6ef5884
        mov ecx, dword ptr ss : [esp+0x68]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        mov ecx, esi
        call public_6f73810
        public_6ef587e : nop
        mov eax, dword ptr ss : [esp+0x44]
        jmp public_6ef58eb
        public_6ef5884 : nop
        push ebx
        lea ecx, ss:[esp+0x54]
        push ecx
        mov ecx, esi
        call public_6f73810
        mov edx, dword ptr ss : [esp+0xA0]
        cmp byte ptr ds : [edx], bl
        je public_6ef587e
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x28], ebx
        call public_6ee93f0
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x48]
        mov esi, dword ptr ds : [eax]
        add esp, 4
        cmp esi, eax
        je public_6ef58e7
        lea esp, ss:[esp]
        public_6ef58c0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx+4]
        push 0x1E
/*FIXUP push offset public_6fb7834 @0x6ef58c8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb7834
        lea edx, ss:[esp+0x3C]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x40], eax
        call public_6ee9b70
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x44]
        cmp esi, eax
        jne public_6ef58c0
        public_6ef58e7 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6ef58eb : nop
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        je public_6ef5907
        public_6ef58f1 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax+0x5AC], edx
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+0x44]
        cmp ecx, eax
        jne public_6ef58f1
        public_6ef5907 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ef593c
        add edi, 0x60
        public_6ef5910 : nop
        mov eax, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x38]
        push ecx
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [edi+8]
        push 1
        push eax
        mov ecx, edi
        call public_6f937c0
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x44]
        cmp esi, eax
        jne public_6ef5910
        jmp public_6ef593c
        public_6ef5938 : nop
        mov eax, dword ptr ss : [esp+0x44]
        public_6ef593c : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x20], edx
        mov byte ptr ss : [esp+0x98], bl
        mov edi, eax
        je public_6ef596e
        public_6ef5953 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x40]
        push eax
        lea ecx, ss:[esp+0x48]
        call public_6ecfe80
        cmp esi, edi
        jne public_6ef5953
        mov eax, dword ptr ss : [esp+0x44]
        public_6ef596e : nop
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov edi, dword ptr ds : [eax]
        add esp, 4
        cmp edi, eax
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        mov ebp, eax
        je public_6ef59cc
        public_6ef5996 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        push ebx
        lea ecx, ds:[esi+8]
        call public_6ef8790
        push esi
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ss : [esp+0x54], ecx
        jne public_6ef5996
        mov eax, dword ptr ss : [esp+0x50]
        public_6ef59cc : nop
        push eax
        call public_6fa8fe0
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        public_6ef59e1 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, ebx
        je public_6ef59f8
        mov edx, dword ptr ss : [esp+0xA4]
        cmp byte ptr ds : [edx], bl
        je public_6ef5520
        public_6ef59f8 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [ebp+0x28]
        mov edx, dword ptr ds : [ecx+8]
        add eax, 8
        cmp eax, edx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6ef553b
        mov eax, dword ptr ss : [esp+0x20]
        jmp public_6ef5520
        UNREACHABLE_TRAP(0x6ef54e0)
    }
}

#undef public_6ef5520
#undef public_6ef553b
#undef public_6ef5540
#undef public_6ef559f
#undef public_6ef55e0
#undef public_6ef55fa
#undef public_6ef563c
#undef public_6ef5660
#undef public_6ef5675
#undef public_6ef56b5
#undef public_6ef56ce
#undef public_6ef5700
#undef public_6ef5711
#undef public_6ef5727
#undef public_6ef5742
#undef public_6ef5750
#undef public_6ef57a8
#undef public_6ef587e
#undef public_6ef5884
#undef public_6ef58c0
#undef public_6ef58e7
#undef public_6ef58eb
#undef public_6ef58f1
#undef public_6ef5907
#undef public_6ef5910
#undef public_6ef5938
#undef public_6ef593c
#undef public_6ef5953
#undef public_6ef596e
#undef public_6ef5996
#undef public_6ef59cc
#undef public_6ef59e1
#undef public_6ef59f8
