#include "Server-PCH.h"


#define public_6d54a77 _public_6d54a77

PROC_DECLARE(0x6d54a10, internal_6d54a10, public_6d54a10);
extern "C" NAKED register_t __cdecl internal_6d54a10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0xC
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d54a77
        mov edx, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, edx
        jae public_6d54a77
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov esi, dword ptr ds : [ecx+edx+0x348]
        test esi, esi
        je public_6d54a77
        mov edx, dword ptr ss : [esp+0x20]
        mov cl, byte ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+8], edx
        lea edx, ss:[esp+4]
        mov byte ptr ss : [esp+0xC], cl
        mov ecx, dword ptr ds : [public_6d8fb14]
        push edx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+8], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        xor esi, esi
        call dword ptr ds : [eax+0x130]
        mov eax, esi
        public_6d54a77 : nop
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d54a10)
    }
}

#undef public_6d54a77
