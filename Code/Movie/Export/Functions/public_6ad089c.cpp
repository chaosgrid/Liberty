#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad089c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52a5);

#define public_6ad08e4 _public_6ad08e4
#define public_6ad08e8 _public_6ad08e8
#define public_6ad08ef _public_6ad08ef
#define public_6ad08f8 _public_6ad08f8

PROC_DECLARE(0x6ad089c, internal_6ad089c, public_6ad089c);
extern "C" NAKED register_t __cdecl internal_6ad089c()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6ada9f0 @0x6ad08a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada9f0
/*FIXUP push offset _public_6ad023c @0x6ad08a6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        xor esi, esi
        mov dword ptr ss : [ebp-4], esi
        call public_6ad1381
        cmp dword ptr ds : [eax+0x60], esi
        je public_6ad08ef
        mov dword ptr ss : [ebp-4], 1
        call public_6ad1381
        call dword ptr ds : [eax+0x60]
        mov dword ptr ss : [ebp-4], esi
        jmp public_6ad08ef
        public_6ad08e4 : nop
        push 1
        pop eax
        ret 
        public_6ad08e8 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        and dword ptr ss : [ebp-4], 0
        public_6ad08ef : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad08f8
        public_6ad08f8 : nop
        jmp public_6ad52a5
        UNREACHABLE_TRAP(0x6ad089c)
        ASM_EXPORT_ENTRY_FIRST(0x6ad08e4, public_6ad08e4)
        ASM_EXPORT_ENTRY(0x6ad08e8, public_6ad08e8)
        ASM_EXPORT_ENTRY_LAST(0x6ad08f8, public_6ad08f8)
    }
}

#undef public_6ad08e4
#undef public_6ad08e8
#undef public_6ad08ef
#undef public_6ad08f8

#pragma init_seg(compiler)
extern "C" void const* const public_6ad08e4 = __AsmFindLabelExport(&internal_6ad089c, 0x6ad08e4);
extern "C" void const* const public_6ad08e8 = __AsmFindLabelExport(&internal_6ad089c, 0x6ad08e8);
extern "C" void const* const public_6ad08f8 = __AsmFindLabelExport(&internal_6ad089c, 0x6ad08f8);
