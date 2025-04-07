#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632c5e0);

#define public_632c60b _public_632c60b
#define public_632c617 _public_632c617
#define public_632c626 _public_632c626

PROC_DECLARE(0x632c5e0, internal_632c5e0, public_632c5e0);
extern "C" NAKED register_t __cdecl internal_632c5e0()
{
    __asm
    {
        sub esp, 0x10
        add ecx, 0x14
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ds : [ecx+8]
        add eax, 0xFFFFFFF8
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 3
        test ecx, ecx
        jl public_632c60b
        mov edx, ecx
        shr edx, 9
        jmp public_632c617
        public_632c60b : nop
        mov edx, 0x1FF
        sub edx, ecx
        shr edx, 9
        neg edx
        public_632c617 : nop
        test edx, edx
        je public_632c626
        mov eax, dword ptr ds : [esi+edx*4]
        shl edx, 9
        sub ecx, edx
        lea eax, ds:[eax+ecx*8]
        public_632c626 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x632c5e0)
    }
}

#undef public_632c60b
#undef public_632c617
#undef public_632c626
