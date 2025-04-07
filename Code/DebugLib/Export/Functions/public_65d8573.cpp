#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8573);
CLANG_FORWARD_PROC_SYMBOL(public_65dbf9e);
CLANG_FORWARD_PROC_SYMBOL(public_65dca41);
CLANG_FORWARD_PROC_SYMBOL(public_65dceab);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf0c);
CLANG_FORWARD_PROC_SYMBOL(public_65dcf2c);

#define public_65d85da _public_65d85da
#define public_65d85e3 _public_65d85e3
#define public_65d85f7 _public_65d85f7
#define public_65d85fa _public_65d85fa
#define public_65d8633 _public_65d8633
#define public_65d8636 _public_65d8636
#define public_65d8639 _public_65d8639
#define public_65d8642 _public_65d8642
#define public_65d864c _public_65d864c
#define public_65d8652 _public_65d8652
#define public_65d8660 _public_65d8660

PROC_DECLARE(0x65d8573, internal_65d8573, public_65d8573);
extern "C" NAKED register_t __cdecl internal_65d8573()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_65e1620 @0x65d8578*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e1620
/*FIXUP push offset _public_65dcf2c @0x65d857d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_65dcf2c
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov eax, dword ptr ds : [public_65e7924]
        cmp eax, 3
        jne public_65d85e3
        mov esi, dword ptr ss : [ebp+8]
        cmp esi, dword ptr ds : [public_65e791c]
        ja public_65d8642
        push 9
        call public_65dceab
        pop ecx
        and dword ptr ss : [ebp-4], 0
        push esi
        call public_65dbf9e
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d85da
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        je public_65d8642
        jmp public_65d8660
        public_65d85da : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65d85e3 : nop
        cmp eax, 2
        jne public_65d8642
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        je public_65d85f7
        lea esi, ds:[eax+0xF]
        and esi, 0xFFFFFFF0
        jmp public_65d85fa
        public_65d85f7 : nop
        push 0x10
        pop esi
        public_65d85fa : nop
        mov dword ptr ss : [ebp+8], esi
        cmp esi, dword ptr ds : [public_65e55ec]
        ja public_65d8633
        push 9
        call public_65dceab
        pop ecx
        mov dword ptr ss : [ebp-4], 1
        mov eax, esi
        shr eax, 4
        push eax
        call public_65dca41
        pop ecx
        mov dword ptr ss : [ebp-0x1C], eax
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        call public_65d8639
        mov eax, dword ptr ss : [ebp-0x1C]
        test eax, eax
        jne public_65d8660
        public_65d8633 : nop
        push esi
        jmp public_65d8652
        public_65d8636 : nop
        mov esi, dword ptr ss : [ebp+8]
        public_65d8639 : nop
        push 9
        call public_65dcf0c
        pop ecx
        ret 
        public_65d8642 : nop
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_65d864c
        push 1
        pop eax
        public_65d864c : nop
        add eax, 0xF
        and al, 0xF0
        push eax
        public_65d8652 : nop
        push 0
        push dword ptr ds : [public_65e7920]
        call dword ptr ds : [public_65e1060]
        public_65d8660 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d8573)
        ASM_EXPORT_ENTRY_FIRST(0x65d85da, public_65d85da)
        ASM_EXPORT_ENTRY_LAST(0x65d8636, public_65d8636)
    }
}

#undef public_65d85da
#undef public_65d85e3
#undef public_65d85f7
#undef public_65d85fa
#undef public_65d8633
#undef public_65d8636
#undef public_65d8639
#undef public_65d8642
#undef public_65d864c
#undef public_65d8652
#undef public_65d8660

#pragma init_seg(compiler)
extern "C" void const* const public_65d85da = __AsmFindLabelExport(&internal_65d8573, 0x65d85da);
extern "C" void const* const public_65d8636 = __AsmFindLabelExport(&internal_65d8573, 0x65d8636);
