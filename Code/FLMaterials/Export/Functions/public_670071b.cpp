#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_670071b);
CLANG_FORWARD_PROC_SYMBOL(public_670079b);
CLANG_FORWARD_PROC_SYMBOL(public_6700a7e);

#define public_6700752 _public_6700752
#define public_6700762 _public_6700762
#define public_6700783 _public_6700783
#define public_670079a _public_670079a

PROC_DECLARE(0x670071b, internal_670071b, public_670071b);
extern "C" NAKED register_t __cdecl internal_670071b()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_67031f0 @0x6700720*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67031f0
/*FIXUP push offset _public_6700a7e @0x6700725*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6700a7e
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
        public_6700752 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6700762
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6700752
        public_6700762 : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6700783
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6700783 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_670079a
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_670079b
        public_670079a : nop
        ret 
        UNREACHABLE_TRAP(0x670071b)
        ASM_EXPORT_ENTRY_SINGLE(0x6700783, public_6700783)
    }
}

#undef public_6700752
#undef public_6700762
#undef public_6700783
#undef public_670079a

#pragma init_seg(compiler)
extern "C" void const* const public_6700783 = __AsmFindLabelExport(&internal_670071b, 0x6700783);
