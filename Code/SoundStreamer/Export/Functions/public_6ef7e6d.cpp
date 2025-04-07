#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef46e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4aa7);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e6d);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8098);
CLANG_FORWARD_PROC_SYMBOL(public_6ef810c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8162);
CLANG_FORWARD_PROC_SYMBOL(public_6efa015);
CLANG_FORWARD_PROC_SYMBOL(public_6efa031);
CLANG_FORWARD_PROC_SYMBOL(public_6efa04d);
CLANG_FORWARD_PROC_SYMBOL(public_6efa070);

#define public_6ef7efb _public_6ef7efb
#define public_6ef7f0a _public_6ef7f0a
#define public_6ef7f64 _public_6ef7f64
#define public_6ef7fac _public_6ef7fac
#define public_6ef7ff3 _public_6ef7ff3
#define public_6ef800d _public_6ef800d
#define public_6ef8012 _public_6ef8012
#define public_6ef8016 _public_6ef8016
#define public_6ef8025 _public_6ef8025
#define public_6ef8029 _public_6ef8029

PROC_DECLARE(0x6ef7e6d, internal_6ef7e6d, public_6ef7e6d);
extern "C" NAKED register_t __cdecl internal_6ef7e6d()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset public_6efc438 @0x6ef7e72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc438
/*FIXUP push offset _public_6efa070 @0x6ef7e77*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6efa070
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        push edi
        mov dword ptr ss : [ebp-0x18], esp
        mov ecx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6ef8016
        cmp byte ptr ds : [eax+8], 0
        je public_6ef8016
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6ef8016
        mov edx, dword ptr ss : [ebp+0xC]
        lea edi, ds:[eax+edx+0xC]
        and dword ptr ss : [ebp-4], 0
        test byte ptr ds : [ecx], 8
        je public_6ef7f0a
        mov esi, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [esi+0x18]
        call public_6efa015
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push 1
        push edi
        call public_6efa031
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        add ecx, 8
        push ecx
        public_6ef7efb : nop
        push eax
        call public_6ef8098
        pop ecx
        pop ecx
        mov dword ptr ds : [edi], eax
        jmp public_6ef8012
        public_6ef7f0a : nop
        mov esi, dword ptr ss : [ebp+0x14]
        test byte ptr ds : [esi], 1
        je public_6ef7f64
        mov ebx, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [ebx+0x18]
        call public_6efa015
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push 1
        push edi
        call public_6efa031
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push dword ptr ds : [esi+0x14]
        push dword ptr ds : [ebx+0x18]
        push edi
        call public_6ef46e0
        add esp, 0xC
        cmp dword ptr ds : [esi+0x14], 4
        jne public_6ef8012
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6ef8012
        add esi, 8
        push esi
        jmp public_6ef7efb
        public_6ef7f64 : nop
        cmp dword ptr ds : [esi+0x18], 0
        mov ebx, dword ptr ss : [ebp+8]
        push 1
        push dword ptr ds : [ebx+0x18]
        jne public_6ef7fac
        call public_6efa015
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push 1
        push edi
        call public_6efa031
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push dword ptr ds : [esi+0x14]
        add esi, 8
        push esi
        push dword ptr ds : [ebx+0x18]
        call public_6ef8098
        pop ecx
        pop ecx
        push eax
        push edi
        call public_6ef46e0
        add esp, 0xC
        jmp public_6ef8012
        public_6ef7fac : nop
        call public_6efa015
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push 1
        push edi
        call public_6efa031
        pop ecx
        pop ecx
        test eax, eax
        je public_6ef800d
        push dword ptr ds : [esi+0x18]
        call public_6efa04d
        pop ecx
        test eax, eax
        je public_6ef800d
        test byte ptr ds : [esi], 4
        je public_6ef7ff3
        push 1
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [ebx+0x18]
        call public_6ef8098
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [esi+0x18]
        push edi
        call public_6ef4aa7
        jmp public_6ef8012
        public_6ef7ff3 : nop
        lea eax, ds:[esi+8]
        push eax
        push dword ptr ds : [ebx+0x18]
        call public_6ef8098
        pop ecx
        pop ecx
        push eax
        push dword ptr ds : [esi+0x18]
        push edi
        call public_6ef4aa7
        jmp public_6ef8012
        public_6ef800d : nop
        call public_6ef8162
        public_6ef8012 : nop
        or dword ptr ss : [ebp-4], 0xFFFFFFFF
        public_6ef8016 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_6ef8025 : nop
        push 1
        pop eax
        ret 
        public_6ef8029 : nop
        mov esp, dword ptr ss : [ebp-0x18]
        jmp public_6ef810c
        UNREACHABLE_TRAP(0x6ef7e6d)
        ASM_EXPORT_ENTRY_FIRST(0x6ef8025, public_6ef8025)
        ASM_EXPORT_ENTRY_LAST(0x6ef8029, public_6ef8029)
    }
}

#undef public_6ef7efb
#undef public_6ef7f0a
#undef public_6ef7f64
#undef public_6ef7fac
#undef public_6ef7ff3
#undef public_6ef800d
#undef public_6ef8012
#undef public_6ef8016
#undef public_6ef8025
#undef public_6ef8029

#pragma init_seg(compiler)
extern "C" void const* const public_6ef8025 = __AsmFindLabelExport(&internal_6ef7e6d, 0x6ef8025);
extern "C" void const* const public_6ef8029 = __AsmFindLabelExport(&internal_6ef7e6d, 0x6ef8029);
