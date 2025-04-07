#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6208640);
CLANG_FORWARD_PROC_SYMBOL(public_6208a40);
CLANG_FORWARD_PROC_SYMBOL(public_622c500);
CLANG_FORWARD_PROC_SYMBOL(public_622d260);
CLANG_FORWARD_PROC_SYMBOL(public_622d280);
CLANG_FORWARD_PROC_SYMBOL(public_622d2e0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);
CLANG_FORWARD_PROC_SYMBOL(public_6241070);
CLANG_FORWARD_PROC_SYMBOL(public_6241180);
CLANG_FORWARD_PROC_SYMBOL(public_6244f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6249536);

#define public_622c593 _public_622c593
#define public_622c598 _public_622c598
#define public_622c64c _public_622c64c
#define public_622c686 _public_622c686
#define public_622c6a2 _public_622c6a2
#define public_622c6dd _public_622c6dd
#define public_622c6e1 _public_622c6e1
#define public_622c819 _public_622c819
#define public_622c846 _public_622c846
#define public_622c8de _public_622c8de
#define public_622c9a8 _public_622c9a8
#define public_622c9cc _public_622c9cc
#define public_622ca43 _public_622ca43
#define public_622ca58 _public_622ca58
#define public_622cb18 _public_622cb18
#define public_622cb39 _public_622cb39
#define public_622cdd7 _public_622cdd7
#define public_622cde3 _public_622cde3
#define public_622ce74 _public_622ce74
#define public_622ce78 _public_622ce78
#define public_622cf03 _public_622cf03
#define public_622cf07 _public_622cf07
#define public_622cf6d _public_622cf6d
#define public_622cfe0 _public_622cfe0
#define public_622cff6 _public_622cff6
#define public_622d09b _public_622d09b

