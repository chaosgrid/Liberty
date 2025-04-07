#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9068);
CLANG_FORWARD_PROC_SYMBOL(public_65d90c9);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d9106 _public_65d9106
#define public_65d910a _public_65d910a
#define public_65d910d _public_65d910d
#define public_65d9111 _public_65d9111
#define public_65d911a _public_65d911a

PROC_DECLARE(0x65d90c9, internal_65d90c9, public_65d90c9);
extern "C" NAKED register_t __cdecl internal_65d90c9()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1698 @0x65d90ce*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1698
/*FIXUP push offset _public_65dcf2c @0x65d90d3*/
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
        and dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ds : [public_65e3444]
        test eax, eax
        je public_65d9111
        mov dword ptr ss : [ebp-4], 1
        call eax
        jmp public_65d910d
        public_65d9106 : nop
        push 1
        pop eax
        ret 
        public_65d910a : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_65d910d : nop
        and dword ptr ss : [ebp-4], 0
        public_65d9111 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d911a
        public_65d911a : nop
        jmp public_65d9068
        UNREACHABLE_TRAP(0x65d90c9)
        ASM_EXPORT_ENTRY_FIRST(0x65d9106, public_65d9106)
        ASM_EXPORT_ENTRY(0x65d910a, public_65d910a)
        ASM_EXPORT_ENTRY_LAST(0x65d911a, public_65d911a)
    }
}

#undef public_65d9106
#undef public_65d910a
#undef public_65d910d
#undef public_65d9111
#undef public_65d911a

#pragma init_seg(compiler)
extern "C" void const* const public_65d9106 = __AsmFindLabelExport(&internal_65d90c9, 0x65d9106);
extern "C" void const* const public_65d910a = __AsmFindLabelExport(&internal_65d90c9, 0x65d910a);
extern "C" void const* const public_65d911a = __AsmFindLabelExport(&internal_65d90c9, 0x65d911a);
