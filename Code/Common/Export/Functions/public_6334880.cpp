#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334880);

#define public_63348e7 _public_63348e7

PROC_DECLARE(0x6334880, internal_6334880, public_6334880);
extern "C" NAKED register_t __cdecl internal_6334880()
{
    __asm
    {
        sub esp, 0x50
        push ebx
        mov ebx, dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [ebx+8]
        push esi
        mov esi, dword ptr ss : [esp+0x5C]
        lea edx, ds:[ecx+eax*4]
        push esi
        push edx
        call public_6334400
        push esi
        mov dword ptr ss : [esp+0x14], esi
        call dword ptr ds : [public_6399024]
        add esp, 0xC
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_6399064]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ds : [ebx+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        je public_63348e7
        mov eax, dword ptr ds : [ebx+0x1C]
        mov ecx, dword ptr ds : [ebx+0xC]
        push edi
        lea eax, ds:[eax+eax*8]
        lea edi, ds:[ecx+eax*8]
        mov ecx, 0x12
        lea esi, ss:[esp+0x14]
        rep movsd
        pop edi
        public_63348e7 : nop
        mov edx, dword ptr ds : [ebx+0x1C]
        mov eax, dword ptr ds : [ebx+0x10]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [eax+edx*4], ecx
        mov eax, dword ptr ds : [ebx+0x1C]
        inc eax
        pop esi
        mov dword ptr ds : [ebx+0x1C], eax
        pop ebx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6334880)
    }
}

#undef public_63348e7
