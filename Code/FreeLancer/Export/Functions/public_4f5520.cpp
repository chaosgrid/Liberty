#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f5520);

#define public_4f552d _public_4f552d
#define public_4f552f _public_4f552f
#define public_4f553d _public_4f553d

PROC_DECLARE(0x4f5520, internal_4f5520, public_4f5520);
/* CHUNK of public_4db0d0 */
extern "C" NAKED register_t __cdecl internal_4f5520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_4f552d
        add eax, 8
        jmp public_4f552f
        public_4f552d : nop
        xor eax, eax
        public_4f552f : nop
        cmp eax, dword ptr ds : [ecx]
        je public_4f553d
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [public_5c62a8]
        public_4f553d : nop
        ret 4
        UNREACHABLE_TRAP(0x4f5520)
        ASM_EXPORT_ENTRY_FIRST(0x4f552d, public_4f552d)
        ASM_EXPORT_ENTRY(0x4f552f, public_4f552f)
        ASM_EXPORT_ENTRY_LAST(0x4f553d, public_4f553d)
    }
}

#undef public_4f552d
#undef public_4f552f
#undef public_4f553d

#pragma init_seg(compiler)
extern "C" void const* const public_4f552d = __AsmFindLabelExport(&internal_4f5520, 0x4f552d);
extern "C" void const* const public_4f552f = __AsmFindLabelExport(&internal_4f5520, 0x4f552f);
extern "C" void const* const public_4f553d = __AsmFindLabelExport(&internal_4f5520, 0x4f553d);
