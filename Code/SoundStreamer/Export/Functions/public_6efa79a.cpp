#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef85b0);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);
CLANG_FORWARD_PROC_SYMBOL(public_6efa79a);

#define public_6efa7e7 _public_6efa7e7
#define public_6efa804 _public_6efa804
#define public_6efa809 _public_6efa809
#define public_6efa81a _public_6efa81a
#define public_6efa832 _public_6efa832
#define public_6efa848 _public_6efa848
#define public_6efa893 _public_6efa893
#define public_6efa897 _public_6efa897
#define public_6efa89e _public_6efa89e
#define public_6efa8cf _public_6efa8cf
#define public_6efa8d1 _public_6efa8d1

PROC_DECLARE(0x6efa79a, internal_6efa79a, public_6efa79a);
extern "C" NAKED register_t __cdecl internal_6efa79a()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc7c0 @0x6efa79f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7c0
/*FIXUP push offset _public_6efa070 @0x6efa7a4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x18
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov eax, dword ptr ds : [public_6f01298]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6efa809
        lea eax, ss:[ebp-0x1C]
        push eax
        push 1
        pop esi
        push esi
/*FIXUP push offset public_6efc7b8 @0x6efa7d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7b8
        push esi
        call dword ptr ds : [public_6efc070]
        test eax, eax
        je public_6efa7e7
        mov eax, esi
        jmp public_6efa804
        public_6efa7e7 : nop
        lea eax, ss:[ebp-0x1C]
        push eax
        push esi
/*FIXUP push offset public_6efc7b4 @0x6efa7ec*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc7b4
        push esi
        push ebx
        call dword ptr ds : [public_6efc074]
        test eax, eax
        je public_6efa8cf
        push 2
        pop eax
        public_6efa804 : nop
        mov dword ptr ds : [public_6f01298], eax
        public_6efa809 : nop
        cmp eax, 2
        jne public_6efa832
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6efa81a
        mov eax, dword ptr ds : [public_6f012a8]
        public_6efa81a : nop
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        push eax
        call dword ptr ds : [public_6efc074]
        jmp public_6efa8d1
        public_6efa832 : nop
        cmp eax, 1
        jne public_6efa8cf
        cmp dword ptr ss : [ebp+0x18], ebx
        jne public_6efa848
        mov eax, dword ptr ds : [public_6f012b8]
        mov dword ptr ss : [ebp+0x18], eax
        public_6efa848 : nop
        push ebx
        push ebx
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+0x20]
        neg eax
        sbb eax, eax
        and eax, 8
        inc eax
        push eax
        push dword ptr ss : [ebp+0x18]
        call dword ptr ds : [public_6efc078]
        mov dword ptr ss : [ebp-0x20], eax
        cmp eax, ebx
        je public_6efa8cf
        mov dword ptr ss : [ebp-4], ebx
        lea edi, ds:[eax+eax]
        mov eax, edi
        add eax, 3
        and al, 0xFC
        call public_6ef46b0
        mov dword ptr ss : [ebp-0x18], esp
        mov esi, esp
        mov dword ptr ss : [ebp-0x24], esi
        push edi
        push ebx
        push esi
        call public_6ef85b0
        add esp, 0xC
        jmp public_6efa89e
        public_6efa893 : nop
        push 1
        pop eax
        ret 
        public_6efa897 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        xor ebx, ebx
        xor esi, esi
        public_6efa89e : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        cmp esi, ebx
        je public_6efa8cf
        push dword ptr ss : [ebp-0x20]
        push esi
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push 1
        push dword ptr ss : [ebp+0x18]
        call dword ptr ds : [public_6efc078]
        cmp eax, ebx
        je public_6efa8cf
        push dword ptr ss : [ebp+0x14]
        push eax
        push esi
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6efc070]
        jmp public_6efa8d1
        public_6efa8cf : nop
        xor eax, eax
        public_6efa8d1 : nop
        lea esp, ss:[ebp-0x34]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efa79a)
        ASM_EXPORT_ENTRY_FIRST(0x6efa893, public_6efa893)
        ASM_EXPORT_ENTRY_LAST(0x6efa897, public_6efa897)
    }
}

#undef public_6efa7e7
#undef public_6efa804
#undef public_6efa809
#undef public_6efa81a
#undef public_6efa832
#undef public_6efa848
#undef public_6efa893
#undef public_6efa897
#undef public_6efa89e
#undef public_6efa8cf
#undef public_6efa8d1

#pragma init_seg(compiler)
extern "C" void const* const public_6efa893 = __AsmFindLabelExport(&internal_6efa79a, 0x6efa893);
extern "C" void const* const public_6efa897 = __AsmFindLabelExport(&internal_6efa79a, 0x6efa897);
