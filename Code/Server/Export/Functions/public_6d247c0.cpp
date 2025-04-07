#include "Server-PCH.h"


#define public_6d247ec _public_6d247ec

PROC_DECLARE(0x6d247c0, internal_6d247c0, public_6d247c0);
extern "C" NAKED register_t __cdecl internal_6d247c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx+4]
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        jne public_6d247ec
        cmp dword ptr ds : [eax+4], 0xFFFFFFFF
        jne public_6d247ec
        inc dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [public_6d68a40]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [public_6d68a44]
        mov dword ptr ds : [eax+4], edx
        ret 8
        public_6d247ec : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        neg eax
        sbb eax, eax
        mov edx, eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        ret 8
        UNREACHABLE_TRAP(0x6d247c0)
    }
}

#undef public_6d247ec
