#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63925db _public_63925db
#define public_63925e6 _public_63925e6
#define public_63925f2 _public_63925f2
#define public_63925fe _public_63925fe

PROC_DECLARE(0x63925d0, internal_63925d0, public_63925d0);
/* CHUNK of public_6265900 */
extern "C" NAKED register_t __cdecl internal_63925d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_63925db : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_63925e6 : nop
        mov ecx, dword ptr ss : [ebp-0x16E0]
        jmp dword ptr ds : [public_63991ac]
        public_63925f2 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_63925fe : nop
        mov eax, offset public_63ab164
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63925d0)
        ASM_EXPORT_ENTRY_FIRST(0x63925db, public_63925db)
        ASM_EXPORT_ENTRY(0x63925e6, public_63925e6)
        ASM_EXPORT_ENTRY(0x63925f2, public_63925f2)
        ASM_EXPORT_ENTRY_LAST(0x63925fe, public_63925fe)
    }
}

#undef public_63925db
#undef public_63925e6
#undef public_63925f2
#undef public_63925fe

#pragma init_seg(compiler)
extern "C" void const* const public_63925db = __AsmFindLabelExport(&internal_63925d0, 0x63925db);
extern "C" void const* const public_63925e6 = __AsmFindLabelExport(&internal_63925d0, 0x63925e6);
extern "C" void const* const public_63925f2 = __AsmFindLabelExport(&internal_63925d0, 0x63925f2);
extern "C" void const* const public_63925fe = __AsmFindLabelExport(&internal_63925d0, 0x63925fe);
