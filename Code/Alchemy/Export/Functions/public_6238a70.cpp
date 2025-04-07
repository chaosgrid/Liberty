#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_622d2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6238a70);
CLANG_FORWARD_PROC_SYMBOL(public_6239820);
CLANG_FORWARD_PROC_SYMBOL(public_6239840);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6244f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_624a0c6);

#define public_6238af4 _public_6238af4
#define public_6238af9 _public_6238af9
#define public_6238bbe _public_6238bbe
#define public_6238bda _public_6238bda
#define public_6238bfa _public_6238bfa
#define public_6238c48 _public_6238c48
#define public_6238dc9 _public_6238dc9
#define public_6238def _public_6238def
#define public_6238ea9 _public_6238ea9
#define public_6238ecb _public_6238ecb
#define public_6238f31 _public_6238f31
#define public_6238f46 _public_6238f46
#define public_6239008 _public_6239008
#define public_6239024 _public_6239024
#define public_6239088 _public_6239088
#define public_62390cc _public_62390cc
#define public_62391a2 _public_62391a2
#define public_6239237 _public_6239237
#define public_6239295 _public_6239295
#define public_62392a1 _public_62392a1
#define public_62393ce _public_62393ce
#define public_62393d6 _public_62393d6
#define public_623944e _public_623944e
#define public_6239452 _public_6239452
#define public_62394d3 _public_62394d3
#define public_62394d7 _public_62394d7
#define public_6239546 _public_6239546
#define public_6239548 _public_6239548
#define public_62395bb _public_62395bb
#define public_62395c1 _public_62395c1
#define public_62395da _public_62395da

