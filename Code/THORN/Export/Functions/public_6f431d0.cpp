#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f431d0);

#define public_6f431f6 _public_6f431f6
#define public_6f43205 _public_6f43205
#define public_6f4321f _public_6f4321f

PROC_DECLARE(0x6f431d0, internal_6f431d0, public_6f431d0);
extern "C" NAKED register_t __cdecl internal_6f431d0()
{
    __asm
    {
        mov eax, ecx
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edx, ds:[eax+0x11C]
        mov ecx, 0xF
        mov edi, edx
        rep movsd
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f431f6
        mov esi, dword ptr ds : [eax+0x130]
        mov dword ptr ds : [ecx], esi
        public_6f431f6 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        je public_6f43205
        mov esi, dword ptr ds : [eax+0x134]
        mov dword ptr ds : [ecx], esi
        public_6f43205 : nop
        mov eax, dword ptr ds : [eax+0x104]
        test eax, eax
        pop edi
        pop esi
        je public_6f4321f
        test byte ptr ss : [esp+8], 1
        je public_6f4321f
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        public_6f4321f : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f431d0)
    }
}

#undef public_6f431f6
#undef public_6f43205
#undef public_6f4321f
