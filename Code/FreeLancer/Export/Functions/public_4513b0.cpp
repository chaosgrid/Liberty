#include "FreeLancer-PCH.h"


#define public_4513d0 _public_4513d0
#define public_4513e3 _public_4513e3
#define public_4513e5 _public_4513e5
#define public_451447 _public_451447

PROC_DECLARE(0x4513b0, internal_4513b0, public_4513b0);
extern "C" NAKED register_t __cdecl internal_4513b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+0x74], 0xFFFFFFFF
        push edi
        je public_451447
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x14]
        push ebx
        or ebx, 0xFFFFFFFF
        xor eax, eax
        lea ecx, ds:[ecx]
        public_4513d0 : nop
        mov dl, byte ptr ds : [esi+eax+0x160]
        test dl, dl
        je public_4513e3
        inc eax
        cmp eax, 0x10
        jl public_4513d0
        jmp public_4513e5
        public_4513e3 : nop
        mov ebx, eax
        public_4513e5 : nop
        mov dword ptr ds : [esi+ebx*4+0x120], ecx
        mov byte ptr ds : [ebx+esi+0x160], 1
        mov edx, dword ptr ds : [edi+0x3C]
        mov eax, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        mov edx, dword ptr ds : [esi+0x70]
        push edx
        mov edx, dword ptr ds : [esi+0x74]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+ebx*4+0xE0], eax
        pop ebx
        je public_451447
        mov esi, dword ptr ds : [edi+0x4C]
        mov ecx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push esi
        mov esi, dword ptr ds : [edi+0x38]
        push esi
        mov esi, dword ptr ds : [edi+0x30]
        push esi
        mov esi, dword ptr ds : [edi+0x34]
        push esi
        mov esi, dword ptr ds : [edi+0x2C]
        push esi
        mov esi, dword ptr ds : [edi+0xC]
        push esi
        push eax
        push ecx
        call dword ptr ds : [edx+0x2C]
        public_451447 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4513b0)
    }
}

#undef public_4513d0
#undef public_4513e3
#undef public_4513e5
#undef public_451447
