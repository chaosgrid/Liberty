#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d703f);
CLANG_FORWARD_PROC_SYMBOL(public_65d72a2);
CLANG_FORWARD_PROC_SYMBOL(public_65d730a);
CLANG_FORWARD_PROC_SYMBOL(public_65d8af3);
CLANG_FORWARD_PROC_SYMBOL(public_65d8c0e);
CLANG_FORWARD_PROC_SYMBOL(public_65d8dfc);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d8b89 _public_65d8b89
#define public_65d8b98 _public_65d8b98
#define public_65d8ba2 _public_65d8ba2
#define public_65d8bba _public_65d8bba
#define public_65d8bc0 _public_65d8bc0
#define public_65d8c0d _public_65d8c0d

PROC_DECLARE(0x65d8af3, internal_65d8af3, public_65d8af3);
extern "C" NAKED register_t __cdecl internal_65d8af3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1648 @0x65d8af8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1648
/*FIXUP push offset _public_65dcf2c @0x65d8afd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov ebx, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x2C], ebx
        and dword ptr ss : [ebp-0x24], 0
        mov esi, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [esi-4]
        mov dword ptr ss : [ebp-0x28], eax
        call public_65d8f61
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ss : [ebp-0x1C], eax
        call public_65d8f61
        mov eax, dword ptr ds : [eax+0x70]
        mov dword ptr ss : [ebp-0x20], eax
        call public_65d8f61
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x6C], edi
        call public_65d8f61
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0x70], ecx
        and dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-4], 1
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push ebx
        push dword ptr ss : [ebp+0x14]
        push esi
        call public_65d703f
        add esp, 0x14
        mov dword ptr ss : [ebp-0x2C], eax
        and dword ptr ss : [ebp-4], 0
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d8bc0
        mov eax, dword ptr ss : [ebp-0x2C]
        public_65d8b89 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65d8b98 : nop
        push dword ptr ss : [ebp-0x14]
        call public_65d8c0e
        pop ecx
        ret 
        public_65d8ba2 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        and dword ptr ss : [ebp-0x2C], 0
        push 0xFFFFFFFF
        lea eax, ss:[ebp-0x10]
        push eax
        call public_65d72a2
        pop ecx
        pop ecx
        xor eax, eax
        jmp public_65d8b89
        public_65d8bba : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        public_65d8bc0 : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [esi-4], eax
        call public_65d8f61
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax+0x6C], ecx
        call public_65d8f61
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax+0x70], ecx
        cmp dword ptr ds : [edi], 0xE06D7363
        jne public_65d8c0d
        cmp dword ptr ds : [edi+0x10], 3
        jne public_65d8c0d
        cmp dword ptr ds : [edi+0x14], 0x19930520
        jne public_65d8c0d
        cmp dword ptr ss : [ebp-0x24], 0
        jne public_65d8c0d
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_65d8c0d
        call public_65d730a
        push eax
        push edi
        call public_65d8dfc
        pop ecx
        pop ecx
        public_65d8c0d : nop
        ret 
        UNREACHABLE_TRAP(0x65d8af3)
        ASM_EXPORT_ENTRY_FIRST(0x65d8b98, public_65d8b98)
        ASM_EXPORT_ENTRY(0x65d8ba2, public_65d8ba2)
        ASM_EXPORT_ENTRY_LAST(0x65d8bba, public_65d8bba)
    }
}

#undef public_65d8b89
#undef public_65d8b98
#undef public_65d8ba2
#undef public_65d8bba
#undef public_65d8bc0
#undef public_65d8c0d

#pragma init_seg(compiler)
extern "C" void const* const public_65d8b98 = __AsmFindLabelExport(&internal_65d8af3, 0x65d8b98);
extern "C" void const* const public_65d8ba2 = __AsmFindLabelExport(&internal_65d8af3, 0x65d8ba2);
extern "C" void const* const public_65d8bba = __AsmFindLabelExport(&internal_65d8af3, 0x65d8bba);
