#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf529);
CLANG_FORWARD_PROC_SYMBOL(public_6acf5df);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);

#define public_6acf5b1 _public_6acf5b1
#define public_6acf5ce _public_6acf5ce
#define public_6acf5d7 _public_6acf5d7

PROC_DECLARE(0x6acf529, internal_6acf529, public_6acf529);
extern "C" NAKED register_t __cdecl internal_6acf529()
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
        mov dword ptr ss : [ebp-0x24], offset _public_6acf5df
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
/*FIXUP mov dword ptr ss : [ebp-0x10], offset public_6acf5b1 @0x6acf565*/
  FIXUP push eax
  FIXUP lea eax, ds : [public_6acf5b1]
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
        call public_6ad1381
        call dword ptr ds : [eax+0x68]
        pop ecx
        pop ecx
        and dword ptr ss : [ebp-0x34], 0
        public_6acf5b1 : nop
        cmp dword ptr ss : [ebp-4], 0
        je public_6acf5ce
        mov ebx, dword ptr fs : [0]
        mov eax, dword ptr ds : [ebx]
        mov ebx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ebx], eax
        mov dword ptr fs : [0], ebx
        jmp public_6acf5d7
        public_6acf5ce : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr fs : [0], eax
        public_6acf5d7 : nop
        mov eax, dword ptr ss : [ebp-0x34]
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6acf529)
        ASM_EXPORT_ENTRY_SINGLE(0x6acf5b1, public_6acf5b1)
    }
}

#undef public_6acf5b1
#undef public_6acf5ce
#undef public_6acf5d7

#pragma init_seg(compiler)
extern "C" void const* const public_6acf5b1 = __AsmFindLabelExport(&internal_6acf529, 0x6acf5b1);
