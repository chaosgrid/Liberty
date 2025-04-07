#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_624a568 _public_624a568
#define public_624a573 _public_624a573
#define public_624a57e _public_624a57e
#define public_624a589 _public_624a589
#define public_624a591 _public_624a591
#define public_624a59c _public_624a59c
#define public_624a5a7 _public_624a5a7
#define public_624a5af _public_624a5af
#define public_624a5ba _public_624a5ba

PROC_DECLARE(0x624a560, internal_624a560, public_624a560);
/* CHUNK of public_623d2a0 */
extern "C" NAKED register_t __cdecl internal_624a560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6212ec0
        public_624a568 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62084b0
        public_624a573 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_62084b0
        public_624a57e : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a589 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207470
        public_624a591 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a59c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a5a7 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207470
        public_624a5af : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624a5ba : nop
        mov eax, offset public_6253604
        jmp public_6246126
        UNREACHABLE_TRAP(0x624a560)
        ASM_EXPORT_ENTRY_FIRST(0x624a568, public_624a568)
        ASM_EXPORT_ENTRY(0x624a573, public_624a573)
        ASM_EXPORT_ENTRY(0x624a57e, public_624a57e)
        ASM_EXPORT_ENTRY(0x624a589, public_624a589)
        ASM_EXPORT_ENTRY(0x624a591, public_624a591)
        ASM_EXPORT_ENTRY(0x624a59c, public_624a59c)
        ASM_EXPORT_ENTRY(0x624a5a7, public_624a5a7)
        ASM_EXPORT_ENTRY(0x624a5af, public_624a5af)
        ASM_EXPORT_ENTRY_LAST(0x624a5ba, public_624a5ba)
    }
}

#undef public_624a568
#undef public_624a573
#undef public_624a57e
#undef public_624a589
#undef public_624a591
#undef public_624a59c
#undef public_624a5a7
#undef public_624a5af
#undef public_624a5ba

#pragma init_seg(compiler)
extern "C" void const* const public_624a568 = __AsmFindLabelExport(&internal_624a560, 0x624a568);
extern "C" void const* const public_624a573 = __AsmFindLabelExport(&internal_624a560, 0x624a573);
extern "C" void const* const public_624a57e = __AsmFindLabelExport(&internal_624a560, 0x624a57e);
extern "C" void const* const public_624a589 = __AsmFindLabelExport(&internal_624a560, 0x624a589);
extern "C" void const* const public_624a591 = __AsmFindLabelExport(&internal_624a560, 0x624a591);
extern "C" void const* const public_624a59c = __AsmFindLabelExport(&internal_624a560, 0x624a59c);
extern "C" void const* const public_624a5a7 = __AsmFindLabelExport(&internal_624a560, 0x624a5a7);
extern "C" void const* const public_624a5af = __AsmFindLabelExport(&internal_624a560, 0x624a5af);
extern "C" void const* const public_624a5ba = __AsmFindLabelExport(&internal_624a560, 0x624a5ba);
