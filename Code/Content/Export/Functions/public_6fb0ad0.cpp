#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f85550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb0adb _public_6fb0adb
#define public_6fb0ae7 _public_6fb0ae7
#define public_6fb0aef _public_6fb0aef

PROC_DECLARE(0x6fb0ad0, internal_6fb0ad0, public_6fb0ad0);
/* CHUNK of public_6f85aa0 */
extern "C" NAKED register_t __cdecl internal_6fb0ad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb0adb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp dword ptr ds : [public_6fb3034]
        public_6fb0ae7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f85550
        public_6fb0aef : nop
        mov eax, offset public_6fc5e34
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb0ad0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb0adb, public_6fb0adb)
        ASM_EXPORT_ENTRY(0x6fb0ae7, public_6fb0ae7)
        ASM_EXPORT_ENTRY_LAST(0x6fb0aef, public_6fb0aef)
    }
}

#undef public_6fb0adb
#undef public_6fb0ae7
#undef public_6fb0aef

#pragma init_seg(compiler)
extern "C" void const* const public_6fb0adb = __AsmFindLabelExport(&internal_6fb0ad0, 0x6fb0adb);
extern "C" void const* const public_6fb0ae7 = __AsmFindLabelExport(&internal_6fb0ad0, 0x6fb0ae7);
extern "C" void const* const public_6fb0aef = __AsmFindLabelExport(&internal_6fb0ad0, 0x6fb0aef);
