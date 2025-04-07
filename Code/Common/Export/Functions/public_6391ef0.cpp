#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391e7c);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6392128);

#define public_6391f1e _public_6391f1e
#define public_6391f39 _public_6391f39
#define public_6391f5a _public_6391f5a
#define public_6391f71 _public_6391f71

PROC_DECLARE(0x6391ef0, internal_6391ef0, public_6391ef0);
extern "C" NAKED register_t __cdecl internal_6391ef0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_63a5ab0 @0x6391ef5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5ab0
/*FIXUP push offset _public_6392128 @0x6391efa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6392128
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
        public_6391f1e : nop
        mov eax, dword ptr ss : [ebp-0x1C]
        cmp eax, dword ptr ss : [ebp+0x10]
        jge public_6391f39
        mov esi, dword ptr ss : [ebp+8]
        mov ecx, esi
        call dword ptr ss : [ebp+0x14]
        add esi, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], esi
        inc dword ptr ss : [ebp-0x1C]
        jmp public_6391f1e
        public_6391f39 : nop
        mov dword ptr ss : [ebp-0x20], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6391f5a
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x14
        public_6391f5a : nop
        cmp dword ptr ss : [ebp-0x20], 0
        jne public_6391f71
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp-0x1C]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6391e7c
        public_6391f71 : nop
        ret 
        UNREACHABLE_TRAP(0x6391ef0)
        ASM_EXPORT_ENTRY_SINGLE(0x6391f5a, public_6391f5a)
    }
}

#undef public_6391f1e
#undef public_6391f39
#undef public_6391f5a
#undef public_6391f71

#pragma init_seg(compiler)
extern "C" void const* const public_6391f5a = __AsmFindLabelExport(&internal_6391ef0, 0x6391f5a);
