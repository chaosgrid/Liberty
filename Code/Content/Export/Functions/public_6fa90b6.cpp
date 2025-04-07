#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa90b6);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9114);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9344);

#define public_6fa90df _public_6fa90df
#define public_6fa90f2 _public_6fa90f2
#define public_6fa90fc _public_6fa90fc
#define public_6fa90ff _public_6fa90ff

PROC_DECLARE(0x6fa90b6, internal_6fa90b6, public_6fa90b6);
extern "C" NAKED register_t __cdecl internal_6fa90b6()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6fbd6e0 @0x6fa90bb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbd6e0
/*FIXUP push offset _public_6fa9344 @0x6fa90c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6fa9344
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
        public_6fa90df : nop
        dec dword ptr ss : [ebp+0x10]
        js public_6fa90ff
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp+8], ecx
        call dword ptr ss : [ebp+0x14]
        jmp public_6fa90df
        public_6fa90f2 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6fa9114
        pop ecx
        ret 
        public_6fa90fc : nop
        mov esp, dword ptr ss : [ebp-0x18]
        public_6fa90ff : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6fa90b6)
        ASM_EXPORT_ENTRY_FIRST(0x6fa90f2, public_6fa90f2)
        ASM_EXPORT_ENTRY_LAST(0x6fa90fc, public_6fa90fc)
    }
}

#undef public_6fa90df
#undef public_6fa90f2
#undef public_6fa90fc
#undef public_6fa90ff

#pragma init_seg(compiler)
extern "C" void const* const public_6fa90f2 = __AsmFindLabelExport(&internal_6fa90b6, 0x6fa90f2);
extern "C" void const* const public_6fa90fc = __AsmFindLabelExport(&internal_6fa90b6, 0x6fa90fc);
