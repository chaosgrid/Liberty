#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_54e130);
CLANG_FORWARD_PROC_SYMBOL(public_54e900);
CLANG_FORWARD_PROC_SYMBOL(public_54f800);
CLANG_FORWARD_PROC_SYMBOL(public_54f830);
CLANG_FORWARD_PROC_SYMBOL(public_54f960);
CLANG_FORWARD_PROC_SYMBOL(public_54f9c0);
CLANG_FORWARD_PROC_SYMBOL(public_54f9f0);
CLANG_FORWARD_PROC_SYMBOL(public_552b10);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_54eb5b _public_54eb5b
#define public_54ebd9 _public_54ebd9
#define public_54ece0 _public_54ece0
#define public_54ed10 _public_54ed10
#define public_54ed40 _public_54ed40
#define public_54ed70 _public_54ed70
#define public_54edb1 _public_54edb1
#define public_54edc9 _public_54edc9
#define public_54eddf _public_54eddf
#define public_54edf6 _public_54edf6
#define public_54eebc _public_54eebc
#define public_54ef59 _public_54ef59
#define public_54ef91 _public_54ef91
#define public_54efb2 _public_54efb2
#define public_54efbe _public_54efbe
#define public_54efc9 _public_54efc9
#define public_54eff8 _public_54eff8
#define public_54f063 _public_54f063
#define public_54f0a8 _public_54f0a8
#define public_54f1ad _public_54f1ad
#define public_54f1e1 _public_54f1e1
#define public_54f214 _public_54f214
#define public_54f234 _public_54f234
#define public_54f236 _public_54f236
#define public_54f23d _public_54f23d
#define public_54f27f _public_54f27f
#define public_54f2a2 _public_54f2a2
#define public_54f2b5 _public_54f2b5
#define public_54f2d5 _public_54f2d5
#define public_54f2ed _public_54f2ed
#define public_54f2f4 _public_54f2f4
#define public_54f302 _public_54f302
#define public_54f319 _public_54f319
#define public_54f327 _public_54f327
#define public_54f333 _public_54f333
#define public_54f36b _public_54f36b
#define public_54f36d _public_54f36d
#define public_54f384 _public_54f384
#define public_54f430 _public_54f430
#define public_54f45c _public_54f45c
#define public_54f4a4 _public_54f4a4
#define public_54f550 _public_54f550
#define public_54f5c5 _public_54f5c5
#define public_54f5dd _public_54f5dd
#define public_54f5e4 _public_54f5e4
#define public_54f5f2 _public_54f5f2
#define public_54f609 _public_54f609
#define public_54f617 _public_54f617
#define public_54f623 _public_54f623
#define public_54f659 _public_54f659
#define public_54f668 _public_54f668
#define public_54f700 _public_54f700
#define public_54f72c _public_54f72c
#define public_54f7a6 _public_54f7a6
#define public_54f7d3 _public_54f7d3

