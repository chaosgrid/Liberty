#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d9e87);
CLANG_FORWARD_PROC_SYMBOL(public_65dbc4a);
CLANG_FORWARD_PROC_SYMBOL(public_65dc9a5);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d9edc _public_65d9edc
#define public_65d9edf _public_65d9edf
#define public_65d9eee _public_65d9eee
#define public_65d9ef1 _public_65d9ef1
#define public_65d9efa _public_65d9efa
#define public_65d9f33 _public_65d9f33
#define public_65d9f36 _public_65d9f36
#define public_65d9f43 _public_65d9f43
#define public_65d9f45 _public_65d9f45
#define public_65d9f58 _public_65d9f58
#define public_65d9f69 _public_65d9f69
#define public_65d9f6c _public_65d9f6c

PROC_DECLARE(0x65d9e87, internal_65d9e87, public_65d9e87);
extern "C" NAKED register_t __cdecl internal_65d9e87()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1740 @0x65d9e8c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1740
/*FIXUP push offset _public_65dcf2c @0x65d9e91*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        push esi
        push edi
        mov eax, dword ptr ds : [public_65e7924]
        cmp eax, 3
        jne public_65d9efa
        push 9
        call public_65dceab
        pop ecx
        and dword ptr ss : [ebp-4], 0
        mov esi, dword ptr ss : [ebp+8]
        push esi
        call public_65dbc4a
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        test eax, eax
        je public_65d9edc
        mov esi, dword ptr ds : [esi-4]
        sub esi, 9
        mov dword ptr ss : [ebp-0x20], esi
        jmp public_65d9edf
        public_65d9edc : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_65d9edf : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d9ef1
        cmp dword ptr ss : [ebp-0x1C], 0
        jmp public_65d9f43
        public_65d9eee : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_65d9ef1 : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65d9efa : nop
        cmp eax, 2
        jne public_65d9f45
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        lea eax, ss:[ebp-0x24]
        push eax
        lea eax, ss:[ebp-0x2C]
        push eax
        push dword ptr ss : [ebp+8]
        call public_65dc9a5
        add esp, 0xC
        mov dword ptr ss : [ebp-0x28], eax
        test eax, eax
        je public_65d9f33
        movzx esi, byte ptr ds : [eax]
        shl esi, 4
        mov dword ptr ss : [ebp-0x20], esi
        jmp public_65d9f36
        public_65d9f33 : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_65d9f36 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d9f6c
        cmp dword ptr ss : [ebp-0x28], 0
        public_65d9f43 : nop
        jne public_65d9f58
        public_65d9f45 : nop
        push dword ptr ss : [ebp+8]
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1090]
        mov esi, eax
        public_65d9f58 : nop
        mov eax, esi
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65d9f69 : nop
        mov esi, dword ptr ss : [ebp-0x20]
        public_65d9f6c : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d9e87)
        ASM_EXPORT_ENTRY_FIRST(0x65d9eee, public_65d9eee)
        ASM_EXPORT_ENTRY_LAST(0x65d9f69, public_65d9f69)
    }
}

#undef public_65d9edc
#undef public_65d9edf
#undef public_65d9eee
#undef public_65d9ef1
#undef public_65d9efa
#undef public_65d9f33
#undef public_65d9f36
#undef public_65d9f43
#undef public_65d9f45
#undef public_65d9f58
#undef public_65d9f69
#undef public_65d9f6c

#pragma init_seg(compiler)
extern "C" void const* const public_65d9eee = __AsmFindLabelExport(&internal_65d9e87, 0x65d9eee);
extern "C" void const* const public_65d9f69 = __AsmFindLabelExport(&internal_65d9e87, 0x65d9f69);
