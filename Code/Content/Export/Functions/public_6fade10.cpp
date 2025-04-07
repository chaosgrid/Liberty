#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa90);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fade21 _public_6fade21
#define public_6fade32 _public_6fade32
#define public_6fade3d _public_6fade3d
#define public_6fade45 _public_6fade45
#define public_6fade50 _public_6fade50
#define public_6fade5b _public_6fade5b

PROC_DECLARE(0x6fade10, internal_6fade10, public_6fade10);
/* CHUNK of public_6f21d40 */
extern "C" NAKED register_t __cdecl internal_6fade10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x20]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fade21 : nop
        mov eax, dword ptr ss : [ebp-0x24]
        push eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6fade32 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x3C
        jmp public_6f15350
        public_6fade3d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f15350
        public_6fade45 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x58
        jmp public_6ecfa90
        public_6fade50 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x68
        jmp public_6f28e10
        public_6fade5b : nop
        mov eax, offset public_6fc2d80
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fade10)
        ASM_EXPORT_ENTRY_FIRST(0x6fade21, public_6fade21)
        ASM_EXPORT_ENTRY(0x6fade32, public_6fade32)
        ASM_EXPORT_ENTRY(0x6fade3d, public_6fade3d)
        ASM_EXPORT_ENTRY(0x6fade45, public_6fade45)
        ASM_EXPORT_ENTRY(0x6fade50, public_6fade50)
        ASM_EXPORT_ENTRY_LAST(0x6fade5b, public_6fade5b)
    }
}

#undef public_6fade21
#undef public_6fade32
#undef public_6fade3d
#undef public_6fade45
#undef public_6fade50
#undef public_6fade5b

#pragma init_seg(compiler)
extern "C" void const* const public_6fade21 = __AsmFindLabelExport(&internal_6fade10, 0x6fade21);
extern "C" void const* const public_6fade32 = __AsmFindLabelExport(&internal_6fade10, 0x6fade32);
extern "C" void const* const public_6fade3d = __AsmFindLabelExport(&internal_6fade10, 0x6fade3d);
extern "C" void const* const public_6fade45 = __AsmFindLabelExport(&internal_6fade10, 0x6fade45);
extern "C" void const* const public_6fade50 = __AsmFindLabelExport(&internal_6fade10, 0x6fade50);
extern "C" void const* const public_6fade5b = __AsmFindLabelExport(&internal_6fade10, 0x6fade5b);