PROC_DECLARE(0x54e900, internal_54e900, public_54e900);
extern "C" NAKED register_t __cdecl internal_54e900()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xF0
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x100]
        mov eax, dword ptr ds : [edi]
        push edi
        mov esi, ecx
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x70], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x74], edx
        mov eax, dword ptr ds : [eax+8]
        push edi
        mov dword ptr ss : [esp+0x7C], eax
        call dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+0x9C]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x9C]
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(3)
        fld dword ptr ss : [esp+0x84]
        fadd st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x80]
        fadd st, st(1)
        fstp dword ptr ss : [esp+4]
        fstp st(0)
        fld dword ptr ss : [esp+0x7C]
        fadd st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        call public_422b80
        fld dword ptr ss : [esp+0x1C]
        lea ebx, ds:[esi+0x34]
        fmul dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ebx+4]
        fsubp 
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ebx+8]
        fsubp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ebx]
        fsubp 
        fstp dword ptr ss : [esp+0x40]
        fld st(1)
        mov eax, 0x5F3759DF
        fmul st, st(2)
        mov ecx, ebx
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x40]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0xA0]
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], edx
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x38]
        fsubp 
        fstp dword ptr ss : [esp+0xA4]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xA4]
        fmul dword ptr ss : [esp+0x38]
        mov dword ptr ds : [ecx+4], eax
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp+0xA8]
        mov edx, dword ptr ss : [esp+0xA8]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [ebx+8]
        fld dword ptr ds : [ebx+4]
        mov ecx, 0x5F3759DF
        fld dword ptr ds : [ebx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        sar eax, 1
        fstp st(0)
        sub ecx, eax
        fstp st(0)
        mov dword ptr ss : [esp+0xC], ecx
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5c75e0]
        push 0x18
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x10]
        fld st(0)
        fmul dword ptr ds : [ebx]
        fstp dword ptr ds : [ebx]
        fld st(0)
        fmul dword ptr ds : [ebx+4]
        fstp dword ptr ds : [ebx+4]
        fmul dword ptr ds : [ebx+8]
        fstp dword ptr ds : [ebx+8]
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_54eb5b
        lea edx, ss:[esp+0x64]
        push edx
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        lea eax, ss:[esp+0xD4]
        push eax
        lea ecx, ss:[esp+0x4C]
        push ecx
        push ebx
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x90]
        push eax
        mov ecx, esi
        call public_54e130
        jmp public_54ebd9
        public_54eb5b : nop
        lea eax, ds:[esi+0x4C]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x6C], ecx
        mov edx, eax
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x7C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0x84], edx
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], ecx
        mov edx, eax
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC4], ecx
        mov dword ptr ss : [esp+0xC8], edx
        mov dword ptr ss : [esp+0xCC], eax
        public_54ebd9 : nop
        mov eax, dword ptr ds : [esi+0x20]
        xor ebx, ebx
        cmp eax, ebx
        je public_54f7d3
        fld dword ptr ds : [esi]
        mov cl, byte ptr ds : [edi+0xBC]
        fld st(0)
        mov edx, dword ptr ds : [public_5c6de0]
        fmul st, st(1)
        mov eax, dword ptr ds : [edx]
        push ebp
        mov ebp, dword ptr ds : [eax]
        fstp qword ptr ss : [esp+0x9C]
        mov byte ptr ss : [esp+0x1A], cl
        mov ecx, dword ptr ds : [edi]
        fstp st(0)
        push edi
        fld dword ptr ds : [esi+0x2C]
        fld st(0)
        fmulp 
        fld qword ptr ds : [public_5c89b8]
        fdiv st, st(1)
        fstp qword ptr ss : [esp+0xA8]
        fld qword ptr ss : [esp+0xA0]
        fsub st, st(1)
        fstp qword ptr ss : [esp+0xD8]
        fstp st(0)
        call dword ptr ds : [ecx+0x40]
        mov edx, dword ptr ds : [public_5c6de0]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ss : [ebp+0x7C]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        lea edx, ss:[esp+0x98]
        push edx
        mov dword ptr ss : [esp+0x9C], ebx
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x80
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x20]
        mov edi, dword ptr ds : [eax]
        push ebx
        call public_425640
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ebx
        push edx
        call dword ptr ds : [edi+0x108]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push 0xB
        push ebx
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov ebp, dword ptr ds : [edx]
        mov edi, offset public_5e09f0
        mov eax, 1
        lea esp, ss:[esp]
        public_54ece0 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebx
        push ebp
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_54ece0
        mov eax, dword ptr ds : [public_5c6de0]
        mov ebp, dword ptr ds : [eax]
        mov edi, offset public_5e0a28
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_54ed10 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push 1
        push ebp
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_54ed10
        mov eax, dword ptr ds : [public_5c6de0]
        mov ebp, dword ptr ds : [eax]
        mov edi, offset public_5e09c8
        mov eax, 0x8D
        lea esp, ss:[esp]
        public_54ed40 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_54ed40
        mov eax, dword ptr ds : [public_5c6de0]
        mov ebp, dword ptr ds : [eax]
        mov edi, offset public_5e0978
        mov eax, 0x89
        lea ebx, ds:[ebx]
        public_54ed70 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        cmp eax, ebx
        jne public_54ed70
        mov eax, dword ptr ds : [public_5c6d80]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [public_6797dc]
        cmp eax, ebx
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x10], ebx
        je public_54edb1
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [public_6797dc], ebx
        public_54edb1 : nop
        mov ecx, dword ptr ds : [public_6797e0]
        cmp ecx, ebx
        je public_54edc9
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+8]
        xor ecx, ecx
        mov dword ptr ds : [public_6797e0], ecx
        public_54edc9 : nop
        cmp edi, ebx
        je public_54eddf
        mov dword ptr ds : [public_6797dc], edi
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [public_6797e0]
        public_54eddf : nop
        cmp ebp, ebx
        je public_54edf6
        mov dword ptr ds : [public_6797e0], ebp
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [public_6797e0]
        public_54edf6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        lea edi, ds:[eax+eax*2]
        mov al, byte ptr ds : [public_679828]
        and al, 0xF8
        cmp edi, ebx
        mov dword ptr ds : [public_6797f4], ebx
        mov dword ptr ds : [public_6797d4], ebx
        mov dword ptr ds : [public_67982c], ebx
        mov byte ptr ds : [public_679828], al
        mov dword ptr ds : [public_679838], 0xFFFFFFFF
        mov dword ptr ds : [public_679834], 0
        mov dword ptr ds : [public_679830], 0
        mov dword ptr ds : [public_6797d0], 0x7FFFFFFF
        je public_54f72c
        and al, 0xF9
        mov dl, al
        shr dl, 1
        xor dl, al
        and dl, 1
