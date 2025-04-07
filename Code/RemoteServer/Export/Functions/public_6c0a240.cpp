#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd57c0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a248 _public_6c0a248
#define public_6c0a257 _public_6c0a257
#define public_6c0a266 _public_6c0a266
#define public_6c0a275 _public_6c0a275

PROC_DECLARE(0x6c0a240, internal_6c0a240, public_6c0a240);
/* CHUNK of public_6bd4f00 */
extern "C" NAKED register_t __cdecl internal_6c0a240()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6bd57c0
        public_6c0a248 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x204
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a257 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x214
        jmp dword ptr ds : [public_6c0b1b0]
        public_6c0a266 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x248
        jmp dword ptr ds : [public_6c0b0cc]
        public_6c0a275 : nop
        mov eax, offset public_6c0e934
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a240)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a248, public_6c0a248)
        ASM_EXPORT_ENTRY(0x6c0a257, public_6c0a257)
        ASM_EXPORT_ENTRY(0x6c0a266, public_6c0a266)
        ASM_EXPORT_ENTRY_LAST(0x6c0a275, public_6c0a275)
    }
}

#undef public_6c0a248
#undef public_6c0a257
#undef public_6c0a266
#undef public_6c0a275

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a248 = __AsmFindLabelExport(&internal_6c0a240, 0x6c0a248);
extern "C" void const* const public_6c0a257 = __AsmFindLabelExport(&internal_6c0a240, 0x6c0a257);
extern "C" void const* const public_6c0a266 = __AsmFindLabelExport(&internal_6c0a240, 0x6c0a266);
extern "C" void const* const public_6c0a275 = __AsmFindLabelExport(&internal_6c0a240, 0x6c0a275);
