#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad023c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad40d9);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4104);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4e34);
CLANG_FORWARD_PROC_SYMBOL(public_6ad4e8b);

#define public_6ad080e _public_6ad080e
#define public_6ad081d _public_6ad081d
#define public_6ad0826 _public_6ad0826
#define public_6ad0861 _public_6ad0861
#define public_6ad086e _public_6ad086e
#define public_6ad0875 _public_6ad0875
#define public_6ad087e _public_6ad087e
#define public_6ad087f _public_6ad087f
#define public_6ad088d _public_6ad088d

PROC_DECLARE(0x6ad07b3, internal_6ad07b3, public_6ad07b3);
extern "C" NAKED register_t __cdecl internal_6ad07b3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6ada9d8 @0x6ad07b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada9d8
/*FIXUP push offset _public_6ad023c @0x6ad07bd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ad023c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov esi, dword ptr ss : [ebp+8]
        test esi, esi
        je public_6ad088d
        mov eax, dword ptr ds : [public_6ae2464]
        cmp eax, 3
        jne public_6ad0826
        push 9
        call public_6ad237a
        pop ecx
        and dword ptr ss : [ebp-4], 0
        push esi
        call public_6ad40d9
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        test eax, eax
        je public_6ad080e
        push esi
        push eax
        call public_6ad4104
        pop ecx
        pop ecx
        public_6ad080e : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad081d
        cmp dword ptr ss : [ebp-0x1C], 0
        jmp public_6ad086e
        public_6ad081d : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad0826 : nop
        cmp eax, 2
        jne public_6ad087e
        push 9
        call public_6ad237a
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        lea eax, ss:[ebp-0x20]
        push eax
        lea eax, ss:[ebp-0x28]
        push eax
        push esi
        call public_6ad4e34
        add esp, 0xC
        mov dword ptr ss : [ebp-0x24], eax
        test eax, eax
        je public_6ad0861
        push eax
        push dword ptr ss : [ebp-0x20]
        push dword ptr ss : [ebp-0x28]
        call public_6ad4e8b
        add esp, 0xC
        public_6ad0861 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_6ad0875
        cmp dword ptr ss : [ebp-0x24], 0
        public_6ad086e : nop
        jne public_6ad088d
        push dword ptr ss : [ebp+8]
        jmp public_6ad087f
        public_6ad0875 : nop
        push 9
        call public_6ad23db
        pop ecx
        ret 
        public_6ad087e : nop
        push esi
        public_6ad087f : nop
        push 0
        push dword ptr ds : [public_6ae2460]
        call dword ptr ds : [public_6ada134]
        public_6ad088d : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad07b3)
        ASM_EXPORT_ENTRY_FIRST(0x6ad081d, public_6ad081d)
        ASM_EXPORT_ENTRY_LAST(0x6ad0875, public_6ad0875)
    }
}

#undef public_6ad080e
#undef public_6ad081d
#undef public_6ad0826
#undef public_6ad0861
#undef public_6ad086e
#undef public_6ad0875
#undef public_6ad087e
#undef public_6ad087f
#undef public_6ad088d

#pragma init_seg(compiler)
extern "C" void const* const public_6ad081d = __AsmFindLabelExport(&internal_6ad07b3, 0x6ad081d);
extern "C" void const* const public_6ad0875 = __AsmFindLabelExport(&internal_6ad07b3, 0x6ad0875);
