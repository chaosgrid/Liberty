#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_632f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_633cc20);
CLANG_FORWARD_PROC_SYMBOL(public_633d040);
CLANG_FORWARD_PROC_SYMBOL(public_633d150);

#define public_633cc3d _public_633cc3d
#define public_633ccc7 _public_633ccc7
#define public_633cd4e _public_633cd4e
#define public_633cdab _public_633cdab
#define public_633ce42 _public_633ce42
#define public_633cef8 _public_633cef8
#define public_633cf87 _public_633cf87
#define public_633cfa8 _public_633cfa8
#define public_633cfd8 _public_633cfd8
#define public_633cfe4 _public_633cfe4

PROC_DECLARE(0x633cc20, internal_633cc20, public_633cc20);
extern "C" NAKED register_t __cdecl internal_633cc20()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x104
        cmp eax, 5
        push esi
        mov esi, ecx
        ja public_633cfa8
/*FIXUP jmp dword ptr ds : [eax*4+public_633d028] @0x633cc36*/
  JMPTB cmp eax, 0
  JMPTB je public_633cd4e
  JMPTB cmp eax, 1
  JMPTB je public_633cdab
  JMPTB cmp eax, 2
  JMPTB je public_633ce42
  JMPTB cmp eax, 3
  JMPTB je public_633cef8
  JMPTB cmp eax, 4
  JMPTB je public_633cc3d
  JMPTB cmp eax, 5
  JMPTB je public_633ccc7
  JMPTB int 3
        public_633cc3d : nop
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        lea ecx, ss:[esp+0xF0]
        call public_628b030
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x9C]
        call public_628b030
        lea ecx, ss:[esp+0xFC]
        push ecx
        lea ecx, ss:[esp+0x94]
        call public_62c5a70
        fld dword ptr ds : [esi+0x34]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea edx, ss:[esp+0xE8]
        lea ecx, ss:[esp+0x2C]
        fsub dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push edx
        call public_633d150
        lea eax, ss:[esp+0xFC]
        jmp public_633cf87
        public_633ccc7 : nop
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [esi+0x18]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi]
        push edx
        push eax
        lea ecx, ss:[esp+0xFC]
        call public_628b030
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x84]
        call public_628b030
        lea ecx, ss:[esp+0xA8]
        push ecx
        lea ecx, ss:[esp+0x7C]
        call public_62c5a70
        fld dword ptr ds : [esi+0x34]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea edx, ss:[esp+0xF4]
        lea ecx, ss:[esp+0x2C]
        fsubr dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push edx
        call public_633d150
        lea eax, ss:[esp+0xA8]
        jmp public_633cf87
        public_633cd4e : nop
        lea eax, ds:[esi+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+8]
        push edx
        push eax
        lea ecx, ss:[esp+0xE4]
        call public_628b030
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0xDC]
        call public_62c5a70
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        jmp public_633cfe4
        public_633cdab : nop
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0xCC]
        call public_628b030
        fld dword ptr ds : [esi+0x38]
        push ecx
        lea edx, ss:[esp+0xC4]
        fstp dword ptr ss : [esp]
        push edx
        lea eax, ss:[esp+0x8C]
        push eax
        call public_6288830
        lea ecx, ss:[esp+0x90]
        push ecx
        lea edx, ds:[esi+0x24]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_6288800
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0x18
        mov dword ptr ss : [esp+4], ecx
        mov ecx, dword ptr ds : [esi+0x20]
        push ecx
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+8]
        push edx
        push eax
        lea ecx, ss:[esp+0x54]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_633cfe4
        public_633ce42 : nop
        lea ecx, ds:[esi+0x24]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+0x10]
        push edx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        lea ecx, ss:[esp+0xC0]
        call public_628b030
        mov edx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push edx
        push eax
        push ecx
        lea ecx, ss:[esp+0xA8]
        call public_628b030
        lea edx, ss:[esp+0xCC]
        push edx
        lea ecx, ss:[esp+0xA0]
        call public_62c5a70
        fld dword ptr ds : [esi+0x30]
        fmul dword ptr ds : [public_639c13c]
        push ecx
        lea eax, ss:[esp+0xB8]
        lea ecx, ss:[esp+0x2C]
        fsub dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push eax
        call public_633d150
        lea ecx, ss:[esp+0xCC]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        call public_633d040
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 0xC
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_633cfe4
        public_633cef8 : nop
        fld dword ptr ds : [esi+4]
        lea ecx, ds:[esi+0x24]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [esi+0x20]
        fstp dword ptr ss : [esp+0x60]
        fld dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ds : [esi+0x1C]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x74]
        lea ecx, ss:[esp+0x78]
        call public_628b030
        fld dword ptr ss : [esp+0x74]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x44]
        fld dword ptr ss : [esp+0x7C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x78]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ds : [esi+0x30]
        push ecx
        fmul dword ptr ds : [public_639c13c]
        lea edx, ss:[esp+0x64]
        lea ecx, ss:[esp+0x2C]
        fsubr dword ptr ds : [public_639f5d4]
        fstp dword ptr ss : [esp]
        push edx
        call public_633d150
        lea eax, ss:[esp+0x38]
        public_633cf87 : nop
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_633d040
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        add esp, 0xC
        jmp public_633cfd8
        public_633cfa8 : nop
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        public_633cfd8 : nop
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        public_633cfe4 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+8]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_632f8b0
        mov eax, dword ptr ss : [esp+0x10C]
        mov ecx, dword ptr ss : [esp+0x38]
        mov edx, eax
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [edx+0xC], ecx
        pop esi
        add esp, 0x104
        ret 8
        UNREACHABLE_TRAP(0x633cc20)
        ASM_EXPORT_ENTRY_FIRST(0x633cc3d, public_633cc3d)
        ASM_EXPORT_ENTRY(0x633ccc7, public_633ccc7)
        ASM_EXPORT_ENTRY(0x633cd4e, public_633cd4e)
        ASM_EXPORT_ENTRY(0x633cdab, public_633cdab)
        ASM_EXPORT_ENTRY(0x633ce42, public_633ce42)
        ASM_EXPORT_ENTRY_LAST(0x633cef8, public_633cef8)
    }
}

#undef public_633cc3d
#undef public_633ccc7
#undef public_633cd4e
#undef public_633cdab
#undef public_633ce42
#undef public_633cef8
#undef public_633cf87
#undef public_633cfa8
#undef public_633cfd8
#undef public_633cfe4

#pragma init_seg(compiler)
extern "C" void const* const public_633cc3d = __AsmFindLabelExport(&internal_633cc20, 0x633cc3d);
extern "C" void const* const public_633ccc7 = __AsmFindLabelExport(&internal_633cc20, 0x633ccc7);
extern "C" void const* const public_633cd4e = __AsmFindLabelExport(&internal_633cc20, 0x633cd4e);
extern "C" void const* const public_633cdab = __AsmFindLabelExport(&internal_633cc20, 0x633cdab);
extern "C" void const* const public_633ce42 = __AsmFindLabelExport(&internal_633cc20, 0x633ce42);
extern "C" void const* const public_633cef8 = __AsmFindLabelExport(&internal_633cc20, 0x633cef8);
