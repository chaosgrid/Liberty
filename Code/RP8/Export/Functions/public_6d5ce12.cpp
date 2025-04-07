#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ce12);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ce70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf62);

#define public_6d5ce3b _public_6d5ce3b
#define public_6d5ce4e _public_6d5ce4e
#define public_6d5ce58 _public_6d5ce58
#define public_6d5ce5b _public_6d5ce5b

PROC_DECLARE(0x6d5ce12, internal_6d5ce12, public_6d5ce12);
extern "C" NAKED register_t __cdecl internal_6d5ce12()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6d627b0 @0x6d5ce17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d627b0
/*FIXUP push offset _public_6d5cf62 @0x6d5ce1c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5cf62
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
        public_6d5ce3b : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6d5ce5b
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6d5ce3b
        public_6d5ce4e : nop
        push dword ptr ss : [ebp-0x14]
        call public_6d5ce70
        pop ecx
        ret 
        public_6d5ce58 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6d5ce5b : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d5ce12)
        ASM_EXPORT_ENTRY_FIRST(0x6d5ce4e, public_6d5ce4e)
        ASM_EXPORT_ENTRY_LAST(0x6d5ce58, public_6d5ce58)
    }
}

#undef public_6d5ce3b
#undef public_6d5ce4e
#undef public_6d5ce58
#undef public_6d5ce5b

#pragma init_seg(compiler)
extern "C" void const* const public_6d5ce4e = __AsmFindLabelExport(&internal_6d5ce12, 0x6d5ce4e);
extern "C" void const* const public_6d5ce58 = __AsmFindLabelExport(&internal_6d5ce12, 0x6d5ce58);
