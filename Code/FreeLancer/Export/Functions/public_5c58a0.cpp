#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c58af _public_5c58af
#define public_5c58be _public_5c58be
#define public_5c58cd _public_5c58cd

PROC_DECLARE(0x5c58a0, internal_5c58a0, public_5c58a0);
/* CHUNK of public_5af6a0 */
extern "C" NAKED register_t __cdecl internal_5c58a0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_5c7058]
        public_5c58af : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_5c7058]
        public_5c58be : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x248
        jmp dword ptr ds : [public_5c60fc]
        public_5c58cd : nop
        mov eax, offset public_5ff68c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c58a0)
        ASM_EXPORT_ENTRY_FIRST(0x5c58af, public_5c58af)
        ASM_EXPORT_ENTRY(0x5c58be, public_5c58be)
        ASM_EXPORT_ENTRY_LAST(0x5c58cd, public_5c58cd)
    }
}

#undef public_5c58af
#undef public_5c58be
#undef public_5c58cd

#pragma init_seg(compiler)
extern "C" void const* const public_5c58af = __AsmFindLabelExport(&internal_5c58a0, 0x5c58af);
extern "C" void const* const public_5c58be = __AsmFindLabelExport(&internal_5c58a0, 0x5c58be);
extern "C" void const* const public_5c58cd = __AsmFindLabelExport(&internal_5c58a0, 0x5c58cd);
