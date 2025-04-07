#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d70b8);
CLANG_FORWARD_PROC_SYMBOL(public_65d716e);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);

#define public_65d7140 _public_65d7140
#define public_65d715d _public_65d715d
#define public_65d7166 _public_65d7166

PROC_DECLARE(0x65d70b8, internal_65d70b8, public_65d70b8);
extern "C" NAKED register_t __cdecl internal_65d70b8()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x34
        push ebx
        push esi
        push edi
        and dword ptr ss : [ebp-0x28], 0
        mov dword ptr ss : [ebp-0x24], offset _public_65d716e
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x20], eax
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x1C], eax
        mov eax, dword ptr ss : [ebp+0x1C]
        mov dword ptr ss : [ebp-0x18], eax
        mov eax, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp-0x14], eax
        and dword ptr ss : [ebp-0x10], 0
        and dword ptr ss : [ebp-0xC], 0
        and dword ptr ss : [ebp-8], 0
        and dword ptr ss : [ebp-4], 0
/*FIXUP mov dword ptr ss : [ebp-0x10], offset public_65d7140 @0x65d70f4*/
  FIXUP push eax
  FIXUP lea eax, ds : [public_65d7140]
  FIXUP mov dword ptr ss : [ebp-0x10], eax
  FIXUP pop eax
        mov dword ptr ss : [ebp-0xC], esp
        mov dword ptr ss : [ebp-8], ebp
        mov eax, dword ptr fs : [0]
        mov dword ptr ss : [ebp-0x28], eax
        lea eax, ss:[ebp-0x28]
        mov dword ptr fs : [0], eax
        mov dword ptr ss : [ebp-0x34], 1
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x30], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x2C], eax
        lea eax, ss:[ebp-0x30]
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push dword ptr ds : [eax]
        call public_65d8f61
        call dword ptr ds : [eax+0x68]
        pop ecx
        pop ecx
        and dword ptr ss : [ebp-0x34], 0
        public_65d7140 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_65d715d
        mov ebx, dword ptr fs : [0]
        mov eax, dword ptr ds : [ebx]
        mov ebx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ebx], eax
        mov dword ptr fs : [0], ebx
        jmp public_65d7166
        public_65d715d : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr fs : [0], eax
        public_65d7166 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d70b8)
        ASM_EXPORT_ENTRY_SINGLE(0x65d7140, public_65d7140)
    }
}

#undef public_65d7140
#undef public_65d715d
#undef public_65d7166

#pragma init_seg(compiler)
extern "C" void const* const public_65d7140 = __AsmFindLabelExport(&internal_65d70b8, 0x65d7140);