PROC_DECLARE(0x6238a70, internal_6238a70, public_6238a70);
extern "C" NAKED register_t __cdecl internal_6238a70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_624a0c6 @0x6238a72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_624a0c6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x174
        push ebx
        mov ebx, dword ptr ds : [public_62578f4]
        push ebp
        mov ebp, ecx
        push esi
        lea eax, ss:[esp+0x6C]
        lea esi, ss:[ebp+0xD8]
        push edi
        inc ebx
        push eax
        mov ecx, esi
        mov dword ptr ds : [public_62578f4], ebx
        call public_6239820
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ss : [esp+0x18C], 0
        push ecx
        mov ecx, esi
        call public_6239840
        mov eax, dword ptr ss : [ebp+0xD0]
        mov ecx, 1
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18C], cl
        je public_6238af4
        mov edx, dword ptr ss : [ebp+0xF0]
        mov byte ptr ss : [esp+0x23], cl
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 8
        cmp al, 8
        jne public_6238af9
        public_6238af4 : nop
        mov byte ptr ss : [esp+0x23], 0
        public_6238af9 : nop
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        mov edx, eax
        and edx, 4
        cmp dl, 4
        mov edx, eax
        sete byte ptr ss : [esp+0x22]
        and edx, ecx
        cmp dl, cl
        lea ecx, ss:[esp+0x124]
        sete byte ptr ss : [esp+0x3A]
        and eax, 0x10
        cmp al, 0x10
        sete byte ptr ss : [esp+0x3B]
        call public_6206c70
        lea eax, ss:[esp+0xA0]
        lea ecx, ss:[esp+0x154]
        push eax
        push ecx
        lea ecx, ss:[ebp+0x4C]
        mov dword ptr ss : [esp+0x158], 0
        mov dword ptr ss : [esp+0x154], 0
        mov dword ptr ss : [esp+0x150], 0
        call public_622d2e0
        mov edx, dword ptr ss : [ebp+0xF0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x124]
        rep movsd
        lea esi, ss:[ebp+0xBC]
        mov ecx, 5
        lea edi, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        rep movsd
        mov eax, dword ptr ds : [edx+0x60]
        mov ecx, eax
        and ecx, 0x1000
        cmp ecx, 0x1000
        jne public_6238bbe
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x60], edx
        public_6238bbe : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_6238bda
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x64], eax
        public_6238bda : nop
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_6257b8c]
        test eax, eax
        jne public_6238bfa
        call public_623e830
        mov dword ptr ds : [public_6257b8c], eax
        public_6238bfa : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x124]
        push esi
        push ecx
        lea ecx, ss:[esp+0xFC]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [edx+0x5C]
        mov edx, dword ptr ss : [ebp+0x90]
        push edx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0xCC]
        cmp eax, ecx
        je public_62395da
        public_6238c48 : nop
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        mov eax, dword ptr ds : [eax+0x70]
        fstp dword ptr ss : [esp+0x34]
        mov esi, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [eax+0x78]
        push esi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fmul dword ptr ss : [esp+0xCC]
        mov eax, dword ptr ds : [eax+0x7C]
        push esi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x80]
        push esi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x48]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624bab8]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jnp public_62395c1
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jnp public_62395c1
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_624f1a4]
        fnstsw ax
        test ah, 0x41
        jnp public_62395c1
        mov eax, dword ptr ss : [esp+0x70]
        lea ecx, ds:[eax+0xC]
        add eax, 0x18
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x40], ebx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, 0x5F3759DF
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jp public_6238dc9
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0
        jmp public_6238def
        public_6238dc9 : nop
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        public_6238def : nop
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [esp+0xFC]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x104]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x100]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        mov al, byte ptr ss : [esp+0x3B]
        test al, al
        je public_6238f46
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov eax, 0x5F3759DF
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fst dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x10]
        fmulp 
        fcom dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jp public_6238ea9
        fstp st(0)
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x30], 0
        jmp public_6238ecb
        public_6238ea9 : nop
        fdivr dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x30]
        public_6238ecb : nop
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fabs 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624e474]
        fnstsw ax
        and eax, 0x4100
        je public_62395c1
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624cddc]
        fnstsw ax
        and eax, 0x4100
        jne public_6238f31
        fld dword ptr ds : [public_624e474]
        fsub dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624e470]
        fld dword ptr ss : [esp+0x58]
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        public_6238f31 : nop
        fld dword ptr ss : [esp+0x58]
        fcomp dword ptr ds : [public_624f1a4]
        fnstsw ax
        test ah, 0x41
        jnp public_62395c1
        public_6238f46 : nop
        mov ecx, dword ptr ss : [ebp+0xF0]
        push esi
        mov eax, dword ptr ds : [ecx+0x74]
        mov ecx, dword ptr ss : [ebp+0x8C]
        push ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x20]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_624babc]
        mov edi, eax
        call public_6246188
        shl eax, 0x18
        or edi, eax
        mov al, byte ptr ss : [esp+0x23]
        test al, al
        je public_6239024
        mov edx, dword ptr ss : [ebp+0xF0]
        push esi
        mov eax, dword ptr ds : [edx+0x84]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [esp+0xF0], 0
        dec eax
        mov dword ptr ss : [esp+0xEC], eax
        fimul dword ptr ss : [esp+0xEC]
        call public_6246188
        cmp eax, dword ptr ss : [esp+0x98]
        je public_6239024
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x98], eax
        push ecx
        push eax
        lea ecx, ss:[ebp+0xB4]
        call public_6244f30
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        mov ecx, eax
        and ecx, 0x1000
        cmp ecx, 0x1000
        jne public_6239008
        fld dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x68]
        fstp dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x60], edx
        public_6239008 : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_6239024
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x64], eax
        public_6239024 : nop
        mov al, byte ptr ss : [esp+0x3A]
        test al, al
        mov al, byte ptr ss : [esp+0x22]
        je public_62391a2
        test al, al
        je public_6239088
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_624f1a0]
        fadd dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_624bab8]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        mov ecx, dword ptr ss : [esp+0xC0]
        fstp dword ptr ss : [esp+0xC4]
        mov edx, dword ptr ss : [esp+0xC4]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xC8]
        mov eax, dword ptr ss : [esp+0xC8]
        jmp public_62390cc
        public_6239088 : nop
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_624bab8]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xDC]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        mov ecx, dword ptr ss : [esp+0xDC]
        fstp dword ptr ss : [esp+0xE0]
        mov edx, dword ptr ss : [esp+0xE0]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0xE4]
        mov eax, dword ptr ss : [esp+0xE4]
        public_62390cc : nop
        fld dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x94], eax
        sub esp, 0xC
        fsub dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x9C], edx
        mov dword ptr ss : [esp+0x98], ecx
        lea ecx, ss:[esp+0x10C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x8C]
        fadd dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x100]
        mov edx, dword ptr ss : [esp+0x104]
        mov eax, dword ptr ss : [esp+0x108]
        mov dword ptr ss : [esp+0x80], ecx
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x90]
        fadd dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0x84], edx
        mov dword ptr ss : [esp+0x88], eax
        mov dword ptr ss : [esp+0x74], ecx
        fstp dword ptr ss : [esp+0xA8]
        fld dword ptr ss : [esp+0x94]
        fadd dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x78], edx
        fstp dword ptr ss : [esp+0xAC]
        mov eax, dword ptr ss : [esp+0xAC]
        mov dword ptr ss : [esp+0x7C], eax
        jmp public_62392a1
        public_62391a2 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x48]
        test al, al
        mov dword ptr ss : [esp+0x80], ebx
        mov dword ptr ss : [esp+0x84], ecx
        mov dword ptr ss : [esp+0x88], edx
        je public_6239237
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_624f1a0]
        fadd dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fld st(1)
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x110]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x114]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0x110]
        fadd dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [esp+0xD0]
        fstp dword ptr ss : [esp+0xD4]
        fld dword ptr ss : [esp+0x114]
        fadd dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0xD4]
        fstp dword ptr ss : [esp+0xD8]
        mov edx, dword ptr ss : [esp+0xD8]
        jmp public_6239295
        public_6239237 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x120]
        fxch 
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0xB0]
        mov eax, dword ptr ss : [esp+0xB0]
        fadd dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xB4]
        fld dword ptr ss : [esp+0x120]
        fadd dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ss : [esp+0xB4]
        fstp dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xB8]
        public_6239295 : nop
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], ecx
        mov dword ptr ss : [esp+0x7C], edx
        public_62392a1 : nop
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x2C]
        mov ecx, 0x5F3759DF
        fsubp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fld st(1)
        fmul st, st(2)
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x10]
        fmulp 
        fcom dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jnp public_62395bb
        fdivr dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [public_6257b44]
        mov eax, dword ptr ds : [public_6257b58]
        mov edx, esi
        mov ecx, 0x18
        and edx, 0xFFFF
        cmp edx, eax
        fld st(0)
        fmul st, st(3)
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x50]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x68]
        jg public_62393ce
        fld dword ptr ss : [esp+0x74]
        fsub dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [public_6257b50]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+0xC], edi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x7C]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [public_6257b50]
        mov eax, dword ptr ds : [public_6257b44]
        add edx, ecx
        inc word ptr ds : [public_6257b44]
        mov esi, dword ptr ds : [public_6257b44]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [public_6257b58]
        mov dword ptr ds : [public_6257b50], edx
        jmp public_62393d6
        public_62393ce : nop
        fstp st(0)
        fstp st(0)
        mov dword ptr ss : [esp+0x34], eax
        public_62393d6 : nop
        mov edx, dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0xBC], edx
        mov edx, esi
        and edx, 0xFFFF
        cmp edx, eax
        jg public_623944e
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [public_6257b50]
        mov edx, dword ptr ss : [esp+0xBC]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x78]
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+0x14], edx
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x54]
        fadd dword ptr ss : [esp+0x7C]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [public_6257b50]
        mov eax, dword ptr ds : [public_6257b58]
        add edx, ecx
        mov dword ptr ds : [public_6257b50], edx
        mov edx, dword ptr ds : [public_6257b44]
        inc word ptr ds : [public_6257b44]
        mov esi, dword ptr ds : [public_6257b44]
        jmp public_6239452
        public_623944e : nop
        fstp st(0)
        mov edx, eax
        public_6239452 : nop
        mov ebx, dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0xE8], ebx
        mov ebx, esi
        and ebx, 0xFFFF
        cmp ebx, eax
        jg public_62394d3
        fld dword ptr ss : [esp+0x80]
        fsub dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [public_6257b50]
        mov esi, dword ptr ss : [esp+0xE8]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x84]
        fsub dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+0x14], esi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x88]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [public_6257b50]
        mov eax, dword ptr ds : [public_6257b58]
        add esi, ecx
        mov ecx, dword ptr ds : [public_6257b44]
        inc word ptr ds : [public_6257b44]
        mov dword ptr ds : [public_6257b50], esi
        mov esi, dword ptr ds : [public_6257b44]
        jmp public_62394d7
        public_62394d3 : nop
        fstp st(0)
        mov ecx, eax
        public_62394d7 : nop
        mov ebx, dword ptr ss : [esp+0x6C]
        and esi, 0xFFFF
        fld dword ptr ss : [esp+0x60]
        cmp esi, eax
        mov dword ptr ss : [esp+0xA0], ebx
        jg public_6239546
        fld dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [public_6257b50]
        mov esi, ebx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x84]
        fadd dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+0x14], esi
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x88]
        fadd dword ptr ss : [esp+0x54]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        mov edi, dword ptr ds : [public_6257b50]
        mov eax, dword ptr ds : [public_6257b44]
        add edi, 0x18
        inc word ptr ds : [public_6257b44]
        mov dword ptr ds : [public_6257b50], edi
        jmp public_6239548
        public_6239546 : nop
        fstp st(0)
        public_6239548 : nop
        mov edi, dword ptr ds : [public_6257b5c]
        xor esi, esi
        mov si, word ptr ds : [public_6257b46]
        add esi, 5
        cmp esi, edi
        jg public_62395c1
        mov esi, dword ptr ds : [public_6257b54]
        mov word ptr ds : [esi], ax
        mov eax, dword ptr ds : [public_6257b54]
        mov word ptr ds : [eax+2], cx
        mov eax, dword ptr ds : [public_6257b54]
        mov word ptr ds : [eax+4], dx
        mov eax, dword ptr ds : [public_6257b54]
        mov word ptr ds : [eax+6], dx
        mov edx, dword ptr ds : [public_6257b54]
        mov word ptr ds : [edx+8], cx
        mov eax, dword ptr ds : [public_6257b54]
        mov cx, word ptr ss : [esp+0x34]
        mov word ptr ds : [eax+0xA], cx
        mov edx, dword ptr ds : [public_6257b54]
        add word ptr ds : [public_6257b46], 6
        add edx, 0xC
        add word ptr ds : [public_6257b4c], 2
        mov dword ptr ds : [public_6257b54], edx
        jmp public_62395c1
        public_62395bb : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_62395c1 : nop
        mov edx, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x70], eax
        jne public_6238c48
        public_62395da : nop
        mov ecx, dword ptr ss : [esp+0x184]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x180
        ret 
        UNREACHABLE_TRAP(0x6238a70)
    }
}

#undef public_6238af4
#undef public_6238af9
#undef public_6238bbe
#undef public_6238bda
#undef public_6238bfa
#undef public_6238c48
#undef public_6238dc9
#undef public_6238def
#undef public_6238ea9
#undef public_6238ecb
#undef public_6238f31
#undef public_6238f46
#undef public_6239008
#undef public_6239024
#undef public_6239088
#undef public_62390cc
#undef public_62391a2
#undef public_6239237
#undef public_6239295
#undef public_62392a1
#undef public_62393ce
#undef public_62393d6
#undef public_623944e
#undef public_6239452
#undef public_62394d3
#undef public_62394d7
#undef public_6239546
#undef public_6239548
#undef public_62395bb
#undef public_62395c1
#undef public_62395da
