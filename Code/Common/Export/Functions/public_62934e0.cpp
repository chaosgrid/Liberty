#include "Common-PCH.h"


#define public_629355a _public_629355a

PROC_DECLARE(0x62934e0, internal_62934e0, public_62934e0);
extern "C" NAKED register_t __cdecl internal_62934e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        xor bl, bl
        call dword ptr ds : [edx+0x58]
        test al, al
        je public_629355a
        mov ecx, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test eax, eax
        je public_629355a
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x54]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [edi+8], edx
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0xC
        ret 4
        public_629355a : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62934e0)
    }
}

#undef public_629355a
