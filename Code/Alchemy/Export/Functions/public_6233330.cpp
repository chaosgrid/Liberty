#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6206c70);
CLANG_FORWARD_PROC_SYMBOL(public_6208a40);
CLANG_FORWARD_PROC_SYMBOL(public_622d2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6233330);
CLANG_FORWARD_PROC_SYMBOL(public_6234000);
CLANG_FORWARD_PROC_SYMBOL(public_6234020);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6244f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6249bd6);

#define public_62333b5 _public_62333b5
#define public_62333ba _public_62333ba
#define public_6233467 _public_6233467
#define public_6233483 _public_6233483
#define public_62334e2 _public_62334e2
#define public_623367f _public_623367f
#define public_62336a5 _public_62336a5
#define public_62336db _public_62336db
#define public_62337a5 _public_62337a5
#define public_62337c9 _public_62337c9
#define public_6233837 _public_6233837
#define public_623384c _public_623384c
#define public_6233909 _public_6233909
#define public_623392a _public_623392a
#define public_6233b76 _public_6233b76
#define public_6233b7e _public_6233b7e
#define public_6233c15 _public_6233c15
#define public_6233c19 _public_6233c19
#define public_6233cb0 _public_6233cb0
#define public_6233cb4 _public_6233cb4
#define public_6233d1f _public_6233d1f
#define public_6233d25 _public_6233d25
#define public_6233d98 _public_6233d98
#define public_6233db1 _public_6233db1

