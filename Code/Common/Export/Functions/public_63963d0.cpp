#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6272db0);
CLANG_FORWARD_PROC_SYMBOL(public_6311a90);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63963db _public_63963db
#define public_63963e6 _public_63963e6
#define public_63963f1 _public_63963f1
#define public_63963fc _public_63963fc
#define public_6396407 _public_6396407
#define public_6396413 _public_6396413
#define public_639641f _public_639641f

PROC_DECLARE(0x63963d0, internal_63963d0, public_63963d0);
/* CHUNK of public_63115e0 */
extern "C" NAKED register_t __cdecl internal_63963d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263860
        public_63963db : nop
        lea ecx, ss:[ebp-0x15E4]
        jmp public_6269110
        public_63963e6 : nop
        lea ecx, ss:[ebp-0x15E8]
        jmp public_6272db0
        public_63963f1 : nop
        lea ecx, ss:[ebp-0x15D0]
        jmp public_6311a90
        public_63963fc : nop
        lea ecx, ss:[ebp-0x1574]
        jmp public_6263310
        public_6396407 : nop
        mov ecx, dword ptr ss : [ebp-0x15F4]
        jmp dword ptr ds : [public_63991ac]
        public_6396413 : nop
        lea ecx, ss:[ebp-0x1574]
        jmp dword ptr ds : [public_63991ac]
        public_639641f : nop
        mov eax, offset public_63b0320
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63963d0)
        ASM_EXPORT_ENTRY_FIRST(0x63963db, public_63963db)
        ASM_EXPORT_ENTRY(0x63963e6, public_63963e6)
        ASM_EXPORT_ENTRY(0x63963f1, public_63963f1)
        ASM_EXPORT_ENTRY(0x63963fc, public_63963fc)
        ASM_EXPORT_ENTRY(0x6396407, public_6396407)
        ASM_EXPORT_ENTRY(0x6396413, public_6396413)
        ASM_EXPORT_ENTRY_LAST(0x639641f, public_639641f)
    }
}

#undef public_63963db
#undef public_63963e6
#undef public_63963f1
#undef public_63963fc
#undef public_6396407
#undef public_6396413
#undef public_639641f

#pragma init_seg(compiler)
extern "C" void const* const public_63963db = __AsmFindLabelExport(&internal_63963d0, 0x63963db);
extern "C" void const* const public_63963e6 = __AsmFindLabelExport(&internal_63963d0, 0x63963e6);
extern "C" void const* const public_63963f1 = __AsmFindLabelExport(&internal_63963d0, 0x63963f1);
extern "C" void const* const public_63963fc = __AsmFindLabelExport(&internal_63963d0, 0x63963fc);
extern "C" void const* const public_6396407 = __AsmFindLabelExport(&internal_63963d0, 0x6396407);
extern "C" void const* const public_6396413 = __AsmFindLabelExport(&internal_63963d0, 0x6396413);
extern "C" void const* const public_639641f = __AsmFindLabelExport(&internal_63963d0, 0x639641f);
