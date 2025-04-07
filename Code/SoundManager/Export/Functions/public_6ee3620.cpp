#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee365f);

#define public_6ee3640 _public_6ee3640
#define public_6ee3645 _public_6ee3645

PROC_DECLARE(0x6ee3620, internal_6ee3620, public_6ee3620);
extern "C" NAKED register_t __cdecl internal_6ee3620()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jl public_6ee365f
        cmp ecx, dword ptr ds : [public_6eeaf08]
        jge public_6ee365f
        test ecx, ecx
        mov eax, dword ptr ds : [public_6eeaf04]
        mov eax, dword ptr ds : [eax]
        je public_6ee3645
        nop 
        lea esp, ss:[esp]
        public_6ee3640 : nop
        dec ecx
        mov eax, dword ptr ds : [eax]
        jne public_6ee3640
        public_6ee3645 : nop
        mov edx, dword ptr ds : [eax+0x28]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ee3620)
    }
}

#undef public_6ee3640
#undef public_6ee3645
