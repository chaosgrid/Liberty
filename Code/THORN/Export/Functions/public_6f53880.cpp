#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52990);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f531a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53270);
CLANG_FORWARD_PROC_SYMBOL(public_6f532b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f532e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53880);
CLANG_FORWARD_PROC_SYMBOL(public_6f53920);

#define public_6f538d8 _public_6f538d8
#define public_6f538f3 _public_6f538f3

PROC_DECLARE(0x6f53880, internal_6f53880, public_6f53880);
extern "C" NAKED register_t __cdecl internal_6f53880()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        call public_6f52920
        push esi
        call public_6f53270
        push 0x111
        push esi
        mov edi, eax
        call public_6f53130
        push esi
        call public_6f532e0
        push esi
        call public_6f532b0
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x18
        cmp eax, 0x107
        jne public_6f538d8
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call public_6f53880
        add esp, 8
        push ebx
        push edi
        push esi
        call public_6f53920
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_6f538d8 : nop
        push 0x106
        push esi
        call public_6f52990
        add esp, 8
        test eax, eax
        je public_6f538f3
        push esi
        call public_6f532e0
        add esp, 4
        public_6f538f3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 0x10A
        push 0x108
        push esi
        call public_6f531a0
        add esp, 0x10
        push ebx
        push edi
        push esi
        call public_6f53920
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f53880)
    }
}

#undef public_6f538d8
#undef public_6f538f3
