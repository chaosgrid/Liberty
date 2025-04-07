#include "Common-PCH.h"


#define public_627bd4e _public_627bd4e

PROC_DECLARE(0x627bd00, internal_627bd00, public_627bd00);
extern "C" NAKED register_t __cdecl internal_627bd00()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        xor ebx, ebx
        push esi
        mov dword ptr ss : [esp+0x10], ebx
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push eax
        push esi
        call dword ptr ds : [edx+0x84]
        test eax, eax
        jne public_627bd4e
        mov eax, dword ptr ss : [esp+8]
        cmp eax, ebx
        je public_627bd4e
        push eax
        call dword ptr ds : [public_63992ec]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop esi
        mov dword ptr ds : [edx], eax
        mov al, 1
        pop ebx
        pop ecx
        ret 
        public_627bd4e : nop
        pop esi
        mov al, bl
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x627bd00)
    }
}

#undef public_627bd4e
