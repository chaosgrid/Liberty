#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_426de0);
CLANG_FORWARD_PROC_SYMBOL(public_4ff0a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);

#define public_5bf5a6 _public_5bf5a6
#define public_5bf5b4 _public_5bf5b4
#define public_5bf5c2 _public_5bf5c2
#define public_5bf5d0 _public_5bf5d0
#define public_5bf5de _public_5bf5de
#define public_5bf5ec _public_5bf5ec
#define public_5bf5fa _public_5bf5fa
#define public_5bf608 _public_5bf608
#define public_5bf616 _public_5bf616
#define public_5bf624 _public_5bf624

PROC_DECLARE(0x5bf590, internal_5bf590, public_5bf590);
/* CHUNK of public_4fee30 */
extern "C" NAKED register_t __cdecl internal_5bf590()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
/*FIXUP push offset _public_426de0 @0x5bf590*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_426de0
        push 2
        push 0x34
        mov eax, dword ptr ss : [ebp-0x1C]
        add eax, 0xC
        push eax
        call public_5b7ec6
        ret 
        public_5bf5a6 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xC8
        jmp public_4ff0a0
        public_5bf5b4 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xF0
        jmp public_4ff0a0
        public_5bf5c2 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x118
        jmp public_4ff0a0
        public_5bf5d0 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x140
        jmp public_4ff0a0
        public_5bf5de : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x168
        jmp public_4ff0a0
        public_5bf5ec : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x190
        jmp public_4ff0a0
        public_5bf5fa : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x1B8
        jmp public_4ff0a0
        public_5bf608 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x1E0
        jmp public_4ff0a0
        public_5bf616 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x208
        jmp public_4ff0a0
        public_5bf624 : nop
        mov eax, offset public_5f95c0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf590)
        ASM_EXPORT_ENTRY_FIRST(0x5bf5a6, public_5bf5a6)
        ASM_EXPORT_ENTRY(0x5bf5b4, public_5bf5b4)
        ASM_EXPORT_ENTRY(0x5bf5c2, public_5bf5c2)
        ASM_EXPORT_ENTRY(0x5bf5d0, public_5bf5d0)
        ASM_EXPORT_ENTRY(0x5bf5de, public_5bf5de)
        ASM_EXPORT_ENTRY(0x5bf5ec, public_5bf5ec)
        ASM_EXPORT_ENTRY(0x5bf5fa, public_5bf5fa)
        ASM_EXPORT_ENTRY(0x5bf608, public_5bf608)
        ASM_EXPORT_ENTRY(0x5bf616, public_5bf616)
        ASM_EXPORT_ENTRY_LAST(0x5bf624, public_5bf624)
    }
}

#undef public_5bf5a6
#undef public_5bf5b4
#undef public_5bf5c2
#undef public_5bf5d0
#undef public_5bf5de
#undef public_5bf5ec
#undef public_5bf5fa
#undef public_5bf608
#undef public_5bf616
#undef public_5bf624

#pragma init_seg(compiler)
extern "C" void const* const public_5bf5a6 = __AsmFindLabelExport(&internal_5bf590, 0x5bf5a6);
extern "C" void const* const public_5bf5b4 = __AsmFindLabelExport(&internal_5bf590, 0x5bf5b4);
extern "C" void const* const public_5bf5c2 = __AsmFindLabelExport(&internal_5bf590, 0x5bf5c2);
extern "C" void const* const public_5bf5d0 = __AsmFindLabelExport(&internal_5bf590, 0x5bf5d0);
extern "C" void const* const public_5bf5de = __AsmFindLabelExport(&internal_5bf590, 0x5bf5de);
extern "C" void const* const public_5bf5ec = __AsmFindLabelExport(&internal_5bf590, 0x5bf5ec);
extern "C" void const* const public_5bf5fa = __AsmFindLabelExport(&internal_5bf590, 0x5bf5fa);
extern "C" void const* const public_5bf608 = __AsmFindLabelExport(&internal_5bf590, 0x5bf608);
extern "C" void const* const public_5bf616 = __AsmFindLabelExport(&internal_5bf590, 0x5bf616);
extern "C" void const* const public_5bf624 = __AsmFindLabelExport(&internal_5bf590, 0x5bf624);
