#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_670079b);
CLANG_FORWARD_PROC_SYMBOL(public_6700820);
CLANG_FORWARD_PROC_SYMBOL(public_6700a7e);

#define public_670084e _public_670084e
#define public_6700869 _public_6700869
#define public_670088a _public_670088a
#define public_67008a1 _public_67008a1

PROC_DECLARE(0x6700820, internal_6700820, public_6700820);
extern "C" NAKED register_t __cdecl internal_6700820()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6703210 @0x6700825*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6703210
/*FIXUP push offset _public_6700a7e @0x670082a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6700a7e
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
        public_670084e : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6700869
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_670084e
        public_6700869 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_670088a
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_670088a : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_67008a1
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_670079b
        public_67008a1 : nop
        ret 
        UNREACHABLE_TRAP(0x6700820)
        ASM_EXPORT_ENTRY_SINGLE(0x670088a, public_670088a)
    }
}

#undef public_670084e
#undef public_6700869
#undef public_670088a
#undef public_67008a1

#pragma init_seg(compiler)
extern "C" void const* const public_670088a = __AsmFindLabelExport(&internal_6700820, 0x670088a);
