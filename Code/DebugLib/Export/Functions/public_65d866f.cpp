#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d866f);
CLANG_FORWARD_PROC_SYMBOL(public_65d870a);
CLANG_FORWARD_PROC_SYMBOL(public_65d89c4);
CLANG_FORWARD_PROC_SYMBOL(public_65d90c9);

#define public_65d8685 _public_65d8685
#define public_65d86ad _public_65d86ad
#define public_65d86e7 _public_65d86e7
#define public_65d8703 _public_65d8703
#define public_65d8706 _public_65d8706

PROC_DECLARE(0x65d866f, internal_65d866f, public_65d866f);
extern "C" NAKED register_t __cdecl internal_65d866f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+0x18]
        push edi
        mov edi, 0x19930520
        cmp dword ptr ds : [esi], edi
        je public_65d8685
        call public_65d90c9
        public_65d8685 : nop
        mov eax, dword ptr ss : [ebp+8]
        test byte ptr ds : [eax+4], 0x66
        je public_65d86ad
        cmp dword ptr ds : [esi+4], 0
        je public_65d8703
        cmp dword ptr ss : [ebp+0x1C], 0
        jne public_65d8703
        push 0xFFFFFFFF
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        call public_65d89c4
        add esp, 0x10
        jmp public_65d8703
        public_65d86ad : nop
        cmp dword ptr ds : [esi+0xC], 0
        je public_65d8703
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_65d86e7
        cmp dword ptr ds : [eax+0x14], edi
        jbe public_65d86e7
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_65d86e7
        movzx edx, byte ptr ss : [ebp+0x24]
        push edx
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call ecx
        add esp, 0x20
        jmp public_65d8706
        public_65d86e7 : nop
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x24]
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_65d870a
        add esp, 0x20
        public_65d8703 : nop
        push 1
        pop eax
        public_65d8706 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d866f)
    }
}

#undef public_65d8685
#undef public_65d86ad
#undef public_65d86e7
#undef public_65d8703
#undef public_65d8706
