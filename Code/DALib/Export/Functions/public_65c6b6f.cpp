#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6b6f);
CLANG_FORWARD_PROC_SYMBOL(public_65c6bcd);
CLANG_FORWARD_PROC_SYMBOL(public_65c6d3e);

#define public_65c6b98 _public_65c6b98
#define public_65c6bab _public_65c6bab
#define public_65c6bb5 _public_65c6bb5
#define public_65c6bb8 _public_65c6bb8

PROC_DECLARE(0x65c6b6f, internal_65c6b6f, public_65c6b6f);
extern "C" NAKED register_t __cdecl internal_65c6b6f()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65c7630 @0x65c6b74*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7630
/*FIXUP push offset _public_65c6d3e @0x65c6b79*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c6d3e
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
        public_65c6b98 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_65c6bb8
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_65c6b98
        public_65c6bab : nop
        push dword ptr ss : [ebp-0x14]
        call public_65c6bcd
        pop ecx
        ret 
        public_65c6bb5 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_65c6bb8 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x65c6b6f)
        ASM_EXPORT_ENTRY_FIRST(0x65c6bab, public_65c6bab)
        ASM_EXPORT_ENTRY_LAST(0x65c6bb5, public_65c6bb5)
    }
}

#undef public_65c6b98
#undef public_65c6bab
#undef public_65c6bb5
#undef public_65c6bb8

#pragma init_seg(compiler)
extern "C" void const* const public_65c6bab = __AsmFindLabelExport(&internal_65c6b6f, 0x65c6bab);
extern "C" void const* const public_65c6bb5 = __AsmFindLabelExport(&internal_65c6b6f, 0x65c6bb5);