PROC_DECLARE(0x622c500, internal_622c500, public_622c500);
extern "C" NAKED register_t __cdecl internal_622c500()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249536 @0x622c502*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249536
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x184
        push ebx
        mov ebx, dword ptr ds : [public_62578fc]
        push ebp
        mov ebp, dword ptr ss : [esp+0x19C]
        push esi
        lea eax, ss:[esp+0x34]
        lea esi, ss:[ebp+0xD8]
        push edi
        inc ebx
        push eax
        mov ecx, esi
        mov dword ptr ds : [public_62578fc], ebx
        call public_622d260
        lea ecx, ss:[esp+0x6C]
        xor edi, edi
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1A0], edi
        call public_622d280
        mov edx, dword ptr ss : [esp+0x6C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, 1
        cmp edx, ecx
        mov byte ptr ss : [esp+0x19C], al
        je public_622d09b
        cmp dword ptr ss : [ebp+0xD0], eax
        je public_622c593
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov byte ptr ss : [esp+0x17], al
        mov edx, dword ptr ds : [ecx+0x60]
        and edx, 8
        cmp dl, 8
        jne public_622c598
        public_622c593 : nop
        mov byte ptr ss : [esp+0x17], 0
        public_622c598 : nop
        mov eax, dword ptr ss : [ebp+0xAC]
        lea edx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x78], edi
        mov dword ptr ss : [esp+0x74], edi
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xD0]
        mov eax, dword ptr ss : [ebp+0xAC]
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xD4]
        mov eax, dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x78]
        push eax
        push ecx
        push 4
        mov ecx, offset public_6257a74
        call public_6240f50
        test al, al
        je public_622d09b
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 0x40
        cmp al, 0x40
        sete bl
        test bl, bl
        mov byte ptr ss : [esp+0x1F], bl
        je public_622c64c
        lea ecx, ss:[esp+0x7C]
        lea edx, ss:[esp+0xB4]
        push ecx
        push edx
        lea ecx, ss:[ebp+0x4C]
        call public_622d2e0
        mov ecx, 0xC
        mov esi, eax
        mov eax, dword ptr ds : [public_6257908]
        lea edi, ss:[esp+0x164]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x134], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x138], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x13C], edx
        public_622c64c : nop
        lea esi, ss:[ebp+0xBC]
        mov ecx, 5
        lea edi, ss:[esp+0x40]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [ecx+0x60]
        mov edx, eax
        and edx, 0x1000
        cmp edx, 0x1000
        jne public_622c686
        fld dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x44], edx
        public_622c686 : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_622c6a2
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x48], eax
        public_622c6a2 : nop
        mov eax, dword ptr ss : [ebp+0x90]
        mov ecx, dword ptr ds : [ecx+0x5C]
        push eax
        mov eax, dword ptr ss : [ebp+0x8C]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x8C], 0xFFFFFFFF
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0xA4]
        cmp eax, ecx
        je public_622cff6
        jmp public_622c6e1
        public_622c6dd : nop
        mov bl, byte ptr ss : [esp+0x1F]
        public_622c6e1 : nop
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [ecx+0x70]
        mov ecx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [ebp+0xF0]
        push esi
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edx+0x78]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fmul dword ptr ss : [esp+0xA4]
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
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_622cfe0
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624e47c]
        fnstsw ax
        test ah, 5
        jnp public_622cfe0
        mov eax, dword ptr ss : [esp+0x38]
        add eax, 0xC
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x24], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [ecx+0x8C]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x20]
        test al, al
        jne public_622c819
        mov eax, dword ptr ss : [ebp+0xF0]
        lea edx, ss:[esp+0xB4]
        push edx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov eax, dword ptr ds : [eax+0x8C]
        push esi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xD8]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0xDC]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0xE0]
        fstp dword ptr ss : [esp+0x28]
        jmp public_622c846
        public_622c819 : nop
        lea ecx, ss:[esp+0xB4]
        call public_6206c70
        mov dword ptr ss : [esp+0xE0], 0
        mov dword ptr ss : [esp+0xDC], 0
        mov dword ptr ss : [esp+0xD8], 0
        public_622c846 : nop
        test bl, bl
        je public_622ca58
        fld dword ptr ss : [esp+0xB8]
        fld dword ptr ss : [esp+0xC4]
        fld dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0xB4]
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0xC0]
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0x98]
        fmul st, st(2)
        fld st(1)
        fmul st, st(4)
        mov eax, dword ptr ds : [public_6257ac0]
        test eax, eax
        fsubp 
        fstp dword ptr ss : [esp+0xA8]
        fmul st, st(3)
        fxch 
        fmul dword ptr ss : [esp+0x94]
        fsubp 
        fstp dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0x94]
        fld dword ptr ss : [esp+0x98]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+0xB0]
        fstp st(0)
        jne public_622c8de
        call public_623e830
        mov dword ptr ds : [public_6257ac0], eax
        public_622c8de : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x134]
        push edx
        lea edx, ss:[esp+0x168]
        push edx
        lea edx, ss:[esp+0x154]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x154]
        fsub dword ptr ss : [esp+0x28]
        sub esp, 0xC
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x15C]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x158]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        mov ecx, 0x5F3759DF
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
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
        jp public_622c9a8
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0
        jmp public_622c9cc
        public_622c9a8 : nop
        fdivr dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        public_622c9cc : nop
        fstp st(0)
        fld dword ptr ss : [esp+0xA8]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0xB0]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0xAC]
        faddp 
        fabs 
        fsubr qword ptr ds : [public_624c370]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624e474]
        fnstsw ax
        and eax, 0x4100
        je public_622cfe0
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624cddc]
        fnstsw ax
        and eax, 0x4100
        jne public_622ca43
        fld dword ptr ds : [public_624e474]
        fsub dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624e470]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        public_622ca43 : nop
        fld dword ptr ss : [esp+0x3C]
        fcomp dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_622cfe0
        public_622ca58 : nop
        mov edx, dword ptr ss : [ebp+0xF0]
        push esi
        mov eax, dword ptr ds : [edx+0x74]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov edi, eax
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_624babc]
        call public_6246188
        shl eax, 0x18
        or edi, eax
        mov al, byte ptr ss : [esp+0x17]
        test al, al
        je public_622cb39
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        push esi
        push edx
        mov eax, dword ptr ds : [eax+0x84]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xD0]
        dec eax
        mov dword ptr ss : [esp+0xE8], 0
        mov dword ptr ss : [esp+0xE4], eax
        fimul dword ptr ss : [esp+0xE4]
        call public_6246188
        cmp eax, dword ptr ss : [esp+0x80]
        je public_622cb39
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x80], eax
        push ecx
        push eax
        lea ecx, ss:[ebp+0xB4]
        call public_6244f30
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 0x1000
        cmp edx, 0x1000
        jne public_622cb18
        fld dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x4C], ecx
        public_622cb18 : nop
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 0x2000
        cmp edx, 0x2000
        jne public_622cb39
        fld dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x50], eax
        public_622cb39 : nop
        fld dword ptr ss : [esp+0xB4]
        fld dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0xCC]
        fmul dword ptr ss : [esp+0x70]
        sub esp, 0xC
        lea ecx, ss:[esp+0x6C]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0xB8]
        fld dword ptr ss : [esp+0xC4]
        fld dword ptr ss : [esp+0xD0]
        fmul dword ptr ss : [esp+0x18]
        sub esp, 0xC
        lea ecx, ss:[esp+0x60]
        fstp dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        sub esp, 0xC
        lea ecx, ss:[esp+0x104]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x100]
        fsub dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x128]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x108]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x104]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x28]
        sub esp, 0xC
        lea ecx, ss:[esp+0x164]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x160]
        fsub dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x110]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x168]
        fsub dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x164]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        sub esp, 0xC
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x70]
        lea ecx, ss:[esp+0x11C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x118]
        fadd dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        lea ecx, ss:[esp+0xF8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x120]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x11C]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x28]
        sub esp, 0xC
        lea ecx, ss:[esp+0x14C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x148]
        fadd dword ptr ss : [esp+0x5C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x134]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x150]
        fadd dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14C]
        fadd dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        mov ecx, dword ptr ds : [public_6257a78]
        mov eax, dword ptr ds : [public_6257a8c]
        fld dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x130]
        fld dword ptr ss : [esp+0x12C]
        mov edx, ecx
        and edx, 0xFFFF
        cmp edx, eax
        mov edx, 0x18
        jg public_622cdd7
        mov eax, dword ptr ds : [public_6257a84]
        fld dword ptr ss : [esp+0x128]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0xC], edi
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_6257a84]
        mov eax, dword ptr ds : [public_6257a78]
        add ecx, edx
        inc word ptr ds : [public_6257a78]
        mov dword ptr ds : [public_6257a84], ecx
        mov ecx, dword ptr ds : [public_6257a78]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6257a8c]
        jmp public_622cde3
        public_622cdd7 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        mov dword ptr ss : [esp+0x18], eax
        public_622cde3 : nop
        mov esi, dword ptr ss : [esp+0xF4]
        mov dword ptr ss : [esp+0x84], esi
        mov esi, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x90], esi
        mov esi, dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0xF0]
        mov dword ptr ss : [esp+0xA0], esi
        mov esi, ecx
        and esi, 0xFFFF
        cmp esi, eax
        jg public_622ce74
        mov eax, dword ptr ds : [public_6257a84]
        mov ecx, dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0xEC]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x90]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ds : [public_6257a84]
        mov ebx, dword ptr ds : [public_6257a78]
        mov eax, dword ptr ds : [public_6257a8c]
        add ecx, edx
        inc word ptr ds : [public_6257a78]
        mov dword ptr ds : [public_6257a84], ecx
        mov ecx, dword ptr ds : [public_6257a78]
        jmp public_622ce78
        public_622ce74 : nop
        fstp st(0)
        mov ebx, eax
        public_622ce78 : nop
        mov esi, dword ptr ss : [esp+0x10C]
        mov dword ptr ss : [esp+0x88], esi
        mov esi, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x8C], esi
        mov esi, dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x108]
        mov dword ptr ss : [esp+0x7C], esi
        mov esi, ecx
        and esi, 0xFFFF
        cmp esi, eax
        jg public_622cf03
        mov eax, dword ptr ds : [public_6257a84]
        mov ecx, dword ptr ss : [esp+0x88]
        fld dword ptr ss : [esp+0x104]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x7C]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0xC], edi
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ds : [public_6257a84]
        mov esi, dword ptr ds : [public_6257a78]
        mov eax, dword ptr ds : [public_6257a8c]
        add ecx, edx
        inc word ptr ds : [public_6257a78]
        mov dword ptr ds : [public_6257a84], ecx
        mov ecx, dword ptr ds : [public_6257a78]
        jmp public_622cf07
        public_622cf03 : nop
        fstp st(0)
        mov esi, eax
        public_622cf07 : nop
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_622cf6d
        fld dword ptr ss : [esp+0x50]
        sub esp, 8
        mov ecx, dword ptr ds : [public_6257a84]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x12C]
        push edi
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x138]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x134]
        fstp dword ptr ss : [esp]
        call public_6208a40
        mov edx, dword ptr ds : [public_6257a84]
        mov eax, dword ptr ds : [public_6257a78]
        add edx, 0x18
        inc word ptr ds : [public_6257a78]
        mov dword ptr ds : [public_6257a84], edx
        public_622cf6d : nop
        mov ecx, dword ptr ds : [public_6257a90]
        xor edx, edx
        mov dx, word ptr ds : [public_6257a7a]
        add edx, 5
        cmp edx, ecx
        jg public_622cfe0
        mov ecx, dword ptr ds : [public_6257a88]
        mov word ptr ds : [ecx], ax
        mov edx, dword ptr ds : [public_6257a88]
        mov word ptr ds : [edx+2], si
        mov eax, dword ptr ds : [public_6257a88]
        mov word ptr ds : [eax+4], bx
        mov ecx, dword ptr ds : [public_6257a88]
        mov word ptr ds : [ecx+6], bx
        mov edx, dword ptr ds : [public_6257a88]
        mov cx, word ptr ss : [esp+0x18]
        mov word ptr ds : [edx+8], si
        mov eax, dword ptr ds : [public_6257a88]
        mov word ptr ds : [eax+0xA], cx
        mov edx, dword ptr ds : [public_6257a88]
        add word ptr ds : [public_6257a7a], 6
        add edx, 0xC
        add word ptr ds : [public_6257a80], 2
        mov dword ptr ds : [public_6257a88], edx
        public_622cfe0 : nop
        mov edx, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x38], eax
        jne public_622c6dd
        public_622cff6 : nop
        mov ecx, offset public_6257a74
        call public_6241070
        test eax, eax
        je public_622d09b
        mov edi, dword ptr ds : [public_62578e8]
        mov eax, dword ptr ds : [public_6257bc0]
        inc edi
        mov dword ptr ds : [public_62578e8], edi
        mov edx, dword ptr ss : [ebp+0xF0]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [edx+0x68]
        push edx
        push 0x13
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ds : [edx+0x6C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x14
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_6257bc0]
        mov edx, dword ptr ss : [ebp+0xBC]
        push edx
        push 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x108]
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x40]
        add ebp, 0x4C
        lea edx, ss:[esp+0xB4]
        push ebp
        push edx
        mov ecx, eax
        call public_6208640
        mov eax, dword ptr ds : [public_6257bc0]
        lea edx, ss:[esp+0xB4]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x7C]
        mov ecx, offset public_6257a74
        call public_6241180
        public_622d09b : nop
        mov ecx, dword ptr ss : [esp+0x194]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x190
        ret 4
        UNREACHABLE_TRAP(0x622c500)
    }
}

#undef public_622c593
#undef public_622c598
#undef public_622c64c
#undef public_622c686
#undef public_622c6a2
#undef public_622c6dd
#undef public_622c6e1
#undef public_622c819
#undef public_622c846
#undef public_622c8de
#undef public_622c9a8
#undef public_622c9cc
#undef public_622ca43
#undef public_622ca58
#undef public_622cb18
#undef public_622cb39
#undef public_622cdd7
#undef public_622cde3
#undef public_622ce74
#undef public_622ce78
#undef public_622cf03
#undef public_622cf07
#undef public_622cf6d
#undef public_622cfe0
#undef public_622cff6
#undef public_622d09b
