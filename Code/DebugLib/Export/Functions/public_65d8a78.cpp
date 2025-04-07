#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f7f);
CLANG_FORWARD_PROC_SYMBOL(public_65d6fba);
CLANG_FORWARD_PROC_SYMBOL(public_65d89c4);
CLANG_FORWARD_PROC_SYMBOL(public_65d8a78);
CLANG_FORWARD_PROC_SYMBOL(public_65d8af3);
CLANG_FORWARD_PROC_SYMBOL(public_65d8c38);

#define public_65d8a9a _public_65d8a9a
#define public_65d8aa6 _public_65d8aa6
#define public_65d8aa9 _public_65d8aa9
#define public_65d8aee _public_65d8aee

PROC_DECLARE(0x65d8a78, internal_65d8a78, public_65d8a78);
extern "C" NAKED register_t __cdecl internal_65d8a78()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0x20], 0
        push ebx
        mov ebx, dword ptr ss : [ebp+0x1C]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        je public_65d8a9a
        push dword ptr ss : [ebp+0x20]
        push ebx
        push edi
        push dword ptr ss : [ebp+8]
        call public_65d8c38
        add esp, 0x10
        public_65d8a9a : nop
        cmp dword ptr ss : [ebp+0x2C], 0
        push dword ptr ss : [ebp+8]
        jne public_65d8aa6
        push edi
        jmp public_65d8aa9
        public_65d8aa6 : nop
        push dword ptr ss : [ebp+0x2C]
        public_65d8aa9 : nop
        call public_65d6fba
        mov esi, dword ptr ss : [ebp+0x24]
        push dword ptr ds : [esi]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push edi
        call public_65d89c4
        mov eax, dword ptr ds : [esi+4]
        push 0x100
        push dword ptr ss : [ebp+0x28]
        inc eax
        mov dword ptr ds : [edi+8], eax
        push dword ptr ds : [ebx+0xC]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x10]
        push edi
        push dword ptr ss : [ebp+8]
        call public_65d8af3
        add esp, 0x2C
        test eax, eax
        je public_65d8aee
        push edi
        push eax
        call public_65d6f7f
        public_65d8aee : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d8a78)
    }
}

#undef public_65d8a9a
#undef public_65d8aa6
#undef public_65d8aa9
#undef public_65d8aee
