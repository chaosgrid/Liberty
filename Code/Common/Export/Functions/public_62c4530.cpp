#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c4530);
CLANG_FORWARD_PROC_SYMBOL(public_62c4780);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e4500);

#define public_62c4551 _public_62c4551
#define public_62c4569 _public_62c4569
#define public_62c4578 _public_62c4578
#define public_62c457a _public_62c457a
#define public_62c4599 _public_62c4599
#define public_62c4638 _public_62c4638
#define public_62c4705 _public_62c4705
#define public_62c4710 _public_62c4710
#define public_62c471f _public_62c471f
#define public_62c4721 _public_62c4721
#define public_62c473c _public_62c473c
#define public_62c4748 _public_62c4748
#define public_62c4751 _public_62c4751

PROC_DECLARE(0x62c4530, internal_62c4530, public_62c4530);
extern "C" NAKED register_t __cdecl internal_62c4530()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x48
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x320]
        add eax, 0xFFFFFFFE
        cmp eax, 6
        push edi
        ja public_62c4751
/*FIXUP jmp dword ptr ds : [eax*4+public_62c475c] @0x62c454a*/
  JMPTB cmp eax, 0
  JMPTB je public_62c4710
  JMPTB cmp eax, 1
  JMPTB je public_62c4599
  JMPTB cmp eax, 2
  JMPTB je public_62c4751
  JMPTB cmp eax, 3
  JMPTB je public_62c4751
  JMPTB cmp eax, 4
  JMPTB je public_62c4599
  JMPTB cmp eax, 5
  JMPTB je public_62c4751
  JMPTB cmp eax, 6
  JMPTB je public_62c4551
  JMPTB int 3
        public_62c4551 : nop
        mov al, byte ptr ds : [esi+0x39A]
        test al, al
        jne public_62c4569
        mov al, byte ptr ds : [esi+0x334]
        test al, al
        je public_62c4748
        public_62c4569 : nop
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c4578
        add eax, 0xFFFFFFF8
        jmp public_62c457a
        public_62c4578 : nop
        xor eax, eax
        public_62c457a : nop
        fld dword ptr ds : [public_63ebdb4]
        push ecx
        fmul qword ptr ds : [public_639f528]
        fstp dword ptr ss : [esp]
        push eax
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 0x14FC
        push eax
        jmp public_62c473c
        public_62c4599 : nop
        test byte ptr ds : [esi+0x32C], 0xC0
        je public_62c4569
        mov edi, dword ptr ds : [esi+0x24]
        add edi, 0x14FC
        mov ecx, edi
        call public_62c47c0
        lea ebx, ds:[esi+0x3CC]
        push ebx
        add edi, 0xC
        lea ecx, ss:[esp+0x1C]
        push edi
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [esi+0x394]
        add esp, 0xC
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [esi+0x390]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [esi+0x38C]
        faddp 
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62c4705
        fcomp dword ptr ds : [public_639f488]
        fnstsw ax
        test ah, 0x41
        jne public_62c4569
        mov edi, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [edi+0x157A]
        add edi, 0x14FC
        test al, al
        jne public_62c4638
        mov ecx, dword ptr ds : [edi+0x84]
        lea eax, ds:[edi+0xC]
        push eax
        lea eax, ds:[edi+0x18]
        mov byte ptr ds : [edi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62c4638 : nop
        fld dword ptr ds : [esi+0x394]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x390]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x38C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ds : [esi+0x338]
        mov edx, dword ptr ds : [public_63ebdb4]
        push ebx
        add edi, 0xC
        lea eax, ss:[esp+0x34]
        push edi
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        call public_6288800
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        call public_62c47a0
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x28]
        add esp, 0x14
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 1
        jne public_62c4748
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        call public_6288830
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        call public_6288800
        add esp, 0x18
        lea ecx, ss:[esp+0x48]
        call public_62c4780
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_62c4569
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x48
        ret 
        public_62c4705 : nop
        pop edi
        fstp st(0)
        pop esi
        xor al, al
        pop ebx
        add esp, 0x48
        ret 
        public_62c4710 : nop
        mov eax, dword ptr ds : [esi+0x324]
        test eax, eax
        je public_62c471f
        add eax, 0xFFFFFFF8
        jmp public_62c4721
        public_62c471f : nop
        xor eax, eax
        public_62c4721 : nop
        fld dword ptr ds : [public_63ebdb4]
        push ecx
        fmul qword ptr ds : [public_639f528]
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x14FC
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        public_62c473c : nop
        call public_62e4500
        add esp, 0xC
        test al, al
        jne public_62c4751
        public_62c4748 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x48
        ret 
        public_62c4751 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x48
        ret 
        UNREACHABLE_TRAP(0x62c4530)
        ASM_EXPORT_ENTRY_FIRST(0x62c4551, public_62c4551)
        ASM_EXPORT_ENTRY(0x62c4599, public_62c4599)
        ASM_EXPORT_ENTRY(0x62c4710, public_62c4710)
        ASM_EXPORT_ENTRY_LAST(0x62c4751, public_62c4751)
    }
}

#undef public_62c4551
#undef public_62c4569
#undef public_62c4578
#undef public_62c457a
#undef public_62c4599
#undef public_62c4638
#undef public_62c4705
#undef public_62c4710
#undef public_62c471f
#undef public_62c4721
#undef public_62c473c
#undef public_62c4748
#undef public_62c4751

#pragma init_seg(compiler)
extern "C" void const* const public_62c4551 = __AsmFindLabelExport(&internal_62c4530, 0x62c4551);
extern "C" void const* const public_62c4599 = __AsmFindLabelExport(&internal_62c4530, 0x62c4599);
extern "C" void const* const public_62c4710 = __AsmFindLabelExport(&internal_62c4530, 0x62c4710);
extern "C" void const* const public_62c4751 = __AsmFindLabelExport(&internal_62c4530, 0x62c4751);
