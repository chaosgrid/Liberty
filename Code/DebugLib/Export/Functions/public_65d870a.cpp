#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d71e3);
CLANG_FORWARD_PROC_SYMBOL(public_65d870a);
CLANG_FORWARD_PROC_SYMBOL(public_65d88bd);
CLANG_FORWARD_PROC_SYMBOL(public_65d8967);
CLANG_FORWARD_PROC_SYMBOL(public_65d8a78);
CLANG_FORWARD_PROC_SYMBOL(public_65d8dfc);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65d9068);
CLANG_FORWARD_PROC_SYMBOL(public_65d90c9);
CLANG_FORWARD_PROC_SYMBOL(public_65dd203);

#define public_65d872a _public_65d872a
#define public_65d872f _public_65d872f
#define public_65d8791 _public_65d8791
#define public_65d87af _public_65d87af
#define public_65d87e6 _public_65d87e6
#define public_65d880b _public_65d880b
#define public_65d881d _public_65d881d
#define public_65d883c _public_65d883c
#define public_65d884b _public_65d884b
#define public_65d886f _public_65d886f
#define public_65d8872 _public_65d8872
#define public_65d887d _public_65d887d
#define public_65d888d _public_65d888d
#define public_65d8892 _public_65d8892
#define public_65d88b8 _public_65d88b8

PROC_DECLARE(0x65d870a, internal_65d870a, public_65d870a);
extern "C" NAKED register_t __cdecl internal_65d870a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        mov eax, dword ptr ss : [ebp+0xC]
        and byte ptr ss : [ebp-0x14], 0
        mov eax, dword ptr ds : [eax+8]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp-0x10], eax
        jl public_65d872a
        mov ecx, dword ptr ss : [ebp+0x18]
        cmp eax, dword ptr ds : [ecx+4]
        jl public_65d872f
        public_65d872a : nop
        call public_65d90c9
        public_65d872f : nop
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov ebx, 0xE06D7363
        push edi
        mov edi, 0x19930520
        cmp dword ptr ds : [esi], ebx
        jne public_65d8892
        cmp dword ptr ds : [esi+0x10], 3
        jne public_65d87af
        cmp dword ptr ds : [esi+0x14], edi
        jne public_65d87af
        cmp dword ptr ds : [esi+0x1C], 0
        jne public_65d87af
        call public_65d8f61
        cmp dword ptr ds : [eax+0x6C], 0
        je public_65d888d
        call public_65d8f61
        mov esi, dword ptr ds : [eax+0x6C]
        call public_65d8f61
        mov eax, dword ptr ds : [eax+0x70]
        push 1
        push esi
        mov dword ptr ss : [ebp+0x10], eax
        mov byte ptr ss : [ebp-0x14], 1
        call public_65dd203
        pop ecx
        test eax, eax
        pop ecx
        jne public_65d8791
        call public_65d90c9
        public_65d8791 : nop
        cmp dword ptr ds : [esi], ebx
        jne public_65d8892
        cmp dword ptr ds : [esi+0x10], 3
        jne public_65d87af
        cmp dword ptr ds : [esi+0x14], edi
        jne public_65d87af
        cmp dword ptr ds : [esi+0x1C], 0
        jne public_65d87af
        call public_65d90c9
        public_65d87af : nop
        cmp dword ptr ds : [esi], ebx
        jne public_65d8892
        cmp dword ptr ds : [esi+0x10], 3
        jne public_65d8892
        cmp dword ptr ds : [esi+0x14], edi
        jne public_65d8892
        mov edi, dword ptr ss : [ebp-0x10]
        lea eax, ss:[ebp-0x18]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        call public_65d71e3
        add esp, 0x14
        mov ebx, eax
        public_65d87e6 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-0x18]
        jae public_65d887d
        cmp dword ptr ds : [ebx], edi
        jg public_65d8872
        cmp edi, dword ptr ds : [ebx+4]
        jg public_65d8872
        mov eax, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [ebx+0xC]
        test eax, eax
        mov dword ptr ss : [ebp-0xC], eax
        jle public_65d886f
        public_65d880b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov eax, dword ptr ds : [eax+0xC]
        lea edi, ds:[eax+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        mov dword ptr ss : [ebp-8], eax
        jle public_65d883c
        public_65d881d : nop
        push dword ptr ds : [esi+0x1C]
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+8]
        call public_65d8967
        add esp, 0xC
        test eax, eax
        jne public_65d884b
        dec dword ptr ss : [ebp-8]
        add edi, 4
        cmp dword ptr ss : [ebp-8], eax
        jg public_65d881d
        public_65d883c : nop
        dec dword ptr ss : [ebp-0xC]
        add dword ptr ss : [ebp+8], 0x10
        cmp dword ptr ss : [ebp-0xC], 0
        jg public_65d880b
        jmp public_65d886f
        public_65d884b : nop
        push dword ptr ss : [ebp-0x14]
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push ebx
        push dword ptr ds : [edi]
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_65d8a78
        add esp, 0x2C
        public_65d886f : nop
        mov edi, dword ptr ss : [ebp-0x10]
        public_65d8872 : nop
        inc dword ptr ss : [ebp-4]
        add ebx, 0x14
        jmp public_65d87e6
        public_65d887d : nop
        cmp byte ptr ss : [ebp+0x1C], 0
        je public_65d888d
        push 1
        push esi
        call public_65d8dfc
        pop ecx
        pop ecx
        public_65d888d : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        public_65d8892 : nop
        cmp byte ptr ss : [ebp+0x1C], 0
        jne public_65d88b8
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp-0x10]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push esi
        call public_65d88bd
        add esp, 0x20
        jmp public_65d888d
        public_65d88b8 : nop
        jmp public_65d9068
        UNREACHABLE_TRAP(0x65d870a)
    }
}

#undef public_65d872a
#undef public_65d872f
#undef public_65d8791
#undef public_65d87af
#undef public_65d87e6
#undef public_65d880b
#undef public_65d881d
#undef public_65d883c
#undef public_65d884b
#undef public_65d886f
#undef public_65d8872
#undef public_65d887d
#undef public_65d888d
#undef public_65d8892
#undef public_65d88b8
