#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429950);

#define public_429492 _public_429492
#define public_4294ad _public_4294ad
#define public_4294b7 _public_4294b7
#define public_4294ca _public_4294ca
#define public_4294d4 _public_4294d4
#define public_4294de _public_4294de
#define public_4294e8 _public_4294e8
#define public_429501 _public_429501
#define public_429507 _public_429507
#define public_429545 _public_429545
#define public_429556 _public_429556
#define public_429558 _public_429558
#define public_4295d4 _public_4295d4
#define public_4295eb _public_4295eb
#define public_4295ef _public_4295ef
#define public_42963c _public_42963c
#define public_42965c _public_42965c

PROC_DECLARE(0x429450, internal_429450, public_429450);
extern "C" NAKED register_t __cdecl internal_429450()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x14
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_429558
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+4], eax
        fild dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 5
        fadd dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+4], 0
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [public_5c7474]
        ja public_429507
/*FIXUP jmp dword ptr ds : [eax*4+public_42966c] @0x42948b*/
  JMPTB cmp eax, 0
  JMPTB je public_429492
  JMPTB cmp eax, 1
  JMPTB je public_4294b7
  JMPTB cmp eax, 2
  JMPTB je public_4294d4
  JMPTB cmp eax, 3
  JMPTB je public_4294de
  JMPTB cmp eax, 4
  JMPTB je public_4294e8
  JMPTB cmp eax, 5
  JMPTB je public_4294ad
  JMPTB int 3
        public_429492 : nop
        mov ecx, dword ptr ds : [public_667cac]
        fstp st(0)
        push ecx
        push esi
        call public_429950
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_667c80]
        jmp public_429501
        public_4294ad : nop
        fstp st(0)
        fld dword ptr ds : [public_667c78]
        jmp public_429501
        public_4294b7 : nop
        cmp dword ptr ds : [public_667cac], 1
        jne public_4294ca
        mov dword ptr ss : [esp+4], 0xD01502F9
        jmp public_429507
        public_4294ca : nop
        fstp st(0)
        fld dword ptr ds : [public_667c7c]
        jmp public_429507
        public_4294d4 : nop
        fstp st(0)
        fld dword ptr ds : [public_667c78]
        jmp public_429507
        public_4294de : nop
        fstp st(0)
        fld dword ptr ds : [public_667c88]
        jmp public_429501
        public_4294e8 : nop
        mov edx, dword ptr ds : [public_667cac]
        fstp st(0)
        push edx
        push esi
        call public_429950
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_667c84]
        public_429501 : nop
        fadd dword ptr ds : [public_667ca4]
        public_429507 : nop
        fadd dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+8]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_429556
        fcom dword ptr ds : [public_5ca16c]
        fnstsw ax
        test ah, 5
        jnp public_429545
        fcomp dword ptr ds : [public_5ca16c]
        fnstsw ax
        test ah, 0x41
        jp public_429558
        mov eax, dword ptr ds : [public_667c58]
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        add esp, 0x14
        ret 4
        public_429545 : nop
        mov eax, dword ptr ds : [public_667c58]
        fstp st(0)
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        add esp, 0x14
        ret 4
        public_429556 : nop
        fstp st(0)
        public_429558 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x18]
        test al, al
        je public_42963c
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0xC]
        push eax
        push esi
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        fsub dword ptr ss : [esp+0xC]
        lea edx, ss:[esp+4]
        fld dword ptr ds : [eax+4]
        push edx
        fsub dword ptr ss : [esp+0x14]
        push esi
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call dword ptr ds : [ecx+0x38]
        test eax, eax
        jne public_4295d4
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_4295d4
        mov eax, dword ptr ds : [public_667c58]
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        add esp, 0x14
        ret 4
        public_4295d4 : nop
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+8]
        push edx
        push esi
        call dword ptr ds : [ecx+0x34]
        test eax, eax
        je public_4295eb
        fld dword ptr ds : [public_5c75dc]
        jmp public_4295ef
        public_4295eb : nop
        fld dword ptr ss : [esp+8]
        public_4295ef : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sar ecx, 1
        mov edx, 0x5F3759DF
        sub edx, ecx
        mov dword ptr ss : [esp+4], edx
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        fmul dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+4]
        fmul st, st(1)
        fldlg2 
        fxch 
        fyl2x 
        fmul qword ptr ds : [public_5c9ce8]
        fstp st(1)
        fstp dword ptr ds : [esi+0x28]
        pop esi
        add esp, 0x14
        ret 4
        public_42963c : nop
        fld dword ptr ds : [esi+0x1C]
        fcomp dword ptr ds : [public_5ca16c]
        fnstsw ax
        test ah, 0x41
        jp public_42965c
        fld dword ptr ds : [public_667c58]
        fstp dword ptr ds : [esi+0x28]
        pop esi
        add esp, 0x14
        ret 4
        public_42965c : nop
        fld dword ptr ds : [public_5c9ce0]
        fstp dword ptr ds : [esi+0x28]
        pop esi
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x429450)
        ASM_EXPORT_ENTRY_SINGLE(0x4294ad, public_4294ad)
    }
}

#undef public_429492
#undef public_4294ad
#undef public_4294b7
#undef public_4294ca
#undef public_4294d4
#undef public_4294de
#undef public_4294e8
#undef public_429501
#undef public_429507
#undef public_429545
#undef public_429556
#undef public_429558
#undef public_4295d4
#undef public_4295eb
#undef public_4295ef
#undef public_42963c
#undef public_42965c

#pragma init_seg(compiler)
extern "C" void const* const public_4294ad = __AsmFindLabelExport(&internal_429450, 0x4294ad);
