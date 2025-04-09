#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c46e0);

#define public_4c4710 _public_4c4710
#define public_4c4741 _public_4c4741

PROC_DECLARE(0x4c46e0, internal_4c46e0, public_4c46e0);
extern "C" NAKED register_t __cdecl internal_4c46e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        jl public_4c4741
        mov ecx, dword ptr ds : [public_673374]
        cmp edx, ecx
        jge public_4c4741
        dec ecx
        cmp edx, ecx
        mov dword ptr ds : [public_673374], ecx
        jge public_4c4741
        push ebx
        lea eax, ds:[edx+edx*2]
        sub ecx, edx
        push esi
        lea eax, ds : [eax*8+public_672978]
        mov edx, ecx
        push edi
        mov edi, edi
        public_4c4710 : nop
        dec edx
        lea ecx, ds:[eax+0x18]
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], esi
        mov esi, dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax+0x10], esi
        mov esi, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [eax+0xC], esi
        mov esi, dword ptr ds : [eax+0x2C]
        mov dword ptr ds : [eax+0x14], esi
        mov eax, ecx
        jne public_4c4710
        pop edi
        pop esi
        pop ebx
        public_4c4741 : nop
        ret 
        UNREACHABLE_TRAP(0x4c46e0)
    }
}

#undef public_4c4710
#undef public_4c4741
