#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52890);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53050);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f531a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f532b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54930);
CLANG_FORWARD_PROC_SYMBOL(public_6f549d0);

#define public_6f5499e _public_6f5499e
#define public_6f549a2 _public_6f549a2

PROC_DECLARE(0x6f54930, internal_6f54930, public_6f54930);
extern "C" NAKED register_t __cdecl internal_6f54930()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov ebx, dword ptr ds : [esi+0x1C]
        push edi
        push esi
        call public_6f532b0
        push 1
        push esi
        mov ebp, eax
        call public_6f52890
        push 0x7B
        push esi
        call public_6f53130
        lea eax, ss:[esp+0x24]
        push eax
        push esi
        call public_6f549d0
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ss : [esp+0x2C]
        add esp, 0x1C
        cmp eax, 0x3B
        jne public_6f549a2
        push esi
        call public_6f52920
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        call public_6f549d0
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0xC
        cmp edx, eax
        jne public_6f5499e
/*FIXUP push offset public_6f61428 @0x6f54990*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61428
        push esi
        call public_6f511c0
        add esp, 8
        public_6f5499e : nop
        add edi, dword ptr ss : [esp+0x18]
        public_6f549a2 : nop
        push ebx
        push 0x7B
        push 0x7D
        push esi
        call public_6f531a0
        push edi
        push 0x16
        push ebp
        push esi
        call public_6f53050
        add esp, 0x20
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f54930)
    }
}

#undef public_6f5499e
#undef public_6f549a2
