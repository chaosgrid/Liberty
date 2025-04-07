#include "Alchemy-PCH.h"


#define public_6241b10 _public_6241b10
#define public_6241b3d _public_6241b3d

PROC_DECLARE(0x6241ae0, internal_6241ae0, public_6241ae0);
extern "C" NAKED register_t __cdecl internal_6241ae0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx]
        push edi
        push ebx
        call dword ptr ds : [eax+0xC]
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ss : [esp+0x24]
        push esi
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [ecx+0x34]
        push eax
        push ebx
        call dword ptr ds : [edi+0x38]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x3C]
        mov ebp, eax
        xor edi, edi
        test ebp, ebp
        jle public_6241b3d
        public_6241b10 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push ecx
        push edi
        push esi
        call dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x10]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [ebx]
        lea edx, ss:[esp+0x10]
        mov eax, dword ptr ss : [esp+0x20]
        push edx
        push eax
        push ebx
        call dword ptr ds : [ecx+0x14]
        inc edi
        cmp edi, ebp
        jl public_6241b10
        public_6241b3d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6241ae0)
    }
}

#undef public_6241b10
#undef public_6241b3d
