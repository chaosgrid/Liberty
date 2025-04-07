#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f630);
CLANG_FORWARD_PROC_SYMBOL(public_6f556c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55a30);

#define public_6f55cf9 _public_6f55cf9
#define public_6f55d1a _public_6f55d1a
#define public_6f55d1c _public_6f55d1c
#define public_6f55d3c _public_6f55d3c

PROC_DECLARE(0x6f55cb0, internal_6f55cb0, public_6f55cb0);
extern "C" NAKED register_t __cdecl internal_6f55cb0()
{
    __asm
    {
        sub esp, 8
        push esi
        push edi
        lea eax, ss:[esp+8]
        push eax
/*FIXUP push offset public_6f618f4 @0x6f55cba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        mov dword ptr ss : [esp+0x10], 2
        call public_6f55a30
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, eax
        inc eax
        push 0
        push ecx
        mov esi, 1
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f4f630
        add esp, 0x14
        test eax, eax
        je public_6f55d3c
        push ebx
        mov ebx, dword ptr ds : [public_6f5a0fc]
        public_6f55cf9 : nop
        test esi, esi
        je public_6f55d1a
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        push 1
        push eax
        call ebx
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 0x10
        cmp eax, ecx
        jne public_6f55d1a
        mov esi, 1
        jmp public_6f55d1c
        public_6f55d1a : nop
        xor esi, esi
        public_6f55d1c : nop
        mov eax, dword ptr ss : [esp+0xC]
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, eax
        inc eax
        push 0
        push ecx
        mov dword ptr ss : [esp+0x18], eax
        call public_6f4f630
        add esp, 0xC
        test eax, eax
        jne public_6f55cf9
        pop ebx
        public_6f55d3c : nop
        push esi
        call public_6f556c0
        add esp, 4
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f55cb0)
    }
}

#undef public_6f55cf9
#undef public_6f55d1a
#undef public_6f55d1c
#undef public_6f55d3c
