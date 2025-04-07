#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d2d0);
CLANG_FORWARD_PROC_SYMBOL(public_634d3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_634d45f _public_634d45f
#define public_634d468 _public_634d468

PROC_DECLARE(0x634d3e0, internal_634d3e0, public_634d3e0);
extern "C" NAKED register_t __cdecl internal_634d3e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        lea eax, ds:[ebx+ebx*4]
        lea eax, ds:[eax+eax*4]
        lea esi, ds:[ebx+eax*4]
        lea eax, ds:[ebx+ebx*4]
        lea eax, ds:[eax+eax*4]
        push edi
        mov edi, ecx
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ds : [edi]
        shr esi, 8
        lea edx, ds:[ebx+ecx*8]
        add esi, edx
        dec eax
        push 0x10
        and esi, eax
        call public_6391d9c
        mov edx, dword ptr ds : [public_63edcc8]
        mov ecx, eax
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [public_63edcc8]
        add esp, 4
        inc eax
        mov dword ptr ds : [public_63edcc8], eax
        mov dword ptr ds : [ecx+0xC], ebx
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [eax+esi*4]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+esi*4], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ebx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+8]
        inc ebx
        mov dword ptr ds : [edi+0x10], ebx
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_634d45f
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [eax+4]
        fnstsw ax
        test ah, 1
        je public_634d468
        public_634d45f : nop
        push esi
        push ecx
        mov ecx, edi
        call public_634d2d0
        public_634d468 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x634d3e0)
    }
}

#undef public_634d45f
#undef public_634d468
