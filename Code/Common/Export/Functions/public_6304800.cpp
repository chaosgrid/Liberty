#include "Common-PCH.h"


#define public_630481d _public_630481d

PROC_DECLARE(0x6304800, internal_6304800, public_6304800);
extern "C" NAKED register_t __cdecl internal_6304800()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        mov edi, dword ptr ss : [esp+0x10]
        not ecx
        dec ecx
        cmp ecx, edi
        jl public_630481d
        pop edi
        pop esi
        ret 
        public_630481d : nop
        mov eax, edi
        sub eax, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push esi
        call dword ptr ds : [public_6399230]
        add esp, 0xC
        mov byte ptr ds : [esi+edi-1], 0
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6304800)
    }
}

#undef public_630481d
