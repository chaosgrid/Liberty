#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a0cc _public_6c0a0cc
#define public_6c0a0db _public_6c0a0db

PROC_DECLARE(0x6c0a0c0, internal_6c0a0c0, public_6c0a0c0);
/* CHUNK of public_6bd3f20 */
extern "C" NAKED register_t __cdecl internal_6c0a0c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x70
        jmp dword ptr ds : [public_6c0b044]
        public_6c0a0cc : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x80
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a0db : nop
        mov eax, offset public_6c0e7dc
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a0c0)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a0cc, public_6c0a0cc)
        ASM_EXPORT_ENTRY_LAST(0x6c0a0db, public_6c0a0db)
    }
}

#undef public_6c0a0cc
#undef public_6c0a0db

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a0cc = __AsmFindLabelExport(&internal_6c0a0c0, 0x6c0a0cc);
extern "C" void const* const public_6c0a0db = __AsmFindLabelExport(&internal_6c0a0c0, 0x6c0a0db);
