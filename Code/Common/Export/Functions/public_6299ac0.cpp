#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6299ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6299b2a _public_6299b2a
#define public_6299b3f _public_6299b3f

PROC_DECLARE(0x6299ac0, internal_6299ac0, public_6299ac0);
extern "C" NAKED register_t __cdecl internal_6299ac0()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6299b3f
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [public_6399040]
        imul ecx, 0x34
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+esi+0x54]
        push ebx
        lea ebx, ds:[ecx+esi+0x54]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc194]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x18]
        rep movsd
        jne public_6299b2a
        call public_6391cf0
        mov dword ptr ds : [public_63fc194], eax
        public_6299b2a : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x28
        push ebx
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        pop ebx
        public_6299b3f : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, eax
        mov dword ptr ds : [edi], esi
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x6299ac0)
    }
}

#undef public_6299b2a
#undef public_6299b3f
