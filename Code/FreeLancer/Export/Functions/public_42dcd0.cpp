#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42da00);
CLANG_FORWARD_PROC_SYMBOL(public_42dcd0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd560);

#define public_42dd10 _public_42dd10

PROC_DECLARE(0x42dcd0, internal_42dcd0, public_42dcd0);
extern "C" NAKED register_t __cdecl internal_42dcd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call public_4fd560
        add esp, 4
        test eax, eax
        je public_42dd10
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jle public_42dd10
        cmp ecx, 7
        jge public_42dd10
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax+0x10]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push edx
        lea ecx, ds:[ecx+ecx*2]
        push eax
        lea ecx, ds : [ecx*4+public_667d90]
        call public_42da00
        ret 
        public_42dd10 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], 0x3F800000
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x42dcd0)
    }
}

#undef public_42dd10
