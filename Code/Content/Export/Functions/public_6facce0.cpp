#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faccec _public_6faccec
#define public_6faccf8 _public_6faccf8
#define public_6facd04 _public_6facd04

PROC_DECLARE(0x6facce0, internal_6facce0, public_6facce0);
/* CHUNK of public_6f04b10 */
extern "C" NAKED register_t __cdecl internal_6facce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp dword ptr ds : [public_6fb3034]
        public_6faccec : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x28
        jmp dword ptr ds : [public_6fb3034]
        public_6faccf8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp dword ptr ds : [public_6fb3034]
        public_6facd04 : nop
        mov eax, offset public_6fc19c4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facce0)
        ASM_EXPORT_ENTRY_FIRST(0x6faccec, public_6faccec)
        ASM_EXPORT_ENTRY(0x6faccf8, public_6faccf8)
        ASM_EXPORT_ENTRY_LAST(0x6facd04, public_6facd04)
    }
}

#undef public_6faccec
#undef public_6faccf8
#undef public_6facd04

#pragma init_seg(compiler)
extern "C" void const* const public_6faccec = __AsmFindLabelExport(&internal_6facce0, 0x6faccec);
extern "C" void const* const public_6faccf8 = __AsmFindLabelExport(&internal_6facce0, 0x6faccf8);
extern "C" void const* const public_6facd04 = __AsmFindLabelExport(&internal_6facce0, 0x6facd04);
