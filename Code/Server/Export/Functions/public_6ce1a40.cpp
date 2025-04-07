#include "Server-PCH.h"


#define public_6ce1a7f _public_6ce1a7f

PROC_DECLARE(0x6ce1a40, internal_6ce1a40, public_6ce1a40);
extern "C" NAKED register_t __cdecl internal_6ce1a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        test edx, edx
        push esi
        jbe public_6ce1a7f
        mov esi, dword ptr ds : [ecx+4]
        lea eax, ds:[edx-1]
        cmp eax, esi
        jae public_6ce1a7f
        mov ecx, dword ptr ds : [ecx]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+ecx+0x348]
        test esi, esi
        je public_6ce1a7f
        imul edx, 0x418
        mov ecx, dword ptr ds : [edx+ecx-0x34]
        mov edx, dword ptr ss : [esp+0xC]
        cmp ecx, dword ptr ds : [edx]
        sete al
        pop esi
        ret 8
        public_6ce1a7f : nop
        xor al, al
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ce1a40)
    }
}

#undef public_6ce1a7f
