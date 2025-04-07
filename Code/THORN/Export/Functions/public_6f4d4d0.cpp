#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e560);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e7f0);

#define public_6f4d4ef _public_6f4d4ef
#define public_6f4d511 _public_6f4d511
#define public_6f4d529 _public_6f4d529

PROC_DECLARE(0x6f4d4d0, internal_6f4d4d0, public_6f4d4d0);
extern "C" NAKED register_t __cdecl internal_6f4d4d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6f61e28]
        push ebx
        mov ebx, dword ptr ds : [ecx+4]
        push ebp
        shl eax, 4
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        add ebx, eax
        test edi, edi
        jge public_6f4d4ef
        xor edi, edi
        public_6f4d4ef : nop
        lea edx, ds:[edi+1]
        push edx
        call public_6f4e560
        mov ebp, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax], 0xFFFFFFFD
        add esp, 4
        xor eax, eax
        test edi, edi
        jle public_6f4d529
        push esi
        public_6f4d511 : nop
        lea esi, ds:[eax+1]
        push ebx
        push esi
        push ebp
        call public_6f4e7f0
        mov eax, esi
        add esp, 0xC
        add ebx, 0x10
        cmp eax, edi
        jl public_6f4d511
        pop esi
        public_6f4d529 : nop
        push edi
        push ebp
        call public_6f4cea0
        add esp, 8
        pop edi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4d4d0)
    }
}

#undef public_6f4d4ef
#undef public_6f4d511
#undef public_6f4d529
