#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422a70);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);
CLANG_FORWARD_PROC_SYMBOL(public_577d50);
CLANG_FORWARD_PROC_SYMBOL(public_57ab10);
CLANG_FORWARD_PROC_SYMBOL(public_57c440);

#define public_57c48c _public_57c48c
#define public_57c4a3 _public_57c4a3
#define public_57c581 _public_57c581
#define public_57c58d _public_57c58d
#define public_57c597 _public_57c597
#define public_57c5b0 _public_57c5b0
#define public_57c5c0 _public_57c5c0
#define public_57c675 _public_57c675
#define public_57c688 _public_57c688
#define public_57c68c _public_57c68c
#define public_57c709 _public_57c709
#define public_57c72c _public_57c72c

PROC_DECLARE(0x57c440, internal_57c440, public_57c440);
extern "C" NAKED register_t __cdecl internal_57c440()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x24
        push esi
        mov esi, ecx
        call public_57ab10
        mov ecx, dword ptr ds : [esi+0x52C]
        test ecx, ecx
        je public_57c4a3
        mov eax, dword ptr ds : [esi+0x348]
        mov edx, dword ptr ds : [esi+0x34C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x350]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x510]
        test eax, eax
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi+0x354]
        mov dword ptr ss : [esp+0x24], edx
        jg public_57c48c
        mov eax, 0x50
        public_57c48c : nop
        push eax
        call dword ptr ds : [public_5c6eb4]
        mov ecx, dword ptr ds : [esi+0x52C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x18]
        push edx
        call dword ptr ds : [eax+0xC]
        public_57c4a3 : nop
        test byte ptr ds : [esi+0x6C], 2
        je public_57c72c
        call public_577d50
        lea ecx, ds:[esi+0x498]
        cmp eax, ecx
        jne public_57c72c
        mov al, byte ptr ds : [esi+0x4AC]
        test al, al
        je public_57c72c
        push edi
        push 0
        call public_422190
        push 0xB71
        call public_421ed0
        push 0xB44
        call public_421ed0
        push 0xBE2
        call public_421ed0
        push 0x1701
        call public_401e90
        add esp, 0x14
        call public_422a70
        call public_4225e0
        lea edi, ds:[esi+0x384]
        mov ecx, edi
        call dword ptr ds : [public_5c6c30]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6c2c]
        push 0
        mov ecx, edi
        call dword ptr ds : [public_5c6c28]
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[esi+0x4DC]
        call dword ptr ds : [public_5c6bcc]
        add eax, dword ptr ds : [esi+0x49C]
        push eax
        push edi
        lea ecx, ds:[esi+0x374]
        call dword ptr ds : [public_5c6c48]
        test al, al
        pop edi
        je public_57c709
        mov eax, dword ptr ds : [esi+0x408]
        cmp eax, 3
        mov edx, dword ptr ds : [esi+0x360]
        mov dword ptr ss : [esp+0x14], edx
        ja public_57c5c0
/*FIXUP jmp dword ptr ds : [eax*4+public_57c734] @0x57c57a*/
  JMPTB cmp eax, 0
  JMPTB je public_57c581
  JMPTB cmp eax, 1
  JMPTB je public_57c58d
  JMPTB cmp eax, 2
  JMPTB je public_57c597
  JMPTB cmp eax, 3
  JMPTB je public_57c5b0
  JMPTB int 3
        public_57c581 : nop
        mov eax, dword ptr ds : [esi+0x364]
        mov dword ptr ss : [esp+0x10], eax
        jmp public_57c5c0
        public_57c58d : nop
        mov dword ptr ss : [esp+0x10], 0
        jmp public_57c5c0
        public_57c597 : nop
        mov eax, dword ptr ds : [esi+0x35C]
        sub eax, dword ptr ds : [esi+0x380]
        cdq 
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr ss : [esp+0x10], eax
        jmp public_57c5c0
        public_57c5b0 : nop
        mov ecx, dword ptr ds : [esi+0x380]
        sub ecx, dword ptr ds : [esi+0x35C]
        mov dword ptr ss : [esp+0x10], ecx
        public_57c5c0 : nop
        fild dword ptr ss : [esp+0x14]
        fsubr dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+0x4BC]
        fld dword ptr ds : [public_5e456c]
        fadd st(0), st
        fsubp 
        fstp dword ptr ss : [esp+8]
        fild dword ptr ss : [esp+0x10]
        fsubr dword ptr ss : [esp+4]
        fadd dword ptr ds : [public_5e456c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_57c709
        fild dword ptr ds : [esi+0x358]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jne public_57c709
        fild dword ptr ds : [esi+0x35C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_57c709
        fld dword ptr ss : [esp+8]
        fchs 
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 5
        jp public_57c709
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+4]
        fadd dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_57c675
        mov dword ptr ss : [esp+4], 0
        jmp public_57c688
        public_57c675 : nop
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        jne public_57c68c
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+4]
        public_57c688 : nop
        fstp dword ptr ss : [esp+8]
        public_57c68c : nop
        fild dword ptr ds : [esi+0x348]
        add esi, 0x4B8
        push esi
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ds : [esi-0x16C]
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+8]
        call public_421ba0
        push 0xDE1
        call public_421ed0
        push 2
        call public_421670
        fld dword ptr ss : [esp+0x10]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x14]
        add esp, 0xC
        push 0
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        call public_421cc0
        add esp, 0xC
        call public_421690
        public_57c709 : nop
        push 0x1701
        call public_401e90
        call public_422ab0
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        add esp, 0xC
        public_57c72c : nop
        pop esi
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x57c440)
        ASM_EXPORT_ENTRY_SINGLE(0x57c5b0, public_57c5b0)
    }
}

#undef public_57c48c
#undef public_57c4a3
#undef public_57c581
#undef public_57c58d
#undef public_57c597
#undef public_57c5b0
#undef public_57c5c0
#undef public_57c675
#undef public_57c688
#undef public_57c68c
#undef public_57c709
#undef public_57c72c

#pragma init_seg(compiler)
extern "C" void const* const public_57c5b0 = __AsmFindLabelExport(&internal_57c440, 0x57c5b0);
