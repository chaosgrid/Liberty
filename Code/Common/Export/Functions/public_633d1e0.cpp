#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62d3af0);
CLANG_FORWARD_PROC_SYMBOL(public_62e0480);
CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);
CLANG_FORWARD_PROC_SYMBOL(public_632f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_633d040);
CLANG_FORWARD_PROC_SYMBOL(public_633d150);
CLANG_FORWARD_PROC_SYMBOL(public_633d1e0);
CLANG_FORWARD_PROC_SYMBOL(public_633d5d0);

#define public_633d200 _public_633d200
#define public_633d210 _public_633d210
#define public_633d2b3 _public_633d2b3
#define public_633d31d _public_633d31d
#define public_633d36c _public_633d36c
#define public_633d3e1 _public_633d3e1
#define public_633d440 _public_633d440
#define public_633d464 _public_633d464
#define public_633d4e2 _public_633d4e2
#define public_633d512 _public_633d512
#define public_633d516 _public_633d516
#define public_633d51e _public_633d51e
#define public_633d564 _public_633d564
#define public_633d57a _public_633d57a
#define public_633d57c _public_633d57c
#define public_633d59e _public_633d59e

PROC_DECLARE(0x633d1e0, internal_633d1e0, public_633d1e0);
extern "C" NAKED register_t __cdecl internal_633d1e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x164
        push ebx
        mov ebx, dword ptr ss : [esp+0x170]
        push esi
        mov esi, dword ptr ss : [esp+0x170]
        push edi
        xor edi, edi
        lea esp, ss:[esp]
        public_633d200 : nop
        cmp edi, 5
        ja public_633d4e2
