#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6fb3);
CLANG_FORWARD_PROC_SYMBOL(public_65d8dfc);
CLANG_FORWARD_PROC_SYMBOL(public_65d9068);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d8e43 _public_65d8e43
#define public_65d8e52 _public_65d8e52
#define public_65d8e5b _public_65d8e5b

PROC_DECLARE(0x65d8dfc, internal_65d8dfc, public_65d8dfc);
extern "C" NAKED register_t __cdecl internal_65d8dfc()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1670 @0x65d8e01*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1670
/*FIXUP push offset _public_65dcf2c @0x65d8e06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_65d8e43
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_65d8e43
        and dword ptr ss : [ebp-4], 0
        push ecx
        push dword ptr ds : [eax+0x18]
        call public_65d6fb3
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_65d8e43 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65d8e52 : nop
        xor eax, eax
        cmp byte ptr ss : [ebp+0xC], al
        setne al
        ret 
        public_65d8e5b : nop
        mov esp, dword ptr ss : [ebp-0x18]
        jmp public_65d9068
        UNREACHABLE_TRAP(0x65d8dfc)
        ASM_EXPORT_ENTRY_FIRST(0x65d8e52, public_65d8e52)
        ASM_EXPORT_ENTRY_LAST(0x65d8e5b, public_65d8e5b)
    }
}

#undef public_65d8e43
#undef public_65d8e52
#undef public_65d8e5b

#pragma init_seg(compiler)
extern "C" void const* const public_65d8e52 = __AsmFindLabelExport(&internal_65d8dfc, 0x65d8e52);
extern "C" void const* const public_65d8e5b = __AsmFindLabelExport(&internal_65d8dfc, 0x65d8e5b);
