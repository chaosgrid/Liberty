#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8162);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);

#define public_6ef819f _public_6ef819f
#define public_6ef81a3 _public_6ef81a3
#define public_6ef81a6 _public_6ef81a6
#define public_6ef81aa _public_6ef81aa
#define public_6ef81b3 _public_6ef81b3

PROC_DECLARE(0x6ef8162, internal_6ef8162, public_6ef8162);
extern "C" NAKED register_t __cdecl internal_6ef8162()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc470 @0x6ef8167*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc470
/*FIXUP push offset _public_6efa070 @0x6ef816c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        and dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ds : [public_6f00564]
        test eax, eax
        je public_6ef81aa
        mov dword ptr ss : [ebp-4], 1
        call eax
        jmp public_6ef81a6
        public_6ef819f : nop
        push 1
        pop eax
        ret 
        public_6ef81a3 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6ef81a6 : nop
        and dword ptr ss : [ebp-4], 0
        public_6ef81aa : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ef81b3
        public_6ef81b3 : nop
        jmp public_6ef810c
        UNREACHABLE_TRAP(0x6ef8162)
        ASM_EXPORT_ENTRY_FIRST(0x6ef819f, public_6ef819f)
        ASM_EXPORT_ENTRY(0x6ef81a3, public_6ef81a3)
        ASM_EXPORT_ENTRY_LAST(0x6ef81b3, public_6ef81b3)
    }
}

#undef public_6ef819f
#undef public_6ef81a3
#undef public_6ef81a6
#undef public_6ef81aa
#undef public_6ef81b3

#pragma init_seg(compiler)
extern "C" void const* const public_6ef819f = __AsmFindLabelExport(&internal_6ef8162, 0x6ef819f);
extern "C" void const* const public_6ef81a3 = __AsmFindLabelExport(&internal_6ef8162, 0x6ef81a3);
extern "C" void const* const public_6ef81b3 = __AsmFindLabelExport(&internal_6ef8162, 0x6ef81b3);
