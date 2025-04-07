#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a11c _public_6c0a11c
#define public_6c0a12b _public_6c0a12b

PROC_DECLARE(0x6c0a110, internal_6c0a110, public_6c0a110);
/* CHUNK of public_6bd4390 */
extern "C" NAKED register_t __cdecl internal_6c0a110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6c0b044]
        public_6c0a11c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6c0b03c]
        public_6c0a12b : nop
        mov eax, offset public_6c0e82c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a110)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a11c, public_6c0a11c)
        ASM_EXPORT_ENTRY_LAST(0x6c0a12b, public_6c0a12b)
    }
}

#undef public_6c0a11c
#undef public_6c0a12b

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a11c = __AsmFindLabelExport(&internal_6c0a110, 0x6c0a11c);
extern "C" void const* const public_6c0a12b = __AsmFindLabelExport(&internal_6c0a110, 0x6c0a12b);
