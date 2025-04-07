#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208640);
CLANG_FORWARD_PROC_SYMBOL(public_6216550);
CLANG_FORWARD_PROC_SYMBOL(public_6217ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6217bc0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6244f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_62482f6);

#define public_62165f8 _public_62165f8
#define public_62165fd _public_62165fd
#define public_6216668 _public_6216668
#define public_6216684 _public_6216684
#define public_62166a1 _public_62166a1
#define public_62166b7 _public_62166b7
#define public_621684e _public_621684e
#define public_621686a _public_621686a
#define public_6216890 _public_6216890
#define public_6216a78 _public_6216a78
#define public_6216a80 _public_6216a80
#define public_6216afc _public_6216afc
#define public_6216b00 _public_6216b00
#define public_6216b82 _public_6216b82
#define public_6216b86 _public_6216b86
#define public_6216bf9 _public_6216bf9
#define public_6216bfb _public_6216bfb
#define public_6216c4e _public_6216c4e
#define public_6216d06 _public_6216d06
#define public_6216d0e _public_6216d0e
#define public_6216d83 _public_6216d83
#define public_6216d87 _public_6216d87
#define public_6216e03 _public_6216e03
#define public_6216e07 _public_6216e07
#define public_6216e7a _public_6216e7a
#define public_6216e7c _public_6216e7c
#define public_6216ec5 _public_6216ec5
#define public_6216eed _public_6216eed
#define public_6216f03 _public_6216f03

