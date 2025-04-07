#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa80);

#define public_6ecfa91 _public_6ecfa91
#define public_6ecfa9f _public_6ecfa9f
#define public_6ecfaaa _public_6ecfaaa

PROC_DECLARE(0x6ecfa80, internal_6ecfa80, public_6ecfa80);
extern "C" NAKED register_t __cdecl internal_6ecfa80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6ecfaaa
        push esi
        public_6ecfa91 : nop
        test eax, eax
        je public_6ecfa9f
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        public_6ecfa9f : nop
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_6ecfa91
        pop esi
        public_6ecfaaa : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6ecfa80)
    }
}

#undef public_6ecfa91
#undef public_6ecfa9f
#undef public_6ecfaaa
