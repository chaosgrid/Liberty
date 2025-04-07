#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b385e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a808 _public_6b6a808
#define public_6b6a813 _public_6b6a813
#define public_6b6a822 _public_6b6a822
#define public_6b6a831 _public_6b6a831
#define public_6b6a83f _public_6b6a83f
#define public_6b6a84e _public_6b6a84e

PROC_DECLARE(0x6b6a800, internal_6b6a800, public_6b6a800);
/* CHUNK of public_6b40380 */
extern "C" NAKED register_t __cdecl internal_6b6a800()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6b4e730
        public_6b6a808 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x24
        jmp public_6b385e0
        public_6b6a813 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x204
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a822 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x214
        jmp dword ptr ds : [public_6b6b188]
        public_6b6a831 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x264
        jmp public_6b3a450
        public_6b6a83f : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x268
        jmp dword ptr ds : [public_6b6b008]
        public_6b6a84e : nop
        mov eax, offset public_6b6ef04
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a800)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a808, public_6b6a808)
        ASM_EXPORT_ENTRY(0x6b6a813, public_6b6a813)
        ASM_EXPORT_ENTRY(0x6b6a822, public_6b6a822)
        ASM_EXPORT_ENTRY(0x6b6a831, public_6b6a831)
        ASM_EXPORT_ENTRY(0x6b6a83f, public_6b6a83f)
        ASM_EXPORT_ENTRY_LAST(0x6b6a84e, public_6b6a84e)
    }
}

#undef public_6b6a808
#undef public_6b6a813
#undef public_6b6a822
#undef public_6b6a831
#undef public_6b6a83f
#undef public_6b6a84e

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a808 = __AsmFindLabelExport(&internal_6b6a800, 0x6b6a808);
extern "C" void const* const public_6b6a813 = __AsmFindLabelExport(&internal_6b6a800, 0x6b6a813);
extern "C" void const* const public_6b6a822 = __AsmFindLabelExport(&internal_6b6a800, 0x6b6a822);
extern "C" void const* const public_6b6a831 = __AsmFindLabelExport(&internal_6b6a800, 0x6b6a831);
extern "C" void const* const public_6b6a83f = __AsmFindLabelExport(&internal_6b6a800, 0x6b6a83f);
extern "C" void const* const public_6b6a84e = __AsmFindLabelExport(&internal_6b6a800, 0x6b6a84e);
