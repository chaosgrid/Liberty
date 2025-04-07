#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d50);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d6d1d);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e08);
CLANG_FORWARD_PROC_SYMBOL(public_65d6e7a);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f0d);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d819c);
CLANG_FORWARD_PROC_SYMBOL(public_65d81bb);
CLANG_FORWARD_JUMP_SYMBOL(public_65e019c);

#define public_65d6ed4 _public_65d6ed4
#define public_65d6ef1 _public_65d6ef1
#define public_65d6f07 _public_65d6f07

PROC_DECLARE(0x65d6e7a, internal_65d6e7a, public_65d6e7a);
extern "C" NAKED register_t __cdecl internal_65d6e7a()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, public_65e019c
        call public_65d819c
        sub esp, 0x30
        mov al, byte ptr ss : [ebp-0xD]
        push esi
        push 0
        lea ecx, ss:[ebp-0x20]
        mov byte ptr ss : [ebp-0x20], al
        call public_65d3b40
        mov esi, offset public_65e15a8
        push esi
        call public_65d8120
        pop ecx
        push eax
        push esi
        lea ecx, ss:[ebp-0x20]
        call public_65d3d50
        and dword ptr ss : [ebp-4], 0
        lea eax, ss:[ebp-0x20]
        push eax
        lea ecx, ss:[ebp-0x3C]
        call public_65d6d1d
        lea eax, ss:[ebp-0x3C]
/*FIXUP push offset public_65e23d8 @0x65d6ec1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e23d8
        push eax
        mov dword ptr ss : [ebp-0x3C], offset public_65e159c
        call public_65d81bb
        pop esi
        public_65d6ed4 : nop
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        push ecx
        lea ecx, ss:[ebp-0x1C]
        call public_65d6f0d
        lea eax, ss:[ebp-0x1C]
/*FIXUP push offset public_65e23d8 @0x65d6ee6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e23d8
        push eax
        call public_65d81bb
        public_65d6ef1 : nop
        push esi
        mov esi, ecx
        call public_65d6e08
        test byte ptr ss : [esp+8], 1
        je public_65d6f07
        push esi
        call public_65d6cb8
        pop ecx
        public_65d6f07 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d6e7a)
        ASM_EXPORT_ENTRY_FIRST(0x65d6ed4, public_65d6ed4)
        ASM_EXPORT_ENTRY_LAST(0x65d6ef1, public_65d6ef1)
    }
}

#undef public_65d6ed4
#undef public_65d6ef1
#undef public_65d6f07

#pragma init_seg(compiler)
extern "C" void const* const public_65d6ed4 = __AsmFindLabelExport(&internal_65d6e7a, 0x65d6ed4);
extern "C" void const* const public_65d6ef1 = __AsmFindLabelExport(&internal_65d6e7a, 0x65d6ef1);
