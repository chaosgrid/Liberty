#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ce12);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ce86);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf62);

#define public_6d5ceb4 _public_6d5ceb4
#define public_6d5cecf _public_6d5cecf
#define public_6d5cef0 _public_6d5cef0
#define public_6d5cf07 _public_6d5cf07

PROC_DECLARE(0x6d5ce86, internal_6d5ce86, public_6d5ce86);
extern "C" NAKED register_t __cdecl internal_6d5ce86()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d627c0 @0x6d5ce8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d627c0
/*FIXUP push offset _public_6d5cf62 @0x6d5ce90*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5cf62
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
        public_6d5ceb4 : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6d5cecf
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6d5ceb4
        public_6d5cecf : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6d5cef0
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6d5cef0 : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6d5cf07
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d5ce12
        public_6d5cf07 : nop
        ret 
        UNREACHABLE_TRAP(0x6d5ce86)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5cef0, public_6d5cef0)
    }
}

#undef public_6d5ceb4
#undef public_6d5cecf
#undef public_6d5cef0
#undef public_6d5cf07

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cef0 = __AsmFindLabelExport(&internal_6d5ce86, 0x6d5cef0);
