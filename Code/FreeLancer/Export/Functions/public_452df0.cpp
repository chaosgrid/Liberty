#include "FreeLancer-PCH.h"


#define public_452e2f _public_452e2f

PROC_DECLARE(0x452df0, internal_452df0, public_452df0);
extern "C" NAKED register_t __cdecl internal_452df0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        xor bl, bl
        test eax, eax
        push esi
        mov esi, ecx
        je public_452e2f
        push eax
        mov eax, dword ptr ds : [esi+0x70]
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jne public_452e2f
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ds : [ecx+0x1B4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0x6C]
        mov edx, dword ptr ss : [esp+0x14]
        pop esi
        mov dword ptr ds : [edx], ecx
        mov al, 1
        pop ebx
        ret 0xC
        public_452e2f : nop
        pop esi
        mov al, bl
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x452df0)
    }
}

#undef public_452e2f
