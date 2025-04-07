#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b210);
CLANG_FORWARD_PROC_SYMBOL(public_620b260);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248f4b _public_6248f4b
#define public_6248f53 _public_6248f53
#define public_6248f5e _public_6248f5e
#define public_6248f66 _public_6248f66
#define public_6248f71 _public_6248f71
#define public_6248f7c _public_6248f7c

PROC_DECLARE(0x6248f40, internal_6248f40, public_6248f40);
/* CHUNK of public_6225be0 */
extern "C" NAKED register_t __cdecl internal_6248f40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248f4b : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620c070
        public_6248f53 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x60
        jmp public_620b300
        public_6248f5e : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_620b260
        public_6248f66 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x4C
        jmp public_620b210
        public_6248f71 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 4
        jmp public_620b300
        public_6248f7c : nop
        mov eax, offset public_6251ec0
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248f40)
        ASM_EXPORT_ENTRY_FIRST(0x6248f4b, public_6248f4b)
        ASM_EXPORT_ENTRY(0x6248f53, public_6248f53)
        ASM_EXPORT_ENTRY(0x6248f5e, public_6248f5e)
        ASM_EXPORT_ENTRY(0x6248f66, public_6248f66)
        ASM_EXPORT_ENTRY(0x6248f71, public_6248f71)
        ASM_EXPORT_ENTRY_LAST(0x6248f7c, public_6248f7c)
    }
}

#undef public_6248f4b
#undef public_6248f53
#undef public_6248f5e
#undef public_6248f66
#undef public_6248f71
#undef public_6248f7c

#pragma init_seg(compiler)
extern "C" void const* const public_6248f4b = __AsmFindLabelExport(&internal_6248f40, 0x6248f4b);
extern "C" void const* const public_6248f53 = __AsmFindLabelExport(&internal_6248f40, 0x6248f53);
extern "C" void const* const public_6248f5e = __AsmFindLabelExport(&internal_6248f40, 0x6248f5e);
extern "C" void const* const public_6248f66 = __AsmFindLabelExport(&internal_6248f40, 0x6248f66);
extern "C" void const* const public_6248f71 = __AsmFindLabelExport(&internal_6248f40, 0x6248f71);
extern "C" void const* const public_6248f7c = __AsmFindLabelExport(&internal_6248f40, 0x6248f7c);
