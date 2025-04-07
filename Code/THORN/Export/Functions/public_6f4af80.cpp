#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af80);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4d4d0);

#define public_6f4afb5 _public_6f4afb5

PROC_DECLARE(0x6f4af80, internal_6f4af80, public_6f4af80);
extern "C" NAKED register_t __cdecl internal_6f4af80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        push eax
        call public_6f4d4d0
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+8]
        add esp, 0xC
        cmp ecx, edx
        jb public_6f4afb5
        push 1
        call public_6f4c260
        mov eax, dword ptr ds : [public_6f61e28]
        add esp, 4
        public_6f4afb5 : nop
        add dword ptr ds : [eax], 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4af80)
    }
}

#undef public_6f4afb5
