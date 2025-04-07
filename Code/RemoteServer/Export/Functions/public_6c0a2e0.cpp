#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a2ef _public_6c0a2ef
#define public_6c0a2fe _public_6c0a2fe
#define public_6c0a30d _public_6c0a30d

PROC_DECLARE(0x6c0a2e0, internal_6c0a2e0, public_6c0a2e0);
/* CHUNK of public_6bd5aa0 */
extern "C" NAKED register_t __cdecl internal_6c0a2e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a2ef : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a2fe : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x248
        jmp dword ptr ds : [public_6c0b0cc]
        public_6c0a30d : nop
        mov eax, offset public_6c0e9c8
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a2e0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a2ef, public_6c0a2ef)
        ASM_EXPORT_ENTRY(0x6c0a2fe, public_6c0a2fe)
        ASM_EXPORT_ENTRY_LAST(0x6c0a30d, public_6c0a30d)
    }
}

#undef public_6c0a2ef
#undef public_6c0a2fe
#undef public_6c0a30d

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a2ef = __AsmFindLabelExport(&internal_6c0a2e0, 0x6c0a2ef);
extern "C" void const* const public_6c0a2fe = __AsmFindLabelExport(&internal_6c0a2e0, 0x6c0a2fe);
extern "C" void const* const public_6c0a30d = __AsmFindLabelExport(&internal_6c0a2e0, 0x6c0a30d);
