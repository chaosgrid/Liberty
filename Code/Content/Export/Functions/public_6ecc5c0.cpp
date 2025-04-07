#include "Content-PCH.h"


#define public_6ecc602 _public_6ecc602

PROC_DECLARE(0x6ecc5c0, internal_6ecc5c0, public_6ecc5c0);
extern "C" NAKED register_t __cdecl internal_6ecc5c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x44]
        test al, al
        push edi
        jne public_6ecc602
        mov edi, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+8]
        push eax
        push edi
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ecc602
        add edi, 0x20
        mov edx, dword ptr ds : [edi]
        lea ecx, ds:[esi+0x38]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edi+8]
        pop edi
        mov byte ptr ds : [esi+0x44], 1
        mov dword ptr ds : [ecx+8], edx
        xor al, al
        pop esi
        ret 4
        public_6ecc602 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecc5c0)
    }
}

#undef public_6ecc602
