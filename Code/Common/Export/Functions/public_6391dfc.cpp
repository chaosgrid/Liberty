#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391e7c);
CLANG_FORWARD_PROC_SYMBOL(public_6392128);

#define public_6391e33 _public_6391e33
#define public_6391e43 _public_6391e43
#define public_6391e64 _public_6391e64
#define public_6391e7b _public_6391e7b

PROC_DECLARE(0x6391dfc, internal_6391dfc, public_6391dfc);
extern "C" NAKED register_t __cdecl internal_6391dfc()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_63a5a90 @0x6391e01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63a5a90
/*FIXUP push offset _public_6392128 @0x6391e06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6392128
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
        public_6391e33 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6391e43
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6391e33
        public_6391e43 : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6391e64
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6391e64 : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6391e7b
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6391e7c
        public_6391e7b : nop
        ret 
        UNREACHABLE_TRAP(0x6391dfc)
        ASM_EXPORT_ENTRY_SINGLE(0x6391e64, public_6391e64)
    }
}

#undef public_6391e33
#undef public_6391e43
#undef public_6391e64
#undef public_6391e7b

#pragma init_seg(compiler)
extern "C" void const* const public_6391e64 = __AsmFindLabelExport(&internal_6391dfc, 0x6391e64);
