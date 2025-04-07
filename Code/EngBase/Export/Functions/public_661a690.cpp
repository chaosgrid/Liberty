#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a690);

#define public_661a6a4 _public_661a6a4
#define public_661a6af _public_661a6af
#define public_661a6b2 _public_661a6b2
#define public_661a6b7 _public_661a6b7

PROC_DECLARE(0x661a690, internal_661a690, public_661a690);
extern "C" NAKED register_t __cdecl internal_661a690()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ecx
        je public_661a6b7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_661a6a4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_661a6af
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_661a6b2
        public_661a6af : nop
        mov edx, dword ptr ds : [edx+8]
        public_661a6b2 : nop
        cmp edx, ecx
        jne public_661a6a4
        pop esi
        public_661a6b7 : nop
        ret 4
        UNREACHABLE_TRAP(0x661a690)
    }
}

#undef public_661a6a4
#undef public_661a6af
#undef public_661a6b2
#undef public_661a6b7
