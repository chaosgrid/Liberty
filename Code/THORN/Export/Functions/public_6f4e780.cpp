#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f8a0);

#define public_6f4e793 _public_6f4e793
#define public_6f4e799 _public_6f4e799
#define public_6f4e79f _public_6f4e79f

PROC_DECLARE(0x6f4e780, internal_6f4e780, public_6f4e780);
extern "C" NAKED register_t __cdecl internal_6f4e780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        xor edx, edx
        test eax, eax
        jle public_6f4e79f
        add ecx, 0x10
        public_6f4e793 : nop
        cmp dword ptr ds : [ecx], 0xFFFFFFFA
        je public_6f4e799
        inc edx
        public_6f4e799 : nop
        add ecx, 0x20
        dec eax
        jne public_6f4e793
        public_6f4e79f : nop
        lea eax, ds:[edx+edx+2]
        push eax
        call public_6f4f8a0
        add esp, 4
        ret 
        UNREACHABLE_TRAP(0x6f4e780)
    }
}

#undef public_6f4e793
#undef public_6f4e799
#undef public_6f4e79f
