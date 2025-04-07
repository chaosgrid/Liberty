#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ecd30);

#define public_62ecd77 _public_62ecd77

PROC_DECLARE(0x62ecd30, internal_62ecd30, public_62ecd30);
extern "C" NAKED register_t __cdecl internal_62ecd30()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+8]
        mov byte ptr ds : [esi+0xC6], 1
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov esi, dword ptr ds : [esi+8]
        add esi, 8
        mov dword ptr ss : [esp+4], eax
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_62ecd77
        push 0xFFFFFFFF
        lea eax, ds:[esi-8]
        lea edx, ss:[esp+8]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 1
        call dword ptr ds : [eax+0x60]
        pop esi
        pop ecx
        ret 
        public_62ecd77 : nop
        xor eax, eax
        push 0xFFFFFFFF
        lea edx, ss:[esp+8]
        lea ecx, ds:[eax+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        push 1
        call dword ptr ds : [eax+0x60]
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ecd30)
    }
}

#undef public_62ecd77
