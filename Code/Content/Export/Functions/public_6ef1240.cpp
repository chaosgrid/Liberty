#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ef0f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ef1240);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f50650);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ce90);
CLANG_FORWARD_PROC_SYMBOL(public_6f72cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fac04b);

#define public_6ef12df _public_6ef12df
#define public_6ef12e3 _public_6ef12e3
#define public_6ef1352 _public_6ef1352
#define public_6ef13e1 _public_6ef13e1
#define public_6ef13f1 _public_6ef13f1
#define public_6ef14b0 _public_6ef14b0
#define public_6ef14cc _public_6ef14cc
#define public_6ef14de _public_6ef14de
#define public_6ef14ea _public_6ef14ea
#define public_6ef14ee _public_6ef14ee
#define public_6ef1528 _public_6ef1528
#define public_6ef154c _public_6ef154c
#define public_6ef1563 _public_6ef1563
#define public_6ef157e _public_6ef157e
#define public_6ef1589 _public_6ef1589

PROC_DECLARE(0x6ef1240, internal_6ef1240, public_6ef1240);
extern "C" NAKED register_t __cdecl internal_6ef1240()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fac04b @0x6ef1242*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fac04b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44C
        fld dword ptr ss : [esp+0x468]
        push esi
        fcomp dword ptr ds : [public_6fb7618]
        mov esi, ecx
        mov dword ptr ss : [esp+0x1C], esi
        fnstsw ax
        test ah, 0x41
        jne public_6ef1589
        mov al, byte ptr ss : [esp+0x1B]
        push ebx
        push edi
        xor edi, edi
        push edi
        push edi
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x3C], al
        call public_6f93790
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], edi
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x14
        push eax
        mov dword ptr ss : [esp+0x464], edi
        call public_6f50650
        mov esi, dword ptr ds : [eax+0x58]
        mov eax, dword ptr ss : [esp+0x470]
        mov ebx, dword ptr ds : [eax+0x110]
        mov ecx, dword ptr ds : [eax+0x114]
        add esp, 4
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x2C], ebx
        je public_6ef154c
        push ebp
        lea ebp, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x14], ebp
        jmp public_6ef12e3
        public_6ef12df : nop
        mov esi, dword ptr ss : [esp+0x50]
        public_6ef12e3 : nop
        mov eax, dword ptr ss : [esp+0x474]
        fld dword ptr ds : [eax+8]
        sub esp, 0xC
        fsub dword ptr ss : [ebp+4]
        lea ecx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [ebp]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [ebp-4]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef1528
        test esi, esi
        je public_6ef1352
        cmp esi, dword ptr ss : [ebp-8]
        jne public_6ef1528
        public_6ef1352 : nop
        fld dword ptr ss : [esp+0x478]
        fld dword ptr ss : [esp+0x10]
        fdiv dword ptr ds : [public_6fb7608]
        fsubp 
        fsub dword ptr ds : [public_6fb7618]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef1528
        lea edi, ss:[ebp+0xC]
        lea ecx, ss:[esp+0x46C]
        push edi
        push ecx
        call public_6f6ce90
        add esp, 8
        test al, al
        jne public_6ef1528
        lea edx, ss:[ebp+8]
        push edx
        call public_6f75f30
        mov esi, eax
        mov eax, dword ptr ds : [esi+0x48]
        push eax
        call public_6f4d5e0
        mov dword ptr ss : [esp+0x20], 0x501502F9
        mov dword ptr ss : [esp+0x24], 0x501502F9
        mov dword ptr ss : [esp+0x28], 0x501502F9
        mov eax, dword ptr ds : [esi+0x110]
        mov ecx, dword ptr ds : [esi+0x114]
        add esp, 8
        cmp eax, ecx
        je public_6ef1528
        mov edi, dword ptr ds : [edi]
        public_6ef13e1 : nop
        cmp edi, dword ptr ds : [eax]
        je public_6ef13f1
        add eax, 0x1C
        cmp eax, ecx
        jne public_6ef13e1
        jmp public_6ef1528
        public_6ef13f1 : nop
        add eax, 8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+4]
        fcomp dword ptr ds : [public_6fb781c]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        fnstsw ax
        test ah, 0x44
        jnp public_6ef1528
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6fb781c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef1528
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fb781c]
        fnstsw ax
        test ah, 0x44
        jnp public_6ef1528
        fld dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x46C]
        fsub dword ptr ds : [public_6fb7610]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6ef14ee
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x48]
        fmul dword ptr ds : [public_6fb7608]
        lea ecx, ss:[esp+0x34]
        push ecx
        push 0x100
        lea edx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [public_6fb3398]
        mov eax, dword ptr ss : [esp+0x4C]
        add esp, 0x18
        xor ebp, ebp
        test eax, eax
        jbe public_6ef14ea
        lea edi, ss:[esp+0x5C]
        nop 
        public_6ef14b0 : nop
        mov eax, dword ptr ds : [edi]
        push eax
        mov ecx, esi
        call public_6f72cb0
        test eax, eax
        je public_6ef14de
        mov cl, byte ptr ds : [eax+0x12]
        test cl, cl
        jne public_6ef14cc
        mov cl, byte ptr ds : [eax+0x13]
        test cl, cl
        je public_6ef14de
        public_6ef14cc : nop
        mov ecx, dword ptr ss : [esp+0x47C]
        push edi
        lea eax, ss:[esp+0x58]
        push eax
        call public_6f95e00
        public_6ef14de : nop
        mov eax, dword ptr ss : [esp+0x34]
        inc ebp
        add edi, 4
        cmp ebp, eax
        jb public_6ef14b0
        public_6ef14ea : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6ef14ee : nop
        mov ecx, dword ptr ss : [esp+0x47C]
        mov edi, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push edi
        lea edx, ss:[esp+0x20]
        push edx
        push esi
        push ebx
        call public_6ef0f20
        mov eax, dword ptr ss : [esp+0x47C]
        push eax
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        push ebx
        call public_6ef1240
        mov ebx, dword ptr ss : [esp+0x30]
        public_6ef1528 : nop
        mov edx, dword ptr ss : [esp+0x470]
        mov eax, dword ptr ds : [edx+0x114]
        add ebx, 0x1C
        add ebp, 0x1C
        cmp ebx, eax
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6ef12df
        pop ebp
        public_6ef154c : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x460], 0xFFFFFFFF
        mov edi, eax
        je public_6ef157e
        public_6ef1563 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x3C]
        call public_6ecfe80
        cmp esi, edi
        jne public_6ef1563
        mov eax, dword ptr ss : [esp+0x38]
        public_6ef157e : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop ebx
        public_6ef1589 : nop
        mov ecx, dword ptr ss : [esp+0x450]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x458
        ret 0x14
        UNREACHABLE_TRAP(0x6ef1240)
    }
}

#undef public_6ef12df
#undef public_6ef12e3
#undef public_6ef1352
#undef public_6ef13e1
#undef public_6ef13f1
#undef public_6ef14b0
#undef public_6ef14cc
#undef public_6ef14de
#undef public_6ef14ea
#undef public_6ef14ee
#undef public_6ef1528
#undef public_6ef154c
#undef public_6ef1563
#undef public_6ef157e
#undef public_6ef1589
