#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6aef);
CLANG_FORWARD_PROC_SYMBOL(public_65c6b6f);
CLANG_FORWARD_PROC_SYMBOL(public_65c6d3e);

#define public_65c6b26 _public_65c6b26
#define public_65c6b36 _public_65c6b36
#define public_65c6b57 _public_65c6b57
#define public_65c6b6e _public_65c6b6e

PROC_DECLARE(0x65c6aef, internal_65c6aef, public_65c6aef);
extern "C" NAKED register_t __cdecl internal_65c6aef()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65c7620 @0x65c6af4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65c7620
/*FIXUP push offset _public_65c6d3e @0x65c6af9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65c6d3e
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        and dword ptr ss : [ebp-0x1C], 0
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, esi
        imul eax, dword ptr ss : [ebp+0x10]
        add dword ptr ss : [ebp+8], eax
        and dword ptr ss : [ebp-4], 0
        public_65c6b26 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_65c6b36
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_65c6b26
        public_65c6b36 : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65c6b57
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_65c6b57 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_65c6b6e
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65c6b6f
        public_65c6b6e : nop
        ret 
        UNREACHABLE_TRAP(0x65c6aef)
        ASM_EXPORT_ENTRY_SINGLE(0x65c6b57, public_65c6b57)
    }
}

#undef public_65c6b26
#undef public_65c6b36
#undef public_65c6b57
#undef public_65c6b6e

#pragma init_seg(compiler)
extern "C" void const* const public_65c6b57 = __AsmFindLabelExport(&internal_65c6aef, 0x65c6b57);
