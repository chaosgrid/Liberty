#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57fb4);
CLANG_FORWARD_PROC_SYMBOL(public_6f58012);
CLANG_FORWARD_PROC_SYMBOL(public_6f58342);

#define public_6f57fdd _public_6f57fdd
#define public_6f57ff0 _public_6f57ff0
#define public_6f57ffa _public_6f57ffa
#define public_6f57ffd _public_6f57ffd

PROC_DECLARE(0x6f57fb4, internal_6f57fb4, public_6f57fb4);
extern "C" NAKED register_t __cdecl internal_6f57fb4()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6f5b490 @0x6f57fb9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5b490
/*FIXUP push offset _public_6f58342 @0x6f57fbe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f58342
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        and dword ptr ss : [ebp-4], 0
        public_6f57fdd : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6f57ffd
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6f57fdd
        public_6f57ff0 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6f58012
        pop ecx
        ret 
        public_6f57ffa : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6f57ffd : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6f57fb4)
        ASM_EXPORT_ENTRY_FIRST(0x6f57ff0, public_6f57ff0)
        ASM_EXPORT_ENTRY_LAST(0x6f57ffa, public_6f57ffa)
    }
}

#undef public_6f57fdd
#undef public_6f57ff0
#undef public_6f57ffa
#undef public_6f57ffd

#pragma init_seg(compiler)
extern "C" void const* const public_6f57ff0 = __AsmFindLabelExport(&internal_6f57fb4, 0x6f57ff0);
extern "C" void const* const public_6f57ffa = __AsmFindLabelExport(&internal_6f57fb4, 0x6f57ffa);
