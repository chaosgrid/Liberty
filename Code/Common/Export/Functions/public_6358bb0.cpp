#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356730);
CLANG_FORWARD_PROC_SYMBOL(public_6358bb0);

#define public_6358bc2 _public_6358bc2
#define public_6358bda _public_6358bda
#define public_6358bee _public_6358bee

PROC_DECLARE(0x6358bb0, internal_6358bb0, public_6358bb0);
extern "C" NAKED register_t __cdecl internal_6358bb0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea ebx, ds:[ecx+0x10]
        push edi
        mov edi, ebx
        mov ebp, 2
        public_6358bc2 : nop
        lea ecx, ds:[edi-8]
        call public_6356730
        test eax, eax
        jne public_6358bda
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x8C]
        mov dword ptr ds : [esi], ecx
        jmp public_6358bee
        public_6358bda : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [ecx+0x9C]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi], eax
        public_6358bee : nop
        add edi, 0x14
        add esi, 4
        dec ebp
        jne public_6358bc2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6358bb0)
    }
}

#undef public_6358bc2
#undef public_6358bda
#undef public_6358bee