/*FIXUP push offset public_6797e4 @0x54ee55*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797e4
        xor al, dl
        mov edx, dword ptr ds : [public_6797d8]
        push edi
        push edx
        mov dword ptr ds : [public_6797d0], 4
        mov byte ptr ds : [public_679828], al
        mov eax, dword ptr ds : [ecx]
        push ecx
        call dword ptr ds : [eax+0x14]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x1B], al
        je public_54f72c
        mov eax, dword ptr ds : [public_6797e8]
        mov ecx, dword ptr ds : [public_6797f0]
        push eax
        push ecx
        mov ecx, offset public_6797d0
        mov dword ptr ds : [public_6797f4], edi
        call public_54f830
        cmp dword ptr ds : [esi+0x14], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        jle public_54f384
        mov ebx, dword ptr ss : [esp+0x108]
        xor edi, edi
        public_54eebc : nop
        mov al, byte ptr ss : [esp+0x1A]
        test al, al
        mov ebp, dword ptr ss : [esp+0x10C]
        je public_54f0a8
        mov edx, dword ptr ds : [esi]
        push edx
        lea eax, ss:[esp+0xEC]
        push eax
        call dword ptr ds : [public_5c69c4]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0xC]
        add ecx, edi
        add esp, 8
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0xB0]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xB4]
        fld dword ptr ss : [esp+0x50]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xB4]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0xB8]
        mov edx, dword ptr ss : [esp+0xB8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_54ef59
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        add edx, edi
        push edx
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_54ef59
        mov eax, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+eax+0x14], 0
        jmp public_54f36d
        public_54ef59 : nop
        test ebx, ebx
        mov ecx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+ecx+0x14], 1
        je public_54efc9
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x54]
        push eax
        add ecx, edi
        push ebp
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x60], 0xBF800000
        call dword ptr ds : [edx+4]
        test al, al
        je public_54ef91
        mov edx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+edx+0x14], 0
        jmp public_54f36d
        public_54ef91 : nop
        fld dword ptr ss : [esp+0x54]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54efb2
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [edi+eax+0x1C]
        lea ecx, ds:[edi+eax]
        fcomp dword ptr ss : [esp+0x54]
        jmp public_54efbe
        public_54efb2 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+edi+0x1C]
        add ecx, edi
        fcomp dword ptr ds : [esi+0x1C]
        public_54efbe : nop
        fnstsw ax
        test ah, 0x41
        jne public_54efc9
        mov byte ptr ds : [ecx+0x14], 0
        public_54efc9 : nop
        mov edx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [edi+edx]
        lea ecx, ds:[edi+edx]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x50]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        public_54eff8 : nop
        mov al, byte ptr ds : [ecx+0x14]
        test al, al
        je public_54f36b
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [esp+0x74]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x78]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x7C]
        fxch st(2)
        fmul dword ptr ss : [esp+0x1C]
        fxch st(2)
        fmul dword ptr ss : [esp+0x24]
        faddp st(2), st
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_54f27f
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+4]
        fsubr dword ptr ds : [esi]
        fdiv dword ptr ds : [esi]
        fsubr dword ptr ds : [public_5c75dc]
        fcom dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_54f063
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_54f063 : nop
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [esi+0x30]
        fmulp 
        fmul dword ptr ds : [public_5c75e0]
        fadd dword ptr ds : [esi+0x30]
        fmul dword ptr ds : [esi]
        fld st(0)
        fmulp 
        fld qword ptr ss : [esp+0x9C]
        fsub st, st(1)
        fld st(2)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_54f234
        fld qword ptr ss : [esp+0x9C]
        fsub st, st(2)
        fdivrp 
        fstp dword ptr ds : [ecx+0x10]
        jmp public_54f23d
        public_54f0a8 : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [edi+eax]
        lea ecx, ds:[edi+eax]
        fsub dword ptr ss : [esp+0x48]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ss : [esp+0x4C]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ss : [esp+0x50]
        fld st(2)
        fmulp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fld qword ptr ss : [esp+0x9C]
        fadd qword ptr ds : [public_5c9ce8]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_54eff8
        mov byte ptr ds : [ecx+0x14], 1
        fstp st(0)
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xF4]
        push edx
        mov dword ptr ss : [esp+0x5C], ecx
        call dword ptr ds : [public_5c681c]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [eax]
        add esp, 4
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [esi+0xC]
        add eax, edi
        fstp dword ptr ss : [esp+0xE4]
        fxch 
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ss : [esp+0xBC]
        fadd dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0xE4]
        mov edx, dword ptr ss : [esp+0xC0]
        fadd dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0xC4]
        mov ecx, dword ptr ss : [esp+0xC4]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+edx+0x10], 0
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_54f1ad
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx]
        add edx, edi
        push edx
        call dword ptr ds : [eax]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_54f1ad
        mov eax, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+eax+0x14], 0
        jmp public_54f36d
        public_54f1ad : nop
        test ebx, ebx
        je public_54f36d
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x14]
        push eax
        add ecx, edi
        push ebp
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 0xBF800000
        call dword ptr ds : [edx+4]
        test al, al
        je public_54f1e1
        mov edx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+edx+0x14], 0
        jmp public_54f36d
        public_54f1e1 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54f214
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [edi+eax+0x1C]
        lea ecx, ds:[edi+eax]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_54f36d
        mov byte ptr ds : [ecx+0x14], 0
        jmp public_54f36d
        public_54f214 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+edi+0x1C]
        add ecx, edi
        fcomp dword ptr ds : [esi+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_54f36d
        mov byte ptr ds : [ecx+0x14], 0
        jmp public_54f36d
        public_54f234 : nop
        fstp st(0)
        public_54f236 : nop
        mov dword ptr ds : [ecx+0x10], 0x3F800000
        public_54f23d : nop
        mov edx, dword ptr ds : [esi+0xC]
        fstp st(0)
        fld dword ptr ds : [edi+edx+0x10]
        lea ecx, ds:[edi+edx+0x10]
        fcomp dword ptr ds : [public_5d1fe4]
        fnstsw ax
        test ah, 5
        jnp public_54f36d
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [esi+0x40]
        fnstsw ax
        test ah, 5
        jp public_54f2b5
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [esi+0x44]
        fnstsw ax
        test ah, 5
        jp public_54f2a2
        mov dword ptr ds : [ecx], 0
        jmp public_54f2b5
        public_54f27f : nop
        fcom qword ptr ss : [esp+0xD4]
        fnstsw ax
        test ah, 0x41
        jne public_54f236
        fld qword ptr ss : [esp+0x9C]
        fsub st, st(1)
        fmul qword ptr ss : [esp+0xA4]
        fstp dword ptr ds : [ecx+0x10]
        jmp public_54f23d
        public_54f2a2 : nop
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [esi+0x44]
        fld dword ptr ds : [esi+0x40]
        fsub dword ptr ds : [esi+0x44]
        fdivp 
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        public_54f2b5 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [ecx+edi+0x10]
        lea ebp, ds:[ecx+edi]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54f2d5
        inc dword ptr ss : [esp+0x10]
        jmp public_54f36d
        public_54f2d5 : nop
        movzx eax, byte ptr ss : [ebp+0x16]
        movzx ecx, byte ptr ds : [ecx+0x15]
        lea eax, ds:[ecx+eax*2]
        cmp eax, 3
        jle public_54f2ed
        sub eax, 4
        cmp eax, 3
        ja public_54f327
/*FIXUP public_54f2ed : nop
        jmp dword ptr ds : [eax*4+public_54f7e0] @0x54f2ed*/
  JMPTB public_54f2ed : nop
        cmp eax, 0
  JMPTB je public_54f327
  JMPTB cmp eax, 1
  JMPTB je public_54f2f4
  JMPTB cmp eax, 2
  JMPTB je public_54f302
  JMPTB cmp eax, 3
  JMPTB je public_54f319
  JMPTB int 3
        public_54f2f4 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        jmp public_54f333
        public_54f302 : nop
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x88]
        jmp public_54f333
        public_54f319 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x70]
        jmp public_54f333
        public_54f327 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        public_54f333 : nop
        mov dword ptr ss : [esp+0x94], edx
        mov dword ptr ss : [esp+0x8C], eax
        lea edx, ss:[esp+0xC8]
        push edx
        lea eax, ss:[esp+0x90]
        push eax
        mov dword ptr ss : [esp+0x98], ecx
        lea eax, ds:[esi+0x34]
        push eax
        lea ecx, ss:[esp+0x48]
        push ecx
        push ebp
        mov ecx, esi
        call public_54f9f0
        jmp public_54f36d
        public_54f36b : nop
        fstp st(0)
        public_54f36d : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ds : [esi+0x14]
        inc eax
        add edi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        jl public_54eebc
        public_54f384 : nop
        mov eax, dword ptr ds : [public_6797e0]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_6797e4 @0x54f38b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797e4
        push eax
        call dword ptr ds : [edx+0x18]
        mov eax, dword ptr ds : [public_6797d4]
        test eax, eax
        je public_54f45c
        test byte ptr ds : [public_679828], 2
        je public_54f430
        mov eax, dword ptr ds : [public_67983c]
        mov ecx, dword ptr ds : [public_6797f8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6797fc]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [public_679800]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_679840]
        mov ebx, dword ptr ds : [public_67983c]
        mov eax, dword ptr ds : [public_679844]
        mov ecx, dword ptr ds : [public_679804]
        add ebx, edx
        mov dword ptr ds : [public_67983c], ebx
        mov dword ptr ds : [eax], ecx
        fld dword ptr ds : [public_679808]
        mov edi, dword ptr ds : [public_679844]
        mov edx, dword ptr ds : [public_679848]
        mov eax, dword ptr ds : [public_67984c]
        add edi, edx
        mov dword ptr ds : [public_679844], edi
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_67984c]
        fld dword ptr ds : [public_67980c]
        fstp dword ptr ds : [ecx+4]
        push 0
        mov ecx, offset public_67984c
        call public_552b10
        inc dword ptr ds : [public_6797d4]
        public_54f430 : nop
        mov ecx, dword ptr ds : [public_6797d4]
        mov eax, dword ptr ds : [public_6797dc]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        mov ecx, dword ptr ds : [public_6797ec]
        push ecx
        mov ecx, dword ptr ds : [public_6797e4]
        push ecx
        mov ecx, dword ptr ds : [public_6797d0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x11C]
        public_54f45c : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        jle public_54f72c
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 5
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov ebp, dword ptr ds : [edx]
        mov edi, offset public_5e0998
        mov eax, 0x89
        public_54f4a4 : nop
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp]
        push edx
        push eax
        push ebp
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [edi+8]
        add edi, 8
        test eax, eax
        jne public_54f4a4
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, offset public_6797d0
        lea edi, ds:[edi+edi*2]
        call public_54f9c0
        test edi, edi
        je public_54f72c
        mov al, byte ptr ds : [public_679828]
        and al, 0xF9
        mov cl, al
        shr cl, 1
        xor cl, al
        and cl, 1
