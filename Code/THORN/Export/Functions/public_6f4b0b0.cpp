#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b110);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c340);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c8b0);

#define public_6f4b0c0 _public_6f4b0c0

PROC_DECLARE(0x6f4b0b0, internal_6f4b0b0, public_6f4b0b0);
extern "C" NAKED register_t __cdecl internal_6f4b0b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jne public_6f4b0c0
        mov eax, 1
        pop esi
        ret 
        public_6f4b0c0 : nop
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        sub ecx, edx
        mov edx, dword ptr ds : [eax+0xC]
        sar ecx, 4
        sub ecx, edx
        push ecx
        call public_6f4c340
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        shl esi, 4
        lea edx, ds:[esi+eax-0x10]
        shl ecx, 4
        push edx
        add ecx, eax
        push ecx
        call public_6f4b110
        add esp, 0xC
        call public_6f4c8b0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b0b0)
    }
}

#undef public_6f4b0c0
