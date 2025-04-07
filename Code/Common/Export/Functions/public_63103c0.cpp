#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63103c0);

#define public_63103f0 _public_63103f0

PROC_DECLARE(0x63103c0, internal_63103c0, public_63103c0);
extern "C" NAKED register_t __cdecl internal_63103c0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x1564]
        test al, al
        je public_63103f0
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+0x1454]
        push eax
        movzx eax, word ptr ds : [edx]
        add eax, dword ptr ds : [ecx+0x1450]
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        public_63103f0 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        add ecx, 0x28
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x63103c0)
    }
}

#undef public_63103f0
