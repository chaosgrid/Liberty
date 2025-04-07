#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65d9068);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);
CLANG_FORWARD_PROC_SYMBOL(public_65dd390);

#define public_65d90b0 _public_65d90b0
#define public_65d90b4 _public_65d90b4
#define public_65d90bb _public_65d90bb
#define public_65d90c4 _public_65d90c4

PROC_DECLARE(0x65d9068, internal_65d9068, public_65d9068);
extern "C" NAKED register_t __cdecl internal_65d9068()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1680 @0x65d906d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1680
/*FIXUP push offset _public_65dcf2c @0x65d9072*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
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
        call public_65d8f61
        cmp dword ptr ds : [eax+0x60], esi
        je public_65d90bb
        mov dword ptr ss : [ebp-4], 1
        call public_65d8f61
        call dword ptr ds : [eax+0x60]
        mov dword ptr ss : [ebp-4], esi
        jmp public_65d90bb
        public_65d90b0 : nop
        push 1
        pop eax
        ret 
        public_65d90b4 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        and dword ptr ss : [ebp-4], 0
        public_65d90bb : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d90c4
        public_65d90c4 : nop
        jmp public_65dd390
        UNREACHABLE_TRAP(0x65d9068)
        ASM_EXPORT_ENTRY_FIRST(0x65d90b0, public_65d90b0)
        ASM_EXPORT_ENTRY(0x65d90b4, public_65d90b4)
        ASM_EXPORT_ENTRY_LAST(0x65d90c4, public_65d90c4)
    }
}

#undef public_65d90b0
#undef public_65d90b4
#undef public_65d90bb
#undef public_65d90c4

#pragma init_seg(compiler)
extern "C" void const* const public_65d90b0 = __AsmFindLabelExport(&internal_65d9068, 0x65d90b0);
extern "C" void const* const public_65d90b4 = __AsmFindLabelExport(&internal_65d9068, 0x65d90b4);
extern "C" void const* const public_65d90c4 = __AsmFindLabelExport(&internal_65d9068, 0x65d90c4);
