#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);
CLANG_FORWARD_PROC_SYMBOL(public_6d6009e);
CLANG_FORWARD_PROC_SYMBOL(public_6d6022a);

#define public_6d60055 _public_6d60055
#define public_6d60065 _public_6d60065
#define public_6d60086 _public_6d60086
#define public_6d6009d _public_6d6009d

PROC_DECLARE(0x6d6001e, internal_6d6001e, public_6d6001e);
extern "C" NAKED register_t __cdecl internal_6d6001e()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d6bbd0 @0x6d60023*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bbd0
/*FIXUP push offset _public_6d6022a @0x6d60028*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d6022a
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
        public_6d60055 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6d60065
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6d60055
        public_6d60065 : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6d60086
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6d60086 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6d6009d
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d6009e
        public_6d6009d : nop
        ret 
        UNREACHABLE_TRAP(0x6d6001e)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60086, public_6d60086)
    }
}

#undef public_6d60055
#undef public_6d60065
#undef public_6d60086
#undef public_6d6009d

#pragma init_seg(compiler)
extern "C" void const* const public_6d60086 = __AsmFindLabelExport(&internal_6d6001e, 0x6d60086);
