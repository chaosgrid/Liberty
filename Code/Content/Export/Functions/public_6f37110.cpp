#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaee0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f0bb80);
CLANG_FORWARD_PROC_SYMBOL(public_6f37110);
CLANG_FORWARD_PROC_SYMBOL(public_6f37d00);
CLANG_FORWARD_PROC_SYMBOL(public_6f38170);
CLANG_FORWARD_PROC_SYMBOL(public_6f383a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38410);
CLANG_FORWARD_PROC_SYMBOL(public_6f611a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faed66);

#define public_6f371d0 _public_6f371d0
#define public_6f371da _public_6f371da
#define public_6f371e2 _public_6f371e2
#define public_6f37202 _public_6f37202
#define public_6f37233 _public_6f37233
#define public_6f37240 _public_6f37240
#define public_6f37251 _public_6f37251
#define public_6f37281 _public_6f37281
#define public_6f37283 _public_6f37283
#define public_6f372c9 _public_6f372c9
#define public_6f37330 _public_6f37330
#define public_6f37391 _public_6f37391
#define public_6f373b0 _public_6f373b0
#define public_6f373cc _public_6f373cc
#define public_6f373e6 _public_6f373e6
#define public_6f373f0 _public_6f373f0
#define public_6f374d2 _public_6f374d2
#define public_6f37523 _public_6f37523
#define public_6f3754f _public_6f3754f
#define public_6f3763e _public_6f3763e
#define public_6f37658 _public_6f37658
#define public_6f37680 _public_6f37680
#define public_6f37696 _public_6f37696
#define public_6f376ee _public_6f376ee
#define public_6f3778b _public_6f3778b
#define public_6f377c6 _public_6f377c6

