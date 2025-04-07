#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_48e5f0);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5870b0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c427b _public_5c427b
#define public_5c4286 _public_5c4286
#define public_5c4297 _public_5c4297
#define public_5c42a8 _public_5c42a8
#define public_5c42ba _public_5c42ba
#define public_5c42cb _public_5c42cb
#define public_5c42dc _public_5c42dc
#define public_5c42ed _public_5c42ed
#define public_5c42fb _public_5c42fb

PROC_DECLARE(0x5c4270, internal_5c4270, public_5c4270);
/* CHUNK of public_5836a0 */
extern "C" NAKED register_t __cdecl internal_5c4270()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x90]
        jmp public_59fa50
        public_5c427b : nop
        mov ecx, dword ptr ss : [ebp-0xA4]
        jmp public_420d10
        public_5c4286 : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        add ecx, 0x330
        jmp public_59ef20
        public_5c4297 : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        add ecx, 0x388
        jmp public_48e5f0
        public_5c42a8 : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        add ecx, 0x4C8
        jmp dword ptr ds : [public_5c60fc]
        public_5c42ba : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        add ecx, 0x538
        jmp public_4de730
        public_5c42cb : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        add ecx, 0x54C
        jmp public_4de730
        public_5c42dc : nop
        mov ecx, dword ptr ss : [ebp-0x90]
        add ecx, 0x560
        jmp public_5870b0
        public_5c42ed : nop
        mov eax, dword ptr ss : [ebp-0x94]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c42fb : nop
        mov eax, offset public_5fdf0c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c4270)
        ASM_EXPORT_ENTRY_FIRST(0x5c427b, public_5c427b)
        ASM_EXPORT_ENTRY(0x5c4286, public_5c4286)
        ASM_EXPORT_ENTRY(0x5c4297, public_5c4297)
        ASM_EXPORT_ENTRY(0x5c42a8, public_5c42a8)
        ASM_EXPORT_ENTRY(0x5c42ba, public_5c42ba)
        ASM_EXPORT_ENTRY(0x5c42cb, public_5c42cb)
        ASM_EXPORT_ENTRY(0x5c42dc, public_5c42dc)
        ASM_EXPORT_ENTRY(0x5c42ed, public_5c42ed)
        ASM_EXPORT_ENTRY_LAST(0x5c42fb, public_5c42fb)
    }
}

#undef public_5c427b
#undef public_5c4286
#undef public_5c4297
#undef public_5c42a8
#undef public_5c42ba
#undef public_5c42cb
#undef public_5c42dc
#undef public_5c42ed
#undef public_5c42fb

#pragma init_seg(compiler)
extern "C" void const* const public_5c427b = __AsmFindLabelExport(&internal_5c4270, 0x5c427b);
extern "C" void const* const public_5c4286 = __AsmFindLabelExport(&internal_5c4270, 0x5c4286);
extern "C" void const* const public_5c4297 = __AsmFindLabelExport(&internal_5c4270, 0x5c4297);
extern "C" void const* const public_5c42a8 = __AsmFindLabelExport(&internal_5c4270, 0x5c42a8);
extern "C" void const* const public_5c42ba = __AsmFindLabelExport(&internal_5c4270, 0x5c42ba);
extern "C" void const* const public_5c42cb = __AsmFindLabelExport(&internal_5c4270, 0x5c42cb);
extern "C" void const* const public_5c42dc = __AsmFindLabelExport(&internal_5c4270, 0x5c42dc);
extern "C" void const* const public_5c42ed = __AsmFindLabelExport(&internal_5c4270, 0x5c42ed);
extern "C" void const* const public_5c42fb = __AsmFindLabelExport(&internal_5c4270, 0x5c42fb);