PROC_DECLARE(0x6216550, internal_6216550, public_6216550);
extern "C" NAKED register_t __cdecl internal_6216550()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62482f6 @0x6216552*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62482f6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xE0
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea eax, ss:[esp+0x54]
        push edi
        lea esi, ss:[ebp+0xD8]
        push eax
        mov ecx, esi
        call public_6217ba0
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0xF8], 0
        push ecx
        mov ecx, esi
        call public_6217bc0
        mov edx, dword ptr ss : [ebp+0xF0]
        mov ebx, 1
        mov byte ptr ss : [esp+0xF8], bl
        mov eax, dword ptr ds : [edx+0x5C]
        mov edx, dword ptr ss : [ebp+0x90]
        push edx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        fst dword ptr ss : [esp+0x9C]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_6216f03
        cmp dword ptr ss : [ebp+0xD0], ebx
        je public_62165f8
        mov eax, dword ptr ss : [ebp+0xF0]
        mov byte ptr ss : [esp+0x17], bl
        mov ecx, dword ptr ds : [eax+0x60]
        and ecx, 8
        cmp cl, 8
        jne public_62165fd
        public_62165f8 : nop
        mov byte ptr ss : [esp+0x17], 0
        public_62165fd : nop
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 4
        cmp al, 4
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        sete byte ptr ss : [esp+0x43]
        call dword ptr ds : [ecx+0x40]
        lea edx, ss:[ebp+0x4C]
        lea ecx, ss:[esp+0xC0]
        push edx
        push ecx
        mov ecx, eax
        call public_6208640
        mov edx, dword ptr ss : [ebp+0xF0]
        lea esi, ss:[ebp+0xBC]
        mov ecx, 5
        lea edi, ss:[esp+0x44]
        rep movsd
        mov eax, dword ptr ds : [edx+0x60]
        mov ecx, eax
        and ecx, 0x1000
        cmp ecx, 0x1000
        jne public_6216668
        fld dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x48], edx
        public_6216668 : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_6216684
        fld dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x4C], eax
        public_6216684 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x78]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x74], 0xFFFFFFFF
        je public_6216f03
        mov ebx, 0x18
        public_62166a1 : nop
        lea esi, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_6257a28]
        test eax, eax
        jne public_62166b7
        call public_623e830
        mov dword ptr ds : [public_6257a28], eax
        public_62166b7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC0]
        push esi
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        and eax, 0x4100
        je public_6216eed
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [ebp+0x8C]
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [eax+0x70]
        fstp dword ptr ss : [esp+0x40]
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x78]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624c350]
        fnstsw ax
        test ah, 5
        jnp public_6216eed
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edi
        push edx
        mov eax, dword ptr ds : [eax+0x74]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624babc]
        mov esi, eax
        call public_6246188
        mov edx, dword ptr ss : [ebp+0x8C]
        push edi
        shl eax, 0x18
        or esi, eax
        mov eax, dword ptr ss : [ebp+0xF0]
        push edx
        mov eax, dword ptr ds : [eax+0x7C]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax+0x88]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ss:[esp+0x7C]
        fstp dword ptr ss : [esp+0x34]
        push eax
        push ecx
        call dword ptr ds : [public_62572a0]
        mov al, byte ptr ss : [esp+0x1F]
        add esp, 8
        test al, al
        je public_621686a
        mov edx, dword ptr ss : [ebp+0xF0]
        push edi
        mov eax, dword ptr ds : [edx+0x80]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [esp+0xB0], 0
        dec eax
        mov dword ptr ss : [esp+0xAC], eax
        fimul dword ptr ss : [esp+0xAC]
        call public_6246188
        cmp eax, dword ptr ss : [esp+0x74]
        je public_621686a
        lea ecx, ss:[esp+0x44]
        mov dword ptr ss : [esp+0x74], eax
        push ecx
        push eax
        lea ecx, ss:[ebp+0xB4]
        call public_6244f30
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        mov ecx, eax
        and ecx, 0x1000
        cmp ecx, 0x1000
        jne public_621684e
        fld dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x48], edx
        public_621684e : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_621686a
        fld dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x4C], eax
        public_621686a : nop
        mov al, byte ptr ss : [esp+0x3F]
        test al, al
        je public_6216c4e
        mov ecx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [public_6257a28]
        test eax, eax
        lea edi, ds:[ecx+0x18]
        jne public_6216890
        call public_623e830
        mov dword ptr ds : [public_6257a28], eax
        public_6216890 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC0]
        push edi
        push ecx
        lea ecx, ss:[esp+0x70]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x20]
        mov eax, 0x5F3759DF
        fsubp 
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x70]
        fsubp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(4)
        fsubp 
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fmulp st(2), st
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fsubp st(2), st
        fstp st(0)
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fmulp 
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x70]
        fmul st, st(2)
        mov edx, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        mov ecx, edx
        faddp 
        and ecx, 0xFFFF
        cmp ecx, eax
        fmul dword ptr ds : [public_624cdd8]
        fstp st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fxch 
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0xB8]
        fld dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0xA0]
        fstp st(0)
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0xB8]
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x2C]
        fchs 
        fld dword ptr ss : [esp+0x28]
        fxch 
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x50]
        jg public_6216a78
        fld dword ptr ss : [esp+0xA0]
        fsub dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_62579ec]
        fsub dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xA4]
        fsub dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_62579ec]
        mov edx, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, ebx
        inc word ptr ds : [public_62579e0]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], ecx
        jmp public_6216a80
        public_6216a78 : nop
        fstp st(0)
        fstp st(0)
        mov dword ptr ss : [esp+0x10], eax
        public_6216a80 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x90], ecx
        mov ecx, edx
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_6216afc
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_62579ec]
        mov edx, dword ptr ss : [esp+0x90]
        fsub dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], edx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [public_62579ec]
        mov edi, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, ebx
        inc word ptr ds : [public_62579e0]
        mov edx, dword ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], ecx
        jmp public_6216b00
        public_6216afc : nop
        fstp st(0)
        mov edi, eax
        public_6216b00 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x98], ecx
        mov ecx, edx
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_6216b82
        fld dword ptr ss : [esp+0xA0]
        fsub dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_62579ec]
        mov edx, dword ptr ss : [esp+0x98]
        fadd dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], edx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0xA4]
        fsub dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [public_62579ec]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, ebx
        mov dword ptr ds : [public_62579ec], ecx
        mov ecx, dword ptr ds : [public_62579e0]
        inc word ptr ds : [public_62579e0]
        mov edx, dword ptr ds : [public_62579e0]
        jmp public_6216b86
        public_6216b82 : nop
        fstp st(0)
        mov ecx, eax
        public_6216b86 : nop
        mov ebx, dword ptr ss : [esp+0x54]
        and edx, 0xFFFF
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x84], ebx
        cmp edx, eax
        mov ebx, 0x18
        jg public_6216bf9
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [public_62579ec]
        mov edx, dword ptr ss : [esp+0x84]
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], edx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [public_62579ec]
        mov eax, dword ptr ds : [public_62579e0]
        add esi, ebx
        inc word ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], esi
        jmp public_6216bfb
        public_6216bf9 : nop
        fstp st(0)
        public_6216bfb : nop
        mov esi, dword ptr ds : [public_62579f8]
        xor edx, edx
        mov dx, word ptr ds : [public_62579e2]
        add edx, 5
        cmp edx, esi
        jg public_6216eed
        mov edx, dword ptr ds : [public_62579f0]
        mov word ptr ds : [edx], ax
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+2], cx
        mov edx, dword ptr ds : [public_62579f0]
        mov word ptr ds : [edx+4], di
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+6], di
        mov edx, dword ptr ds : [public_62579f0]
        mov word ptr ds : [edx+8], cx
        mov cx, word ptr ss : [esp+0x10]
        jmp public_6216ec5
        public_6216c4e : nop
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x7C]
        mov edi, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        fmul st, st(1)
        mov edx, edi
        and edx, 0xFFFF
        cmp edx, eax
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x80]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x80]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x50]
        jg public_6216d06
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [public_62579ec]
        fadd dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x34]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_62579ec]
        mov eax, dword ptr ds : [public_62579e0]
        add ecx, ebx
        inc word ptr ds : [public_62579e0]
        mov edi, dword ptr ds : [public_62579e0]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_62579f4]
        mov dword ptr ds : [public_62579ec], ecx
        jmp public_6216d0e
        public_6216d06 : nop
        fstp st(0)
        fstp st(0)
        mov dword ptr ss : [esp+0x40], eax
        public_6216d0e : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, edi
        fld dword ptr ss : [esp+0x48]
        and edx, 0xFFFF
        mov dword ptr ss : [esp+0x88], ecx
        cmp edx, eax
        jg public_6216d83
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [public_62579ec]
        fadd dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], ecx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [public_62579ec]
        mov edx, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, ebx
        inc word ptr ds : [public_62579e0]
        mov edi, dword ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], ecx
        jmp public_6216d87
        public_6216d83 : nop
        fstp st(0)
        mov edx, eax
        public_6216d87 : nop
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x8C], ecx
        mov ecx, edi
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_6216e03
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [public_62579ec]
        mov ecx, dword ptr ss : [esp+0x8C]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], ecx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [public_62579ec]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, ebx
        mov dword ptr ds : [public_62579ec], ecx
        mov ecx, dword ptr ds : [public_62579e0]
        inc word ptr ds : [public_62579e0]
        mov edi, dword ptr ds : [public_62579e0]
        jmp public_6216e07
        public_6216e03 : nop
        fstp st(0)
        mov ecx, eax
        public_6216e07 : nop
        mov ebx, dword ptr ss : [esp+0x54]
        and edi, 0xFFFF
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x94], ebx
        cmp edi, eax
        mov ebx, 0x18
        jg public_6216e7a
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [public_62579ec]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+0xC], esi
        mov esi, dword ptr ss : [esp+0x94]
        mov dword ptr ds : [eax+0x14], esi
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [public_62579ec]
        mov eax, dword ptr ds : [public_62579e0]
        add edi, ebx
        inc word ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], edi
        jmp public_6216e7c
        public_6216e7a : nop
        fstp st(0)
        public_6216e7c : nop
        mov edi, dword ptr ds : [public_62579f8]
        xor esi, esi
        mov si, word ptr ds : [public_62579e2]
        add esi, 5
        cmp esi, edi
        jg public_6216eed
        mov esi, dword ptr ds : [public_62579f0]
        mov word ptr ds : [esi], ax
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+2], cx
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+4], dx
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+6], dx
        mov edx, dword ptr ds : [public_62579f0]
        mov word ptr ds : [edx+8], cx
        mov cx, word ptr ss : [esp+0x40]
        public_6216ec5 : nop
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+0xA], cx
        mov edx, dword ptr ds : [public_62579f0]
        add word ptr ds : [public_62579e2], 6
        add edx, 0xC
        add word ptr ds : [public_62579e8], 2
        mov dword ptr ds : [public_62579f0], edx
        public_6216eed : nop
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x58], eax
        jne public_62166a1
        public_6216f03 : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xEC
        ret 
        UNREACHABLE_TRAP(0x6216550)
    }
}

#undef public_62165f8
#undef public_62165fd
#undef public_6216668
#undef public_6216684
#undef public_62166a1
#undef public_62166b7
#undef public_621684e
#undef public_621686a
#undef public_6216890
#undef public_6216a78
#undef public_6216a80
#undef public_6216afc
#undef public_6216b00
#undef public_6216b82
#undef public_6216b86
#undef public_6216bf9
#undef public_6216bfb
#undef public_6216c4e
#undef public_6216d06
#undef public_6216d0e
#undef public_6216d83
#undef public_6216d87
#undef public_6216e03
#undef public_6216e07
#undef public_6216e7a
#undef public_6216e7c
#undef public_6216ec5
#undef public_6216eed
#undef public_6216f03