PROC_DECLARE(0x6f37110, internal_6f37110, public_6f37110);
extern "C" NAKED register_t __cdecl internal_6f37110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faed66 @0x6f37112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faed66
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x16]
        mov edi, ecx
        push eax
        mov dword ptr ss : [esp+0xA4], edi
        call public_6ead6a0
        lea ebx, ds:[edi+0x10]
        xor ebp, ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0xAC], ebp
        call dword ptr ds : [public_6fb3030]
        mov cl, byte ptr ss : [esp+0x16]
        lea esi, ds:[edi+0x14]
        mov byte ptr ds : [esi], cl
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        lea edx, ss:[esp+0x16]
        push edx
        push ebp
        lea eax, ss:[esp+0x1F]
        lea ecx, ds:[edi+0x24]
        push eax
        mov byte ptr ss : [esp+0xB8], 1
        call public_6f383a0
        mov edx, dword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ss : [esp+0xBC]
        mov dword ptr ds : [edi+0x38], ecx
        mov byte ptr ds : [edi+0x3C], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx], ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [edi+0x40], ecx
        mov eax, dword ptr ds : [edx]
        mov cl, byte ptr ds : [eax+0x34]
        mov byte ptr ds : [edi+0x3D], cl
        mov ecx, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x34], ecx
        je public_6f37202
        lea ecx, ds:[eax+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        lea ecx, ds:[ecx]
        public_6f371d0 : nop
        mov ebx, dword ptr ds : [ecx]
        cmp ebx, ebp
        jne public_6f371da
        xor ecx, ecx
        jmp public_6f371e2
        public_6f371da : nop
        mov ecx, dword ptr ds : [ecx+4]
        sub ecx, ebx
        sar ecx, 2
        public_6f371e2 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        add ebx, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], ebx
        mov ebx, dword ptr ss : [esp+0x34]
        add eax, 0x38
        add ecx, 0x38
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f371d0
        public_6f37202 : nop
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ss : [esp+0x48], al
        xor eax, eax
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x54], ebp
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebx, 1
        cmp ecx, ebx
        mov byte ptr ss : [esp+0xAC], 3
        jl public_6f372c9
        jmp public_6f37240
        public_6f37233 : nop
        mov edx, dword ptr ss : [esp+0xB4]
        lea ebx, ds:[ebx]
        public_6f37240 : nop
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0xB8]
        cmp eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], eax
        je public_6f37283
        public_6f37251 : nop
        lea edx, ss:[esp+0x34]
        lea ecx, ds:[eax+8]
        mov dword ptr ss : [esp+0x34], ebx
        mov ebp, dword ptr ds : [ecx+8]
        push edx
        call public_6eb5f30
        cmp eax, ebp
        mov eax, dword ptr ss : [esp+0x10]
        jne public_6f37281
        mov ecx, dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x38
        cmp eax, edx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f37251
        public_6f37281 : nop
        xor ebp, ebp
        public_6f37283 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0xBC]
        push edx
        call public_6f72cb0
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[ecx+0x24]
        add ecx, 0x18
        push edx
        push ecx
        mov ecx, eax
        call public_6fa7ff0
        mov ecx, dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x18]
        inc ebx
        cmp ebx, eax
        jle public_6f37233
        mov eax, dword ptr ss : [esp+0x4C]
        public_6f372c9 : nop
        mov edx, dword ptr ss : [esp+0x50]
        lea ecx, ds:[eax+4]
        cmp ecx, edx
        mov dword ptr ss : [esp+0x3C], ecx
        je public_6f37658
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        lea ecx, ds:[eax+0x24]
        lea edx, ss:[esp+0x58]
        push edx
        add eax, 0x18
        push ecx
        lea ebp, ds:[ebx+0x24]
        push eax
        add ebx, 0x18
        push ebx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x28], eax
        call public_6f611a0
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x68]
        push eax
        push ecx
        push edx
        push ebp
        call public_6f611a0
        fld dword ptr ss : [esp+0x30]
        fcomp 
        add esp, 0x20
        fnstsw ax
        fstp st(0)
        test ah, 5
        mov eax, ebx
        jnp public_6f37330
        mov eax, ebp
        public_6f37330 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x20], edx
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f37391
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [ebx+4]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_6f37391
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [ebx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_6f373b0
        public_6f37391 : nop
        mov eax, dword ptr ds : [esi+8]
        push ebx
        push eax
        mov ecx, esi
        call public_6f38170
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ss : [ebp+8]
        jmp public_6f373cc
        public_6f373b0 : nop
        mov eax, dword ptr ds : [esi+8]
        push ebp
        push eax
        mov ecx, esi
        call public_6f38170
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x28], ecx
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x2C], edx
        mov eax, dword ptr ds : [ebx+8]
        public_6f373cc : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6f3754f
        jmp public_6f373f0
        public_6f373e6 : nop
        mov eax, dword ptr ss : [esp+0x10]
        lea ebx, ds:[ebx]
        public_6f373f0 : nop
        mov ebx, dword ptr ds : [eax]
        lea ebp, ds:[ebx+0x18]
        push ebp
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6eeaee0
        add ebx, 0x24
        push ebx
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x9C]
        push ecx
        call public_6eeaee0
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        add esp, 0x18
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x90]
        fmul dword ptr ss : [esp+0x90]
        faddp 
        fld dword ptr ss : [esp+0x8C]
        fmul dword ptr ss : [esp+0x8C]
        faddp 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f374d2
        push ebp
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x7C]
        push eax
        call public_6f0bb80
        push 0x40000000
        lea ecx, ss:[esp+0x84]
        push ecx
        lea edx, ss:[esp+0xA8]
        push edx
        call public_6f37d00
        mov eax, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ss : [esp+0xB0]
        mov edx, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x40], eax
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x48], edx
        jmp public_6f37523
        public_6f374d2 : nop
        push ebx
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x6C]
        push ecx
        call public_6f0bb80
        push 0x40000000
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x6C]
        push eax
        call public_6f37d00
        mov ecx, dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        mov dword ptr ss : [esp+0x3C], eax
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x40], ecx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x44], edx
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x48], eax
        public_6f37523 : nop
        mov eax, dword ptr ds : [esi+8]
        add esp, 0x18
        lea ecx, ss:[esp+0x1C]
        push ecx
        push 1
        push eax
        mov ecx, esi
        call public_6f6f3e0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x50]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f373e6
        public_6f3754f : nop
        mov eax, dword ptr ds : [edi+0x18]
        fld dword ptr ds : [eax+8]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fcomp dword ptr ds : [public_6fb95d0]
        fnstsw ax
        test ah, 5
        jp public_6f3763e
        mov eax, dword ptr ds : [edi+0x18]
        fld dword ptr ss : [esp+0x30]
        mov byte ptr ds : [edi+0x3C], 1
        fadd dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x60]
        sub esp, 0xC
        fmul dword ptr ds : [public_6fb605c]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6fb605c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ds : [public_6fb605c]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        mov eax, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x1C]
        push edx
        push 1
        push eax
        mov ecx, esi
        call public_6f6f3e0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        xor ebp, ebp
        jmp public_6f37680
        public_6f3763e : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov byte ptr ds : [edi+0x3C], 0
        mov eax, dword ptr ds : [esi+8]
        push 1
        push eax
        mov ecx, esi
        call public_6f6f3e0
        xor ebp, ebp
        jmp public_6f37680
        public_6f37658 : nop
        mov byte ptr ds : [edi+0x3C], 0
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[ebx+0x18]
        push ecx
        push 1
        push eax
        mov ecx, esi
        call public_6f6f3e0
        mov eax, dword ptr ds : [esi+8]
        add ebx, 0x24
        push ebx
        push 1
        push eax
        mov ecx, esi
        call public_6f6f3e0
        public_6f37680 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        cmp eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x38], ebp
        je public_6f377c6
        public_6f37696 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [edx]
        push esi
        lea eax, ss:[esp+0x1C]
        lea ebx, ds:[edi+0x24]
        push eax
        mov ecx, ebx
        call public_6f7b0f0
        mov eax, dword ptr ds : [edi+0x28]
        cmp dword ptr ss : [esp+0x18], eax
        jne public_6f3778b
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ss : [esp+0x64], al
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x6C], ebp
        mov dword ptr ss : [esp+0x70], ebp
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x74], ecx
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0xAC], 4
        mov byte ptr ss : [esp+0x78], al
        call public_6fa3db0
        cmp eax, ebp
        jge public_6f376ee
        xor eax, eax
        public_6f376ee : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x6C]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x80], eax
        mov eax, dword ptr ss : [esp+0x70]
        push eax
        push ecx
        lea ecx, ss:[esp+0x84]
        call public_6eed270
        mov dword ptr ss : [esp+0x80], eax
        mov dword ptr ss : [esp+0x84], eax
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0xB4], 5
        call public_6f38410
        mov edx, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x1C], ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        mov dword ptr ss : [esp+0x84], ebp
        mov dword ptr ss : [esp+0x88], ebp
        mov dword ptr ss : [esp+0x8C], ebp
        mov byte ptr ss : [esp+0xB4], 3
        call public_6fa8fe0
        add esp, 8
        mov dword ptr ss : [esp+0x68], ebp
        mov dword ptr ss : [esp+0x6C], ebp
        mov dword ptr ss : [esp+0x70], ebp
        public_6f3778b : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx+0x18]
        lea edx, ss:[esp+0x38]
        push edx
        add ecx, 0x10
        push 1
        push eax
        call public_6f937c0
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x50]
        add eax, 4
        inc edx
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x38], edx
        jne public_6f37696
        mov eax, dword ptr ss : [esp+0x4C]
        public_6f377c6 : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0xA8]
        add esp, 4
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 0xC
        UNREACHABLE_TRAP(0x6f37110)
    }
}

#undef public_6f371d0
#undef public_6f371da
#undef public_6f371e2
#undef public_6f37202
#undef public_6f37233
#undef public_6f37240
#undef public_6f37251
#undef public_6f37281
#undef public_6f37283
#undef public_6f372c9
#undef public_6f37330
#undef public_6f37391
#undef public_6f373b0
#undef public_6f373cc
#undef public_6f373e6
#undef public_6f373f0
#undef public_6f374d2
#undef public_6f37523
#undef public_6f3754f
#undef public_6f3763e
#undef public_6f37658
#undef public_6f37680
#undef public_6f37696
#undef public_6f376ee
#undef public_6f3778b
#undef public_6f377c6
