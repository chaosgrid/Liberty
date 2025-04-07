#include "Common-PCH.h"


#define public_629a080 _public_629a080
#define public_629a094 _public_629a094

PROC_DECLARE(0x629a060, internal_629a060, public_629a060);
extern "C" NAKED register_t __cdecl internal_629a060()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0xA0]
        test eax, eax
        jl public_629a094
        lea ecx, ds:[esi+0x54]
        mov esi, dword ptr ds : [ecx]
        xor edx, edx
        cmp esi, 0xFFFFFFFF
        je public_629a094
        nop 
        lea esp, ss:[esp]
        public_629a080 : nop
        mov esi, dword ptr ds : [ecx+0x34]
        add ecx, 0x34
        inc edx
        cmp esi, 0xFFFFFFFF
        jne public_629a080
        cmp eax, edx
        jae public_629a094
        xor al, al
        pop esi
        ret 
        public_629a094 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x629a060)
    }
}

#undef public_629a080
#undef public_629a094