PROC_DECLARE(0x6233330, internal_6233330, public_6233330);
extern "C" NAKED register_t __cdecl internal_6233330()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6249bd6 @0x6233332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249bd6
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x130
        push ebx
        mov ebx, dword ptr ds : [public_62578f8]
        push ebp
        mov ebp, ecx
        push esi
        lea eax, ss:[esp+0x40]
        lea esi, ss:[ebp+0xD8]
        push edi
        inc ebx
        push eax
        mov ecx, esi
        mov dword ptr ds : [public_62578f8], ebx
        call public_6234000
        lea ecx, ss:[esp+0x90]
        mov dword ptr ss : [esp+0x148], 0
        push ecx
        mov ecx, esi
        call public_6234020
        mov ecx, dword ptr ss : [ebp+0xD0]
        mov eax, 1
        cmp ecx, eax
        mov byte ptr ss : [esp+0x148], al
        je public_62333b5
        mov edx, dword ptr ss : [ebp+0xF0]
        mov byte ptr ss : [esp+0x26], al
        mov ecx, dword ptr ds : [edx+0x60]
        and ecx, 8
        cmp cl, 8
        jne public_62333ba
        public_62333b5 : nop
        mov byte ptr ss : [esp+0x26], 0
        public_62333ba : nop
        mov edx, dword ptr ss : [ebp+0xF0]
        lea ecx, ss:[esp+0xE0]
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 0x10
        cmp al, 0x10
        sete byte ptr ss : [esp+0x27]
        call public_6206c70
        lea ecx, ss:[esp+0x8C]
        lea edx, ss:[esp+0x110]
        push ecx
        push edx
        lea ecx, ss:[ebp+0x4C]
        mov dword ptr ss : [esp+0x114], 0
        mov dword ptr ss : [esp+0x110], 0
        mov dword ptr ss : [esp+0x10C], 0
        call public_622d2e0
        mov ecx, 0xC
        mov esi, eax
        mov eax, dword ptr ss : [ebp+0xF0]
        lea edi, ss:[esp+0xE0]
        rep movsd
        lea esi, ss:[ebp+0xBC]
        mov ecx, 5
        lea edi, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x94], 0xFFFFFFFF
        rep movsd
        mov eax, dword ptr ds : [eax+0x60]
        mov ecx, eax
        and ecx, 0x1000
        cmp ecx, 0x1000
        jne public_6233467
        fld dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x58], edx
        public_6233467 : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_6233483
        fld dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ss : [esp+0x64]
        fstp dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x5C], eax
        public_6233483 : nop
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC8], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xCC], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov dword ptr ss : [esp+0xD0], edx
        mov edx, dword ptr ss : [ebp+0x90]
        mov eax, dword ptr ds : [eax+0x5C]
        push edx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0xB8]
        cmp eax, ecx
        je public_6233db1
        public_62334e2 : nop
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        mov eax, dword ptr ds : [eax+0x70]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x78]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ss : [esp+0xB8]
        fmul dword ptr ds : [public_624bab8]
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jnp public_6233d98
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jnp public_6233d98
        mov ecx, dword ptr ss : [esp+0x44]
        lea eax, ds:[ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x18]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], edx
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], eax
        lea edx, ds:[ecx+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x80], eax
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x84], eax
        mov edx, dword ptr ds : [edx+8]
        faddp 
        mov dword ptr ss : [esp+0x88], edx
        mov edx, 0x5F3759DF
        fst dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        sar eax, 1
        sub edx, eax
        mov dword ptr ss : [esp+0x10], edx
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
        jp public_623367f
        fstp st(0)
        fld dword ptr ss : [esp+0x80]
        fchs 
        fld st(0)
        fmul st, st(1)
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        fcomp dword ptr ds : [public_624eb6c]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_62336a5
        fld dword ptr ds : [public_624bac4]
        fsub dword ptr ss : [esp+0x84]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb6c]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_62336a5
        fld dword ptr ss : [esp+0x88]
        fchs 
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_624eb6c]
        fnstsw ax
        test ah, 0x41
        fstp st(0)
        jp public_62336a5
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0
        jmp public_62336a5
        public_623367f : nop
        fdivr dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        public_62336a5 : nop
        add ecx, 0xC
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x48], eax
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x50], eax
        mov al, byte ptr ss : [esp+0x27]
        test al, al
        je public_623384c
        mov eax, dword ptr ds : [public_6257b38]
        test eax, eax
        jne public_62336db
        call public_623e830
        mov dword ptr ds : [public_6257b38], eax
        public_62336db : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC8]
        push edx
        lea edx, ss:[esp+0xE4]
        push edx
        lea edx, ss:[esp+0xDC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0xDC]
        fsub dword ptr ss : [esp+0x50]
        sub esp, 0xC
        lea ecx, ss:[esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xE4]
        fsub dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xE0]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        mov ecx, 0x5F3759DF
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
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
        jp public_62337a5
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        jmp public_62337c9
        public_62337a5 : nop
        fdivr dword ptr ds : [public_624bac4]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        public_62337c9 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fabs 
        fsubr qword ptr ds : [public_624c370]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624e474]
        fnstsw ax
        and eax, 0x4100
        je public_6233d98
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_624cddc]
        fnstsw ax
        and eax, 0x4100
        jne public_6233837
        fld dword ptr ds : [public_624e474]
        fsub dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_624e470]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        public_6233837 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_624e478]
        fnstsw ax
        test ah, 0x41
        jnp public_6233d98
        public_623384c : nop
        mov edx, dword ptr ss : [ebp+0xF0]
        push edi
        mov eax, dword ptr ds : [edx+0x74]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624babc]
        mov esi, eax
        call public_6246188
        shl eax, 0x18
        or esi, eax
        mov al, byte ptr ss : [esp+0x26]
        test al, al
        je public_623392a
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edi
        push edx
        mov eax, dword ptr ds : [eax+0x7C]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [esp+0xC4], 0
        dec eax
        mov dword ptr ss : [esp+0xC0], eax
        fimul dword ptr ss : [esp+0xC0]
        call public_6246188
        cmp eax, dword ptr ss : [esp+0x94]
        je public_623392a
        lea ecx, ss:[esp+0x54]
        mov dword ptr ss : [esp+0x94], eax
        push ecx
        push eax
        lea ecx, ss:[ebp+0xB4]
        call public_6244f30
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 0x1000
        cmp edx, 0x1000
        jne public_6233909
        fld dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x60], ecx
        public_6233909 : nop
        mov edx, dword ptr ds : [eax+0x60]
        and edx, 0x2000
        cmp edx, 0x2000
        jne public_623392a
        fld dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x64], eax
        public_623392a : nop
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x84]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x88]
        fsubp 
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x88]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x2C], ecx
        fsubp 
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x84]
        fmul dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, 0x5F3759DF
        fsubp 
        fstp dword ptr ss : [esp+0x7C]
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x34], eax
        faddp 
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x78]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_624bab8]
        fsubr dword ptr ds : [public_624bac0]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x30]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(2)
        fst dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xA4]
        mov dword ptr ss : [esp+0x68], eax
        fsubp 
        fstp dword ptr ss : [esp+0xA8]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        mov ecx, dword ptr ss : [esp+0xA8]
        mov dword ptr ss : [esp+0x6C], ecx
        fsubp 
        fstp dword ptr ss : [esp+0xAC]
        mov edx, dword ptr ss : [esp+0xAC]
        fmul dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x70], edx
        sub esp, 0xC
        mov edi, dword ptr ss : [esp+0x50]
        add edi, 0x30
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edi], eax
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi+4], ecx
        lea ecx, ss:[esp+0xA4]
        mov dword ptr ds : [edi+8], edx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0xB0]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ss : [esp+0x34]
        fst dword ptr ss : [esp+0x7C]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x78]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x74]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x6C]
        fsub dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [public_6257af0]
        mov eax, dword ptr ds : [public_6257b04]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x5C]
        fld dword ptr ss : [esp+0x60]
        mov edx, ecx
        and edx, 0xFFFF
        cmp edx, eax
        mov edx, 0x18
        jg public_6233b76
        mov eax, dword ptr ds : [public_6257afc]
        fld st(4)
        fadd dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+0xC], esi
        fstp dword ptr ds : [eax]
        fld st(3)
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [eax+4]
        fld st(2)
        fadd dword ptr ss : [esp+0x50]
        fstp dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_6257afc]
        mov eax, dword ptr ds : [public_6257af0]
        add ecx, edx
        inc word ptr ds : [public_6257af0]
        mov dword ptr ds : [public_6257afc], ecx
        mov ecx, dword ptr ds : [public_6257af0]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_6257b04]
        jmp public_6233b7e
        public_6233b76 : nop
        fstp st(0)
        fstp st(0)
        mov dword ptr ss : [esp+0x10], eax
        public_6233b7e : nop
        fld dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x9C]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0xB4], edi
        mov edi, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0xBC], edi
        mov edi, ecx
        and edi, 0xFFFF
        fstp dword ptr ss : [esp+0x14]
        cmp edi, eax
        jg public_6233c15
        fld dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [public_6257afc]
        mov ecx, dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x98]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0xB4]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0xBC]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], ecx
        fstp dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6257afc]
        mov ebx, dword ptr ds : [public_6257af0]
        mov eax, dword ptr ds : [public_6257b04]
        add ecx, edx
        inc word ptr ds : [public_6257af0]
        mov dword ptr ds : [public_6257afc], ecx
        mov ecx, dword ptr ds : [public_6257af0]
        jmp public_6233c19
        public_6233c15 : nop
        fstp st(0)
        mov ebx, eax
        public_6233c19 : nop
        fld dword ptr ss : [esp+0x9C]
        mov edi, dword ptr ss : [esp+0x60]
        fadd dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0xA0]
        fadd dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0xB0], edi
        mov edi, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x8C], edi
        mov edi, ecx
        and edi, 0xFFFF
        fstp dword ptr ss : [esp+0x14]
        cmp edi, eax
        jg public_6233cb0
        fld dword ptr ss : [esp+0x98]
        mov eax, dword ptr ds : [public_6257afc]
        mov ecx, dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x48]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [esp+0xB0]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], ecx
        fstp dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [public_6257afc]
        mov edi, dword ptr ds : [public_6257af0]
        mov eax, dword ptr ds : [public_6257b04]
        add ecx, edx
        inc word ptr ds : [public_6257af0]
        mov dword ptr ds : [public_6257afc], ecx
        mov ecx, dword ptr ds : [public_6257af0]
        jmp public_6233cb4
        public_6233cb0 : nop
        fstp st(0)
        mov edi, eax
        public_6233cb4 : nop
        and ecx, 0xFFFF
        cmp ecx, eax
        jg public_6233d1f
        fld dword ptr ss : [esp+0x64]
        sub esp, 8
        mov ecx, dword ptr ds : [public_6257afc]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x58]
        push esi
        fsub st, st(1)
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x64]
        fsub st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x60]
        fsub st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6208a40
        mov edx, dword ptr ds : [public_6257afc]
        mov eax, dword ptr ds : [public_6257af0]
        add edx, 0x18
        inc word ptr ds : [public_6257af0]
        mov dword ptr ds : [public_6257afc], edx
        jmp public_6233d25
        public_6233d1f : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_6233d25 : nop
        mov ecx, dword ptr ds : [public_6257b08]
        xor edx, edx
        mov dx, word ptr ds : [public_6257af2]
        add edx, 5
        cmp edx, ecx
        jg public_6233d98
        mov ecx, dword ptr ds : [public_6257b00]
        mov word ptr ds : [ecx], ax
        mov edx, dword ptr ds : [public_6257b00]
        mov word ptr ds : [edx+2], di
        mov eax, dword ptr ds : [public_6257b00]
        mov word ptr ds : [eax+4], bx
        mov ecx, dword ptr ds : [public_6257b00]
        mov word ptr ds : [ecx+6], bx
        mov edx, dword ptr ds : [public_6257b00]
        mov cx, word ptr ss : [esp+0x10]
        mov word ptr ds : [edx+8], di
        mov eax, dword ptr ds : [public_6257b00]
        mov word ptr ds : [eax+0xA], cx
        mov edx, dword ptr ds : [public_6257b00]
        add word ptr ds : [public_6257af2], 6
        add edx, 0xC
        add word ptr ds : [public_6257af8], 2
        mov dword ptr ds : [public_6257b00], edx
        public_6233d98 : nop
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+0x90]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x44], eax
        jne public_62334e2
        public_6233db1 : nop
        mov ecx, dword ptr ss : [esp+0x140]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x13C
        ret 
        UNREACHABLE_TRAP(0x6233330)
    }
}

#undef public_62333b5
#undef public_62333ba
#undef public_6233467
#undef public_6233483
#undef public_62334e2
#undef public_623367f
#undef public_62336a5
#undef public_62336db
#undef public_62337a5
#undef public_62337c9
#undef public_6233837
#undef public_623384c
#undef public_6233909
#undef public_623392a
#undef public_6233b76
#undef public_6233b7e
#undef public_6233c15
#undef public_6233c19
#undef public_6233cb0
#undef public_6233cb4
#undef public_6233d1f
#undef public_6233d25
#undef public_6233d98
#undef public_6233db1
