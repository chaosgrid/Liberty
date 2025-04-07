#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b790);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e240);

#define public_6f4d42a _public_6f4d42a

PROC_DECLARE(0x6f4d3b0, internal_6f4d3b0, public_6f4d3b0);
extern "C" NAKED register_t __cdecl internal_6f4d3b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push esi
        sub ecx, 0x20
        push edi
        push ecx
        call public_6f4e240
        mov edi, dword ptr ss : [esp+0x14]
        lea edx, ds:[eax+eax*8]
        mov eax, dword ptr ds : [public_6f61e28]
        shl edx, 1
        mov esi, edi
        sub esi, edx
        mov edx, dword ptr ds : [eax+0x64]
        shl esi, 4
        mov ecx, dword ptr ds : [esi+edx]
        add esi, edx
        add esp, 4
        cmp ecx, 0xFFFFFFFA
        jne public_6f4d42a
        mov eax, dword ptr ds : [eax]
        sub eax, 0x10
        push eax
        mov ebx, edx
        call public_6f4e240
        lea ecx, ds:[eax+eax*8]
        shl ecx, 1
        mov esi, edi
        sub esi, ecx
        shl esi, 4
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        add esp, 4
        cmp eax, 0xFFFFFFFA
        jne public_6f4d42a
        mov esi, edi
        shl esi, 4
        mov eax, dword ptr ds : [esi+ebx]
        add esi, ebx
        cmp eax, 0xFFFFFFFA
        jne public_6f4d42a
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6f4c7f0
        add esp, 4
        public_6f4d42a : nop
        mov eax, dword ptr ds : [edi*4+public_6f60648]
        push eax
        call public_6f4b790
        push 1
        push 3
        push esi
        call public_6f4c4f0
        add esp, 0x10
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4d3b0)
    }
}

#undef public_6f4d42a