/*FIXUP jmp dword ptr ds : [edi*4+public_633d5ac] @0x633d209*/
  JMPTB cmp edi, 0
  JMPTB je public_633d31d
  JMPTB cmp edi, 1
  JMPTB je public_633d36c
  JMPTB cmp edi, 2
  JMPTB je public_633d3e1
  JMPTB cmp edi, 3
  JMPTB je public_633d464
  JMPTB cmp edi, 4
  JMPTB je public_633d210
  JMPTB cmp edi, 5
  JMPTB je public_633d2b3
  JMPTB int 3
        public_633d210 : nop
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        lea ecx, ss:[esp+0x70]
        call public_628b030
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0xAC]
        call public_628b030
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea ecx, ss:[esp+0xA4]
        call public_62c5a70
        fld dword ptr ds : [esi+0x34]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea edx, ss:[esp+0x68]
        lea ecx, ss:[esp+0xBC]
        fsub dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push edx
        call public_633d150
        lea eax, ss:[esp+0x7C]
        push eax
        lea ecx, ss:[esp+0xBC]
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_633d040
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x44]
        add esp, 0xC
        jmp public_633d512
        public_633d2b3 : nop
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0xC8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call public_62d3af0
        lea edx, ss:[esp+0xAC]
        push edx
        mov ecx, eax
        call public_62c5a70
        fld dword ptr ds : [esi+0x34]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea eax, ss:[esp+0x12C]
        mov ecx, esi
        fsubr dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push eax
        call public_62e0480
        lea ecx, ss:[esp+0xB0]
        lea edx, ss:[esp+0x144]
        jmp public_633d440
        public_633d31d : nop
        lea ecx, ds:[esi+0x24]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], edx
        lea edx, ss:[esp+0x11C]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_62d3af0
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, eax
        call public_62c5a70
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_633d51e
        public_633d36c : nop
        lea edx, ss:[esp+0xEC]
        push edx
        mov ecx, esi
        call public_62d3af0
        fld dword ptr ds : [esi+0x38]
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        lea eax, ss:[esp+0x9C]
        push eax
        call public_6288830
        lea ecx, ss:[esp+0xA0]
        push ecx
        lea edx, ds:[esi+0x24]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        call public_6288800
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x24], ecx
        add esp, 0x18
        lea ecx, ss:[esp+0x14C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call public_62d3af0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+8]
        jmp public_633d516
        public_633d3e1 : nop
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        lea ecx, ss:[esp+0x104]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        call public_62d3af0
        lea edx, ss:[esp+0x70]
        push edx
        mov ecx, eax
        call public_62c5a70
        fld dword ptr ds : [esi+0x30]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea eax, ss:[esp+0x138]
        mov ecx, esi
        fsub dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push eax
        call public_62e04a0
        lea ecx, ss:[esp+0x74]
        lea edx, ss:[esp+0xD8]
        public_633d440 : nop
        push eax
        push ecx
        push edx
        call public_633d5d0
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_633d51e
        public_633d464 : nop
        lea ecx, ds:[esi+0x24]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0xC], edx
        lea edx, ss:[esp+0xE0]
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        call public_62d3af0
        lea ecx, ss:[esp+0x88]
        push ecx
        mov ecx, eax
        call public_62c5a70
        fld dword ptr ds : [esi+0x30]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea edx, ss:[esp+0xFC]
        mov ecx, esi
        fsubr dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push edx
        call public_62e04a0
        push eax
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ss:[esp+0x11C]
        push ecx
        call public_633d5d0
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax+8]
        add esp, 0x10
        jmp public_633d516
        public_633d4e2 : nop
        mov dword ptr ss : [esp+0x24], 0
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x28], 0
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x2C], 0
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        public_633d512 : nop
        mov dword ptr ss : [esp+0x18], eax
        public_633d516 : nop
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        public_633d51e : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ss:[esp+0x5C]
        call public_632f8b0
        fld dword ptr ds : [ebx+0xC]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [ebx+8]
        faddp 
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [ebx+4]
        faddp 
        fsub dword ptr ss : [esp+0x60]
        fcom 
        fnstsw ax
        test ah, 0x41
        jne public_633d564
        fstp st(0)
        mov eax, 1
        fstp st(0)
        jmp public_633d57c
        public_633d564 : nop
        fxch 
        fchs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_633d57a
        mov eax, 2
        jmp public_633d57c
        public_633d57a : nop
        xor eax, eax
        public_633d57c : nop
        cmp eax, 2
        mov dword ptr ss : [esp+edi*4+0x158], eax
        je public_633d59e
        inc edi
        cmp edi, 6
        jb public_633d200
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x164
        ret 
        public_633d59e : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x164
        ret 
        UNREACHABLE_TRAP(0x633d1e0)
        ASM_EXPORT_ENTRY_FIRST(0x633d210, public_633d210)
        ASM_EXPORT_ENTRY(0x633d2b3, public_633d2b3)
        ASM_EXPORT_ENTRY(0x633d31d, public_633d31d)
        ASM_EXPORT_ENTRY(0x633d36c, public_633d36c)
        ASM_EXPORT_ENTRY(0x633d3e1, public_633d3e1)
        ASM_EXPORT_ENTRY_LAST(0x633d464, public_633d464)
    }
}

#undef public_633d200
#undef public_633d210
#undef public_633d2b3
#undef public_633d31d
#undef public_633d36c
#undef public_633d3e1
#undef public_633d440
#undef public_633d464
#undef public_633d4e2
#undef public_633d512
#undef public_633d516
#undef public_633d51e
#undef public_633d564
#undef public_633d57a
#undef public_633d57c
#undef public_633d59e

#pragma init_seg(compiler)
extern "C" void const* const public_633d210 = __AsmFindLabelExport(&internal_633d1e0, 0x633d210);
extern "C" void const* const public_633d2b3 = __AsmFindLabelExport(&internal_633d1e0, 0x633d2b3);
extern "C" void const* const public_633d31d = __AsmFindLabelExport(&internal_633d1e0, 0x633d31d);
extern "C" void const* const public_633d36c = __AsmFindLabelExport(&internal_633d1e0, 0x633d36c);
extern "C" void const* const public_633d3e1 = __AsmFindLabelExport(&internal_633d1e0, 0x633d3e1);
extern "C" void const* const public_633d464 = __AsmFindLabelExport(&internal_633d1e0, 0x633d464);
