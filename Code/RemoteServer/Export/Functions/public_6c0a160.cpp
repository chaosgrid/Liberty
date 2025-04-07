#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a16c _public_6c0a16c
#define public_6c0a17b _public_6c0a17b

PROC_DECLARE(0x6c0a160, internal_6c0a160, public_6c0a160);
/* CHUNK of public_6bd4370 */
extern "C" NAKED register_t __cdecl internal_6c0a160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6c0b044]
        public_6c0a16c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a17b : nop
        mov eax, offset public_6c0e87c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a160)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a16c, public_6c0a16c)
        ASM_EXPORT_ENTRY_LAST(0x6c0a17b, public_6c0a17b)
    }
}

#undef public_6c0a16c
#undef public_6c0a17b

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a16c = __AsmFindLabelExport(&internal_6c0a160, 0x6c0a16c);
extern "C" void const* const public_6c0a17b = __AsmFindLabelExport(&internal_6c0a160, 0x6c0a17b);
