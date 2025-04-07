#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53020);
CLANG_FORWARD_PROC_SYMBOL(public_6f53290);
CLANG_FORWARD_PROC_SYMBOL(public_6f53530);
CLANG_FORWARD_PROC_SYMBOL(public_6f53a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f53b00);

#define public_6f53a96 _public_6f53a96
#define public_6f53aa7 _public_6f53aa7
#define public_6f53aef _public_6f53aef

PROC_DECLARE(0x6f53a80, internal_6f53a80, public_6f53a80);
extern "C" NAKED register_t __cdecl internal_6f53a80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        call public_6f53b00
        add esp, 8
        public_6f53a96 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x104
        je public_6f53aa7
        cmp eax, 0x10E
        jne public_6f53aef
        public_6f53aa7 : nop
        xor ebx, ebx
        cmp eax, 0x104
        setne bl
        push edi
        push esi
        dec ebx
        and ebx, 2
        add ebx, 0x2E
        call public_6f53530
        push esi
        call public_6f52920
        push esi
        call public_6f53290
        push edi
        push esi
        mov ebp, eax
        call public_6f53b00
        push edi
        push esi
        call public_6f53530
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        push ebx
        push ebp
        push esi
        call public_6f53020
        add esp, 0x30
        jmp public_6f53a96
        public_6f53aef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f53a80)
    }
}

#undef public_6f53a96
#undef public_6f53aa7
#undef public_6f53aef
