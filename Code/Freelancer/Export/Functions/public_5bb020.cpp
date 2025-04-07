#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bb028 _public_5bb028
#define public_5bb037 _public_5bb037
#define public_5bb046 _public_5bb046
#define public_5bb055 _public_5bb055
#define public_5bb064 _public_5bb064

PROC_DECLARE(0x5bb020, internal_5bb020, public_5bb020);
/* CHUNK of public_464f40 */
extern "C" NAKED register_t __cdecl internal_5bb020()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_59fa50
        public_5bb028 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x334
        jmp dword ptr ds : [public_5c62c4]
        public_5bb037 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x340
        jmp dword ptr ds : [public_5c62c4]
        public_5bb046 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x34C
        jmp dword ptr ds : [public_5c62c4]
        public_5bb055 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x358
        jmp dword ptr ds : [public_5c62c4]
        public_5bb064 : nop
        mov eax, offset public_5f521c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bb020)
        ASM_EXPORT_ENTRY_FIRST(0x5bb028, public_5bb028)
        ASM_EXPORT_ENTRY(0x5bb037, public_5bb037)
        ASM_EXPORT_ENTRY(0x5bb046, public_5bb046)
        ASM_EXPORT_ENTRY(0x5bb055, public_5bb055)
        ASM_EXPORT_ENTRY_LAST(0x5bb064, public_5bb064)
    }
}

#undef public_5bb028
#undef public_5bb037
#undef public_5bb046
#undef public_5bb055
#undef public_5bb064

#pragma init_seg(compiler)
extern "C" void const* const public_5bb028 = __AsmFindLabelExport(&internal_5bb020, 0x5bb028);
extern "C" void const* const public_5bb037 = __AsmFindLabelExport(&internal_5bb020, 0x5bb037);
extern "C" void const* const public_5bb046 = __AsmFindLabelExport(&internal_5bb020, 0x5bb046);
extern "C" void const* const public_5bb055 = __AsmFindLabelExport(&internal_5bb020, 0x5bb055);
extern "C" void const* const public_5bb064 = __AsmFindLabelExport(&internal_5bb020, 0x5bb064);