/*FIXUP push offset public_6797e4 @0x54f4e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797e4
        xor al, cl
        mov ecx, dword ptr ds : [public_6797d8]
        push edi
        mov byte ptr ds : [public_679828], al
        mov eax, dword ptr ds : [public_6797e0]
        push ecx
        mov dword ptr ds : [public_6797d0], 4
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x14]
        neg eax
        sbb al, al
        inc al
        mov byte ptr ss : [esp+0x1B], al
        je public_54f72c
        mov edx, dword ptr ds : [public_6797e8]
        mov eax, dword ptr ds : [public_6797f0]
        push edx
        push eax
        mov ecx, offset public_6797d0
        mov dword ptr ds : [public_6797f4], edi
        call public_54f830
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        jle public_54f668
        xor ebp, ebp
        nop 
        public_54f550 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov al, byte ptr ds : [ecx+ebp+0x14]
        test al, al
        lea edi, ds:[ecx+ebp]
        je public_54f659
        fld dword ptr ds : [edi+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 5
        jp public_54f659
        fld dword ptr ds : [edi+0x10]
        fcomp dword ptr ds : [public_5d1fe4]
        fnstsw ax
        test ah, 0x41
        jne public_54f659
        mov eax, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x2C], eax
        jle public_54f5c5
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5e0ba8 @0x54f5a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0ba8
        push 0x410
/*FIXUP push offset public_5e0b08 @0x54f5ab*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0b08
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x54f5b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_54f659
        public_54f5c5 : nop
        movzx edx, byte ptr ds : [edi+0x16]
        movzx eax, byte ptr ds : [ecx+0x15]
        lea eax, ds:[eax+edx*2]
        cmp eax, 3
        jle public_54f5dd
        sub eax, 4
        cmp eax, 3
        ja public_54f617
/*FIXUP public_54f5dd : nop
        jmp dword ptr ds : [eax*4+public_54f7f0] @0x54f5dd*/
  JMPTB public_54f5dd : nop
        cmp eax, 0
  JMPTB je public_54f617
  JMPTB cmp eax, 1
  JMPTB je public_54f5e4
  JMPTB cmp eax, 2
  JMPTB je public_54f5f2
  JMPTB cmp eax, 3
  JMPTB je public_54f609
  JMPTB int 3
        public_54f5e4 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x64]
        jmp public_54f623
        public_54f5f2 : nop
        mov eax, dword ptr ss : [esp+0x80]
        mov ecx, dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x88]
        jmp public_54f623
        public_54f609 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ss : [esp+0x70]
        jmp public_54f623
        public_54f617 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        public_54f623 : nop
        mov dword ptr ss : [esp+0x90], ecx
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov dword ptr ss : [esp+0x98], edx
        mov dword ptr ss : [esp+0x90], eax
        lea edx, ss:[esp+0x90]
        push edx
        lea eax, ds:[esi+0x34]
        push eax
        lea eax, ss:[esp+0x48]
        push eax
        push edi
        mov ecx, esi
        call public_54f9f0
        public_54f659 : nop
        mov eax, dword ptr ds : [esi+0x14]
        inc ebx
        add ebp, 0x20
        cmp ebx, eax
        jl public_54f550
        public_54f668 : nop
        mov eax, dword ptr ds : [public_6797e0]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6797e4 @0x54f66f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6797e4
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [public_6797d4]
        test eax, eax
        je public_54f72c
        test byte ptr ds : [public_679828], 2
        je public_54f700
        mov eax, dword ptr ds : [public_6797f8]
        mov edx, dword ptr ds : [public_67983c]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [public_6797fc]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [public_679800]
        push 0
        mov ecx, offset public_67983c
        mov dword ptr ds : [edx+8], eax
        call public_552b10
        mov ecx, dword ptr ds : [public_679804]
        mov edx, dword ptr ds : [public_679844]
        mov dword ptr ds : [edx], ecx
        push 0
        mov ecx, offset public_679844
        call public_552b10
        fld dword ptr ds : [public_679808]
        mov eax, dword ptr ds : [public_67984c]
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_67984c]
        fld dword ptr ds : [public_67980c]
        push 0
        fstp dword ptr ds : [ecx+4]
        mov ecx, offset public_67984c
        call public_552b10
        inc dword ptr ds : [public_6797d4]
        public_54f700 : nop
        mov ecx, dword ptr ds : [public_6797d4]
        mov eax, dword ptr ds : [public_6797dc]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        mov ecx, dword ptr ds : [public_6797ec]
        push ecx
        mov ecx, dword ptr ds : [public_6797e4]
        push ecx
        mov ecx, dword ptr ds : [public_6797d0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x11C]
        public_54f72c : nop
        push 0
        push 0
        mov ecx, offset public_6797d0
        call public_54f960
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x18
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5e09e0
        mov eax, 0x8D
        pop ebp
        public_54f7a6 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_54f7a6
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_5e0958 @0x54f7c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0958
        push ecx
        call public_54f800
        add esp, 8
        public_54f7d3 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xF0
        ret 0xC
        UNREACHABLE_TRAP(0x54e900)
        ASM_EXPORT_ENTRY_FIRST(0x54f319, public_54f319)
        ASM_EXPORT_ENTRY_LAST(0x54f609, public_54f609)
    }
}

