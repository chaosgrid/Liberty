#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d200);

#define public_44d220 _public_44d220
#define public_44d238 _public_44d238

PROC_DECLARE(0x44d200, internal_44d200, public_44d200);
extern "C" NAKED register_t __cdecl internal_44d200()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x1334]
        push esi
        xor esi, esi
        test eax, eax
        jle public_44d238
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[ebx+0x1134]
        lea esp, ss:[esp]
        public_44d220 : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        push ebp
        call dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ebx+0x1334]
        inc esi
        add edi, 4
        cmp esi, eax
        jl public_44d220
        pop edi
        pop ebp
        public_44d238 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x44d200)
    }
}

#undef public_44d220
#undef public_44d238
