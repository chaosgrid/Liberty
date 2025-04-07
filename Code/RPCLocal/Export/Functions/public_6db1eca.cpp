#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1e56);
CLANG_FORWARD_PROC_SYMBOL(public_6db1eca);
CLANG_FORWARD_PROC_SYMBOL(public_6db20ea);

#define public_6db1ef8 _public_6db1ef8
#define public_6db1f13 _public_6db1f13
#define public_6db1f34 _public_6db1f34
#define public_6db1f4b _public_6db1f4b

PROC_DECLARE(0x6db1eca, internal_6db1eca, public_6db1eca);
extern "C" NAKED register_t __cdecl internal_6db1eca()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6db6818 @0x6db1ecf*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6db6818
/*FIXUP push offset _public_6db20ea @0x6db1ed4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6db20ea
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
        public_6db1ef8 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6db1f13
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6db1ef8
        public_6db1f13 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6db1f34
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6db1f34 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6db1f4b
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6db1e56
        public_6db1f4b : nop
        ret 
        UNREACHABLE_TRAP(0x6db1eca)
        ASM_EXPORT_ENTRY_SINGLE(0x6db1f34, public_6db1f34)
    }
}

#undef public_6db1ef8
#undef public_6db1f13
#undef public_6db1f34
#undef public_6db1f4b

#pragma init_seg(compiler)
extern "C" void const* const public_6db1f34 = __AsmFindLabelExport(&internal_6db1eca, 0x6db1f34);
