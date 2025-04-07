#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad08fd);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0a8d);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0b28);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0de2);

#define public_6ad0aa3 _public_6ad0aa3
#define public_6ad0acb _public_6ad0acb
#define public_6ad0b05 _public_6ad0b05
#define public_6ad0b21 _public_6ad0b21
#define public_6ad0b24 _public_6ad0b24

PROC_DECLARE(0x6ad0a8d, internal_6ad0a8d, public_6ad0a8d);
extern "C" NAKED register_t __cdecl internal_6ad0a8d()
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
        je public_6ad0aa3
        call public_6ad08fd
        public_6ad0aa3 : nop
        mov eax, dword ptr ss : [ebp+8]
        test byte ptr ds : [eax+4], 0x66
        je public_6ad0acb
        cmp dword ptr ds : [esi+4], 0
        je public_6ad0b21
        cmp dword ptr ss : [ebp+0x1C], 0
        jne public_6ad0b21
        push 0xFFFFFFFF
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        call public_6ad0de2
        add esp, 0x10
        jmp public_6ad0b21
        public_6ad0acb : nop
        cmp dword ptr ds : [esi+0xC], 0
        je public_6ad0b21
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_6ad0b05
        cmp dword ptr ds : [eax+0x14], edi
        jbe public_6ad0b05
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6ad0b05
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
        jmp public_6ad0b24
        public_6ad0b05 : nop
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x24]
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ad0b28
        add esp, 0x20
        public_6ad0b21 : nop
        push 1
        pop eax
        public_6ad0b24 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad0a8d)
    }
}

#undef public_6ad0aa3
#undef public_6ad0acb
#undef public_6ad0b05
#undef public_6ad0b21
#undef public_6ad0b24
