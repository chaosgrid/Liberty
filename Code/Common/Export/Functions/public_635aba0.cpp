#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_635aba0);
CLANG_FORWARD_PROC_SYMBOL(public_635d3e0);

#define public_635abab _public_635abab
#define public_635abc2 _public_635abc2
#define public_635abd7 _public_635abd7

PROC_DECLARE(0x635aba0, internal_635aba0, public_635aba0);
extern "C" NAKED register_t __cdecl internal_635aba0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        public_635abab : nop
        mov edi, dword ptr ds : [esi]
        test edi, edi
        je public_635abc2
        lea eax, ds:[esi+0x1C]
        push ebx
        push eax
        call public_635aba0
        add esp, 8
        add esi, edi
        jmp public_635abab
        public_635abc2 : nop
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx]
        add edi, esi
        cmp ecx, eax
        jl public_635abd7
        mov ecx, ebx
        call public_635d3e0
        public_635abd7 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+edx*4], edi
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x635aba0)
    }
}

#undef public_635abab
#undef public_635abc2
#undef public_635abd7
