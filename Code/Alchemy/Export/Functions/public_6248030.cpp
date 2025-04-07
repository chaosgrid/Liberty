#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6207470);
CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248038 _public_6248038
#define public_6248043 _public_6248043
#define public_624804e _public_624804e
#define public_6248059 _public_6248059
#define public_6248061 _public_6248061
#define public_624806c _public_624806c
#define public_6248077 _public_6248077
#define public_624807f _public_624807f
#define public_624808a _public_624808a

PROC_DECLARE(0x6248030, internal_6248030, public_6248030);
/* CHUNK of public_6213e00 */
extern "C" NAKED register_t __cdecl internal_6248030()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6212ec0
        public_6248038 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x4C
        jmp public_62084b0
        public_6248043 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x50
        jmp public_62084b0
        public_624804e : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248059 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207470
        public_6248061 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624806c : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_6248077 : nop
        lea ecx, ss:[ebp-0x18]
        jmp public_6207470
        public_624807f : nop
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_62460e0
        pop ecx
        ret 
        public_624808a : nop
        mov eax, offset public_6250f04
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248030)
        ASM_EXPORT_ENTRY_FIRST(0x6248038, public_6248038)
        ASM_EXPORT_ENTRY(0x6248043, public_6248043)
        ASM_EXPORT_ENTRY(0x624804e, public_624804e)
        ASM_EXPORT_ENTRY(0x6248059, public_6248059)
        ASM_EXPORT_ENTRY(0x6248061, public_6248061)
        ASM_EXPORT_ENTRY(0x624806c, public_624806c)
        ASM_EXPORT_ENTRY(0x6248077, public_6248077)
        ASM_EXPORT_ENTRY(0x624807f, public_624807f)
        ASM_EXPORT_ENTRY_LAST(0x624808a, public_624808a)
    }
}

#undef public_6248038
#undef public_6248043
#undef public_624804e
#undef public_6248059
#undef public_6248061
#undef public_624806c
#undef public_6248077
#undef public_624807f
#undef public_624808a

#pragma init_seg(compiler)
extern "C" void const* const public_6248038 = __AsmFindLabelExport(&internal_6248030, 0x6248038);
extern "C" void const* const public_6248043 = __AsmFindLabelExport(&internal_6248030, 0x6248043);
extern "C" void const* const public_624804e = __AsmFindLabelExport(&internal_6248030, 0x624804e);
extern "C" void const* const public_6248059 = __AsmFindLabelExport(&internal_6248030, 0x6248059);
extern "C" void const* const public_6248061 = __AsmFindLabelExport(&internal_6248030, 0x6248061);
extern "C" void const* const public_624806c = __AsmFindLabelExport(&internal_6248030, 0x624806c);
extern "C" void const* const public_6248077 = __AsmFindLabelExport(&internal_6248030, 0x6248077);
extern "C" void const* const public_624807f = __AsmFindLabelExport(&internal_6248030, 0x624807f);
extern "C" void const* const public_624808a = __AsmFindLabelExport(&internal_6248030, 0x624808a);
