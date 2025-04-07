#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71010);

#define public_6f71015 _public_6f71015

PROC_DECLARE(0x6f71010, internal_6f71010, public_6f71010);
extern "C" NAKED register_t __cdecl internal_6f71010()
{
    __asm
    {
        sub esp, 8
        xor eax, eax
        public_6f71015 : nop
        mov ecx, eax
        or ch, 0xFC
        shl ecx, 0xE
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp]
        fsqrt 
        fdivr qword ptr ds : [public_6f73078]
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        add edx, 0x2000
        shr edx, 0xF
        mov byte ptr ds : [eax+public_6f74030], dl
        inc eax
        cmp eax, 0x400
        jl public_6f71015
        mov byte ptr ds : [public_6f74230], 0xFF
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f71010)
    }
}

#undef public_6f71015
