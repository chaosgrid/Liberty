#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cd92);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ce12);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf62);

#define public_6d5cdc9 _public_6d5cdc9
#define public_6d5cdd9 _public_6d5cdd9
#define public_6d5cdfa _public_6d5cdfa
#define public_6d5ce11 _public_6d5ce11

PROC_DECLARE(0x6d5cd92, internal_6d5cd92, public_6d5cd92);
extern "C" NAKED register_t __cdecl internal_6d5cd92()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d627a0 @0x6d5cd97*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d627a0
/*FIXUP push offset _public_6d5cf62 @0x6d5cd9c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5cf62
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
        public_6d5cdc9 : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6d5cdd9
        sub dword ptr ss : [ebp+8], esi
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ss : [ebp+0x14]
        jmp public_6d5cdc9
        public_6d5cdd9 : nop
        mov dword ptr ss : [ebp-0x1C], 1
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6d5cdfa
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        public_6d5cdfa : nop
        cmp dword ptr ss : [ebp-0x1C], 0
        jne public_6d5ce11
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d5ce12
        public_6d5ce11 : nop
        ret 
        UNREACHABLE_TRAP(0x6d5cd92)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5cdfa, public_6d5cdfa)
    }
}

#undef public_6d5cdc9
#undef public_6d5cdd9
#undef public_6d5cdfa
#undef public_6d5ce11

#pragma init_seg(compiler)
extern "C" void const* const public_6d5cdfa = __AsmFindLabelExport(&internal_6d5cd92, 0x6d5cdfa);
