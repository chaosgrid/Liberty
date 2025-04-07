#include "FLServer-PCH.h"


#define public_40330f _public_40330f

PROC_DECLARE(0x4032d0, internal_4032d0, public_4032d0);
extern "C" NAKED register_t __cdecl internal_4032d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        test edx, edx
        push esi
        jbe public_40330f
        mov esi, dword ptr ds : [ecx+4]
        lea eax, ds:[edx-1]
        cmp eax, esi
        jae public_40330f
        mov ecx, dword ptr ds : [ecx]
        imul eax, 0x3F8
        mov esi, dword ptr ds : [eax+ecx+0x334]
        test esi, esi
        je public_40330f
        imul edx, 0x3F8
        mov ecx, dword ptr ds : [edx+ecx-0x2C]
        mov edx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [edx]
        sete al
        pop esi
        ret 8
        public_40330f : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4032d0)
    }
}

#undef public_40330f
