#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ed50);

#define public_6b4e833 _public_6b4e833

PROC_DECLARE(0x6b4e7b0, internal_6b4e7b0, public_6b4e7b0);
extern "C" NAKED register_t __cdecl internal_6b4e7b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x14], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+0x18], edx
        xor ecx, ecx
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+0x1C], ecx
        mov eax, edx
        push edi
        xor edx, edx
        mov dh, byte ptr ds : [esi+0xE]
        xor edi, edi
        mov di, word ptr ds : [esi+0xC]
        add eax, 2
        and edi, 0xFFF
        or edx, edi
        mov word ptr ds : [eax-2], dx
        mov dword ptr ds : [esi+0x10], 2
        mov dword ptr ds : [esi+0x18], eax
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_6b73f1c
        mov dword ptr ss : [esp+0x14], edx
        call public_6b4ed50
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+0x18]
        inc edx
        mov dword ptr ds : [ecx], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi+0x10]
        add eax, edx
        mov dword ptr ds : [ecx+0x18], eax
        mov esi, dword ptr ds : [esi+0x10]
        cmp esi, dword ptr ds : [ecx+0x10]
        jbe public_6b4e833
        mov dword ptr ds : [ecx+0x10], esi
        public_6b4e833 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b4e7b0)
    }
}

#undef public_6b4e833
