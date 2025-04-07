#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fabee8 _public_6fabee8
#define public_6fabef1 _public_6fabef1
#define public_6fabefa _public_6fabefa
#define public_6fabf03 _public_6fabf03

PROC_DECLARE(0x6fabee0, internal_6fabee0, public_6fabee0);
/* CHUNK of public_6eef740 */
extern "C" NAKED register_t __cdecl internal_6fabee0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x48]
        jmp public_6f86ac0
        public_6fabee8 : nop
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_6fb3110]
        public_6fabef1 : nop
        lea ecx, ss:[ebp-0x48]
        jmp dword ptr ds : [public_6fb3110]
        public_6fabefa : nop
        lea ecx, ss:[ebp-0x28]
        jmp dword ptr ds : [public_6fb3110]
        public_6fabf03 : nop
        mov eax, offset public_6fc0ae8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fabee0)
        ASM_EXPORT_ENTRY_FIRST(0x6fabee8, public_6fabee8)
        ASM_EXPORT_ENTRY(0x6fabef1, public_6fabef1)
        ASM_EXPORT_ENTRY(0x6fabefa, public_6fabefa)
        ASM_EXPORT_ENTRY_LAST(0x6fabf03, public_6fabf03)
    }
}

#undef public_6fabee8
#undef public_6fabef1
#undef public_6fabefa
#undef public_6fabf03

#pragma init_seg(compiler)
extern "C" void const* const public_6fabee8 = __AsmFindLabelExport(&internal_6fabee0, 0x6fabee8);
extern "C" void const* const public_6fabef1 = __AsmFindLabelExport(&internal_6fabee0, 0x6fabef1);
extern "C" void const* const public_6fabefa = __AsmFindLabelExport(&internal_6fabee0, 0x6fabefa);
extern "C" void const* const public_6fabf03 = __AsmFindLabelExport(&internal_6fabee0, 0x6fabf03);
