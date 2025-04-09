#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cba10);

#define public_4cba34 _public_4cba34

PROC_DECLARE(0x4cba10, internal_4cba10, public_4cba10);
extern "C" NAKED register_t __cdecl internal_4cba10()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov dword ptr ss : [esp+8], 0xFFFFFFFF
        je public_4cba34
        mov eax, dword ptr ds : [public_5c6d58]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+8]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x48]
        public_4cba34 : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, 0xC
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4cba10)
    }
}

#undef public_4cba34
