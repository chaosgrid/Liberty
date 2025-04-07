#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba11b);

#define public_457f58 _public_457f58
#define public_457f5a _public_457f5a
#define public_457fa5 _public_457fa5
#define public_457fc1 _public_457fc1

PROC_DECLARE(0x457f10, internal_457f10, public_457f10);
extern "C" NAKED register_t __cdecl internal_457f10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba11b @0x457f12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba11b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_5b7e84
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+8], edi
        test edi, edi
        mov dword ptr ss : [esp+0x14], 0
        je public_457f58
        mov ecx, edi
        call dword ptr ds : [public_5c61b0]
        mov dword ptr ds : [edi], offset public_5cbd68
        mov ecx, edi
        jmp public_457f5a
        public_457f58 : nop
        xor ecx, ecx
        public_457f5a : nop
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi], ecx
        call dword ptr ds : [public_5c61c8]
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [public_5c6294]
        lea ecx, ds:[eax*4]
        push ecx
        mov dword ptr ds : [esi+4], eax
        call public_5b7e84
        mov edx, dword ptr ds : [esi+4]
        shl edx, 2
        push edx
        mov dword ptr ds : [esi+8], eax
        call public_5b7e84
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0xC], eax
        add esp, 8
        xor eax, eax
        test ecx, ecx
        jle public_457fc1
        public_457fa5 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+eax*4], 0xFFFFFFFF
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+eax*4], 0
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        jl public_457fa5
        public_457fc1 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x457f10)
    }
}

#undef public_457f58
#undef public_457f5a
#undef public_457fa5
#undef public_457fc1
