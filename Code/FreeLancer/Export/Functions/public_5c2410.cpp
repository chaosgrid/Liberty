#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2419 _public_5c2419
#define public_5c2424 _public_5c2424
#define public_5c2430 _public_5c2430
#define public_5c243c _public_5c243c
#define public_5c2448 _public_5c2448

PROC_DECLARE(0x5c2410, internal_5c2410, public_5c2410);
/* CHUNK of public_5684a0 */
extern "C" NAKED register_t __cdecl internal_5c2410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        jmp dword ptr ds : [public_5c7058]
        public_5c2419 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x18
        jmp public_4de730
        public_5c2424 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x44
        jmp dword ptr ds : [public_5c7058]
        public_5c2430 : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x54
        jmp dword ptr ds : [public_5c7058]
        public_5c243c : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x64
        jmp dword ptr ds : [public_5c7090]
        public_5c2448 : nop
        mov eax, offset public_5fc614
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2410)
        ASM_EXPORT_ENTRY_FIRST(0x5c2419, public_5c2419)
        ASM_EXPORT_ENTRY(0x5c2424, public_5c2424)
        ASM_EXPORT_ENTRY(0x5c2430, public_5c2430)
        ASM_EXPORT_ENTRY(0x5c243c, public_5c243c)
        ASM_EXPORT_ENTRY_LAST(0x5c2448, public_5c2448)
    }
}

#undef public_5c2419
#undef public_5c2424
#undef public_5c2430
#undef public_5c243c
#undef public_5c2448

#pragma init_seg(compiler)
extern "C" void const* const public_5c2419 = __AsmFindLabelExport(&internal_5c2410, 0x5c2419);
extern "C" void const* const public_5c2424 = __AsmFindLabelExport(&internal_5c2410, 0x5c2424);
extern "C" void const* const public_5c2430 = __AsmFindLabelExport(&internal_5c2410, 0x5c2430);
extern "C" void const* const public_5c243c = __AsmFindLabelExport(&internal_5c2410, 0x5c243c);
extern "C" void const* const public_5c2448 = __AsmFindLabelExport(&internal_5c2410, 0x5c2448);
