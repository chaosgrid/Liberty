#include "Server-PCH.h"


#define public_6d5e930 _public_6d5e930
#define public_6d5e945 _public_6d5e945
#define public_6d5e94b _public_6d5e94b

PROC_DECLARE(0x6d5e910, internal_6d5e910, public_6d5e910);
extern "C" NAKED register_t __cdecl internal_6d5e910()
{
    __asm
    {
        push ebx
        push esi
        push edi
        call dword ptr ds : [public_6d649fc]
        mov esi, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [esi], 0
        je public_6d5e94b
        test eax, eax
        je public_6d5e945
        mov edi, dword ptr ds : [public_6d649f8]
        lea esp, ss:[esp]
        public_6d5e930 : nop
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        cmp eax, dword ptr ds : [esi]
        sete bl
        call edi
        test bl, bl
        jne public_6d5e94b
        test eax, eax
        jne public_6d5e930
        public_6d5e945 : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_6d5e94b : nop
        test eax, eax
        je public_6d5e945
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        pop edi
        mov dword ptr ds : [esi], eax
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d5e910)
    }
}

#undef public_6d5e930
#undef public_6d5e945
#undef public_6d5e94b
