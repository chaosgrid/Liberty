#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a8bb _public_6b6a8bb
#define public_6b6a8ca _public_6b6a8ca
#define public_6b6a8d9 _public_6b6a8d9
#define public_6b6a8e7 _public_6b6a8e7

PROC_DECLARE(0x6b6a8b0, internal_6b6a8b0, public_6b6a8b0);
/* CHUNK of public_6b41530 */
extern "C" NAKED register_t __cdecl internal_6b6a8b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x1C]
        push eax
        call public_6b6a092
        pop ecx
        ret 
        public_6b6a8bb : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x204
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a8ca : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x214
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a8d9 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x264
        jmp public_6b3a450
        public_6b6a8e7 : nop
        mov eax, offset public_6b6ef7c
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a8b0)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a8bb, public_6b6a8bb)
        ASM_EXPORT_ENTRY(0x6b6a8ca, public_6b6a8ca)
        ASM_EXPORT_ENTRY(0x6b6a8d9, public_6b6a8d9)
        ASM_EXPORT_ENTRY_LAST(0x6b6a8e7, public_6b6a8e7)
    }
}

#undef public_6b6a8bb
#undef public_6b6a8ca
#undef public_6b6a8d9
#undef public_6b6a8e7

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a8bb = __AsmFindLabelExport(&internal_6b6a8b0, 0x6b6a8bb);
extern "C" void const* const public_6b6a8ca = __AsmFindLabelExport(&internal_6b6a8b0, 0x6b6a8ca);
extern "C" void const* const public_6b6a8d9 = __AsmFindLabelExport(&internal_6b6a8b0, 0x6b6a8d9);
extern "C" void const* const public_6b6a8e7 = __AsmFindLabelExport(&internal_6b6a8b0, 0x6b6a8e7);
