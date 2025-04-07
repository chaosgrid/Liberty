#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf4b0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf712);
CLANG_FORWARD_PROC_SYMBOL(public_6acf77a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0f11);
CLANG_FORWARD_PROC_SYMBOL(public_6ad102c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad121a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);

#define public_6ad0fa7 _public_6ad0fa7
#define public_6ad0fb6 _public_6ad0fb6
#define public_6ad0fc0 _public_6ad0fc0
#define public_6ad0fd8 _public_6ad0fd8
#define public_6ad0fde _public_6ad0fde
#define public_6ad102b _public_6ad102b

PROC_DECLARE(0x6ad0f11, internal_6ad0f11, public_6ad0f11);
extern "C" NAKED register_t __cdecl internal_6ad0f11()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6adaa48 @0x6ad0f16*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6adaa48
/*FIXUP push offset _public_6ad023c @0x6ad0f1b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
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
        call public_6ad1381
        mov eax, dword ptr ds : [eax+0x6C]
        mov dword ptr ss : [ebp-0x1C], eax
        call public_6ad1381
        mov eax, dword ptr ds : [eax+0x70]
        mov dword ptr ss : [ebp-0x20], eax
        call public_6ad1381
        mov edi, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+0x6C], edi
        call public_6ad1381
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ds : [eax+0x70], ecx
        and dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-4], 1
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push ebx
        push dword ptr ss : [ebp+0x14]
        push esi
        call public_6acf4b0
        add esp, 0x14
        mov dword ptr ss : [ebp-0x2C], eax
        and dword ptr ss : [ebp-4], 0
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad0fde
        mov eax, dword ptr ss : [ebp-0x2C]
        public_6ad0fa7 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ad0fb6 : nop
        push dword ptr ss : [ebp-0x14]
        call public_6ad102c
        pop ecx
        ret 
        public_6ad0fc0 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        and dword ptr ss : [ebp-0x2C], 0
        push 0xFFFFFFFF
        lea eax, ss:[ebp-0x10]
        push eax
        call public_6acf712
        pop ecx
        pop ecx
        xor eax, eax
        jmp public_6ad0fa7
        public_6ad0fd8 : nop
        mov esi, dword ptr ss : [ebp+0xC]
        mov edi, dword ptr ss : [ebp+8]
        public_6ad0fde : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [esi-4], eax
        call public_6ad1381
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [eax+0x6C], ecx
        call public_6ad1381
        mov ecx, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax+0x70], ecx
        cmp dword ptr ds : [edi], 0xE06D7363
        jne public_6ad102b
        cmp dword ptr ds : [edi+0x10], 3
        jne public_6ad102b
        cmp dword ptr ds : [edi+0x14], 0x19930520
        jne public_6ad102b
        cmp dword ptr ss : [ebp-0x24], 0
        jne public_6ad102b
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6ad102b
        call public_6acf77a
        push eax
        push edi
        call public_6ad121a
        pop ecx
        pop ecx
        public_6ad102b : nop
        ret 
        UNREACHABLE_TRAP(0x6ad0f11)
        ASM_EXPORT_ENTRY_FIRST(0x6ad0fb6, public_6ad0fb6)
        ASM_EXPORT_ENTRY(0x6ad0fc0, public_6ad0fc0)
        ASM_EXPORT_ENTRY_LAST(0x6ad0fd8, public_6ad0fd8)
    }
}

#undef public_6ad0fa7
#undef public_6ad0fb6
#undef public_6ad0fc0
#undef public_6ad0fd8
#undef public_6ad0fde
#undef public_6ad102b

#pragma init_seg(compiler)
extern "C" void const* const public_6ad0fb6 = __AsmFindLabelExport(&internal_6ad0f11, 0x6ad0fb6);
extern "C" void const* const public_6ad0fc0 = __AsmFindLabelExport(&internal_6ad0f11, 0x6ad0fc0);
extern "C" void const* const public_6ad0fd8 = __AsmFindLabelExport(&internal_6ad0f11, 0x6ad0fd8);
