#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7f23);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc4a);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc75);
CLANG_FORWARD_PROC_SYMBOL(public_65dc9a5);
CLANG_FORWARD_PROC_SYMBOL(public_65dc9fc);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d7f7e _public_65d7f7e
#define public_65d7f8d _public_65d7f8d
#define public_65d7f96 _public_65d7f96
#define public_65d7fd1 _public_65d7fd1
#define public_65d7fde _public_65d7fde
#define public_65d7fe5 _public_65d7fe5
#define public_65d7fee _public_65d7fee
#define public_65d7fef _public_65d7fef
#define public_65d7ffd _public_65d7ffd

PROC_DECLARE(0x65d7f23, internal_65d7f23, public_65d7f23);
extern "C" NAKED register_t __cdecl internal_65d7f23()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e15c0 @0x65d7f28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e15c0
/*FIXUP push offset _public_65dcf2c @0x65d7f2d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_65d7ffd
        mov eax, dword ptr ds : [public_65e7924]
        cmp eax, 3
        jne public_65d7f96
        push 9
        call public_65dceab
        pop ecx
        and dword ptr ss : [ebp-4], 0
        push esi
        call public_65dbc4a
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        test eax, eax
        je public_65d7f7e
        push esi
        push eax
        call public_65dbc75
        pop ecx
        pop ecx
        public_65d7f7e : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d7f8d
        cmp dword ptr ss : [ebp-0x1C], 0
        jmp public_65d7fde
        public_65d7f8d : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65d7f96 : nop
        cmp eax, 2
        jne public_65d7fee
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        lea eax, ss:[ebp-0x20]
        push eax
        lea eax, ss:[ebp-0x28]
        push eax
        push esi
        call public_65dc9a5
        add esp, 0xC
        mov dword ptr ss : [ebp-0x24], eax
        test eax, eax
        je public_65d7fd1
        push eax
        push dword ptr ss : [ebp-0x20]
        push dword ptr ss : [ebp-0x28]
        call public_65dc9fc
        add esp, 0xC
        public_65d7fd1 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d7fe5
        cmp dword ptr ss : [ebp-0x24], 0
        public_65d7fde : nop
        jne public_65d7ffd
        push dword ptr ss : [ebp+8]
        jmp public_65d7fef
        public_65d7fe5 : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65d7fee : nop
        push esi
        public_65d7fef : nop
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1058]
        public_65d7ffd : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d7f23)
        ASM_EXPORT_ENTRY_FIRST(0x65d7f8d, public_65d7f8d)
        ASM_EXPORT_ENTRY_LAST(0x65d7fe5, public_65d7fe5)
    }
}

#undef public_65d7f7e
#undef public_65d7f8d
#undef public_65d7f96
#undef public_65d7fd1
#undef public_65d7fde
#undef public_65d7fe5
#undef public_65d7fee
#undef public_65d7fef
#undef public_65d7ffd

#pragma init_seg(compiler)
extern "C" void const* const public_65d7f8d = __AsmFindLabelExport(&internal_65d7f23, 0x65d7f8d);
extern "C" void const* const public_65d7fe5 = __AsmFindLabelExport(&internal_65d7f23, 0x65d7fe5);
