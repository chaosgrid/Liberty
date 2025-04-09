#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c4208 _public_5c4208
#define public_5c4216 _public_5c4216
#define public_5c4224 _public_5c4224
#define public_5c4232 _public_5c4232
#define public_5c4240 _public_5c4240

PROC_DECLARE(0x5c4200, internal_5c4200, public_5c4200);
/* CHUNK of public_580190 */
extern "C" NAKED register_t __cdecl internal_5c4200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5c4208 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x32C
        jmp public_59ef20
        public_5c4216 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x3D0
        jmp public_59ef20
        public_5c4224 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x474
        jmp public_59ef20
        public_5c4232 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x518
        jmp public_59ef20
        public_5c4240 : nop
        mov eax, offset public_5fde84
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4200)
        ASM_EXPORT_ENTRY_FIRST(0x5c4208, public_5c4208)
        ASM_EXPORT_ENTRY(0x5c4216, public_5c4216)
        ASM_EXPORT_ENTRY(0x5c4224, public_5c4224)
        ASM_EXPORT_ENTRY(0x5c4232, public_5c4232)
        ASM_EXPORT_ENTRY_LAST(0x5c4240, public_5c4240)
    }
}

#undef public_5c4208
#undef public_5c4216
#undef public_5c4224
#undef public_5c4232
#undef public_5c4240

#pragma init_seg(compiler)
extern "C" void const* const public_5c4208 = __AsmFindLabelExport(&internal_5c4200, 0x5c4208);
extern "C" void const* const public_5c4216 = __AsmFindLabelExport(&internal_5c4200, 0x5c4216);
extern "C" void const* const public_5c4224 = __AsmFindLabelExport(&internal_5c4200, 0x5c4224);
extern "C" void const* const public_5c4232 = __AsmFindLabelExport(&internal_5c4200, 0x5c4232);
extern "C" void const* const public_5c4240 = __AsmFindLabelExport(&internal_5c4200, 0x5c4240);
