#include "Content-PCH.h"


#define public_6eac5a1 _public_6eac5a1

PROC_DECLARE(0x6eac560, internal_6eac560, public_6eac560);
extern "C" NAKED register_t __cdecl internal_6eac560()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        mov ecx, dword ptr ds : [edi+0x58]
        cmp ecx, dword ptr ds : [esi+4]
        mov al, 1
        jne public_6eac5a1
        push edi
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+0x30]
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0xC]
        add edi, 0x20
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [edi+8]
        add esp, 4
        mov dword ptr ds : [edx+8], eax
        xor al, al
        public_6eac5a1 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eac560)
    }
}

#undef public_6eac5a1
