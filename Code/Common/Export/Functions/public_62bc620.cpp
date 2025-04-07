#include "Common-PCH.h"


#define public_62bc655 _public_62bc655
#define public_62bc65a _public_62bc65a

PROC_DECLARE(0x62bc620, internal_62bc620, public_62bc620);
extern "C" NAKED register_t __cdecl internal_62bc620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ds : [ecx], eax
        je public_62bc65a
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [esi]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        push eax
        mov ecx, esi
        call dword ptr ds : [edi]
        fcomp qword ptr ds : [public_639c430]
        pop edi
        pop esi
        fnstsw ax
        test ah, 0x41
        jne public_62bc655
        mov eax, 1
        ret 8
        public_62bc655 : nop
        xor eax, eax
        ret 8
        public_62bc65a : nop
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x62bc620)
    }
}

#undef public_62bc655
#undef public_62bc65a
