#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d6009e);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a8);
CLANG_FORWARD_PROC_SYMBOL(public_6d6022a);

#define public_6d601d6 _public_6d601d6
#define public_6d601f1 _public_6d601f1
#define public_6d60212 _public_6d60212
#define public_6d60229 _public_6d60229

PROC_DECLARE(0x6d601a8, internal_6d601a8, public_6d601a8);
extern "C" NAKED register_t __cdecl internal_6d601a8()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d6bbf0 @0x6d601ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bbf0
/*FIXUP push offset _public_6d6022a @0x6d601b2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d6022a
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        push edi
        xor eax, eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d601d6 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6d601f1
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6d601d6
        public_6d601f1 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6d60212
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6d60212 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6d60229
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d6009e
        public_6d60229 : nop
        ret 
        UNREACHABLE_TRAP(0x6d601a8)
        ASM_EXPORT_ENTRY_SINGLE(0x6d60212, public_6d60212)
    }
}

#undef public_6d601d6
#undef public_6d601f1
#undef public_6d60212
#undef public_6d60229

#pragma init_seg(compiler)
extern "C" void const* const public_6d60212 = __AsmFindLabelExport(&internal_6d601a8, 0x6d60212);
