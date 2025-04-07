#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62eb020);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62eb039 _public_62eb039

PROC_DECLARE(0x62eb020, internal_62eb020, public_62eb020);
extern "C" NAKED register_t __cdecl internal_62eb020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fca58]
        sub esp, 0xC
        test eax, eax
        push esi
        mov esi, ecx
        jne public_62eb039
        call public_6391cf0
        mov dword ptr ds : [public_63fca58], eax
        public_62eb039 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62eb020)
    }
}

#undef public_62eb039
