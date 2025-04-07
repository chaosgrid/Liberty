#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d70b8);
CLANG_FORWARD_PROC_SYMBOL(public_65d71e3);
CLANG_FORWARD_PROC_SYMBOL(public_65d88bd);
CLANG_FORWARD_PROC_SYMBOL(public_65d8a78);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);

#define public_65d88f0 _public_65d88f0
#define public_65d890c _public_65d890c
#define public_65d8935 _public_65d8935
#define public_65d895b _public_65d895b
#define public_65d8963 _public_65d8963

PROC_DECLARE(0x65d88bd, internal_65d88bd, public_65d88bd);
extern "C" NAKED register_t __cdecl internal_65d88bd()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push esi
        push edi
        call public_65d8f61
        cmp dword ptr ds : [eax+0x68], 0
        je public_65d88f0
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65d70b8
        add esp, 0x1C
        test eax, eax
        jne public_65d8963
        public_65d88f0 : nop
        mov edi, dword ptr ss : [ebp+0x1C]
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        call public_65d71e3
        add esp, 0x14
        mov esi, eax
        public_65d890c : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-8]
        jae public_65d8963
        cmp edi, dword ptr ds : [esi]
        jl public_65d895b
        cmp edi, dword ptr ds : [esi+4]
        jg public_65d895b
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x10]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr ds : [eax-0xC]
        test ecx, ecx
        je public_65d8935
        cmp byte ptr ds : [ecx+8], 0
        jne public_65d895b
        public_65d8935 : nop
        push 1
        add eax, 0xFFFFFFF0
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push esi
        push 0
        push eax
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_65d8a78
        add esp, 0x2C
        public_65d895b : nop
        inc dword ptr ss : [ebp-4]
        add esi, 0x14
        jmp public_65d890c
        public_65d8963 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d88bd)
    }
}

#undef public_65d88f0
#undef public_65d890c
#undef public_65d8935
#undef public_65d895b
#undef public_65d8963