#undef public_54eb5b
#undef public_54ebd9
#undef public_54ece0
#undef public_54ed10
#undef public_54ed40
#undef public_54ed70
#undef public_54edb1
#undef public_54edc9
#undef public_54eddf
#undef public_54edf6
#undef public_54eebc
#undef public_54ef59
#undef public_54ef91
#undef public_54efb2
#undef public_54efbe
#undef public_54efc9
#undef public_54eff8
#undef public_54f063
#undef public_54f0a8
#undef public_54f1ad
#undef public_54f1e1
#undef public_54f214
#undef public_54f234
#undef public_54f236
#undef public_54f23d
#undef public_54f27f
#undef public_54f2a2
#undef public_54f2b5
#undef public_54f2d5
#undef public_54f2ed
#undef public_54f2f4
#undef public_54f302
#undef public_54f319
#undef public_54f327
#undef public_54f333
#undef public_54f36b
#undef public_54f36d
#undef public_54f384
#undef public_54f430
#undef public_54f45c
#undef public_54f4a4
#undef public_54f550
#undef public_54f5c5
#undef public_54f5dd
#undef public_54f5e4
#undef public_54f5f2
#undef public_54f609
#undef public_54f617
#undef public_54f623
#undef public_54f659
#undef public_54f668
#undef public_54f700
#undef public_54f72c
#undef public_54f7a6
#undef public_54f7d3

#pragma init_seg(compiler)
extern "C" void const* const public_54f319 = __AsmFindLabelExport(&internal_54e900, 0x54f319);
extern "C" void const* const public_54f609 = __AsmFindLabelExport(&internal_54e900, 0x54f609);
