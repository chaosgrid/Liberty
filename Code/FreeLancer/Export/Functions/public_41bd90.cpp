#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd90);

#define public_41bda4 _public_41bda4
#define public_41bdaf _public_41bdaf
#define public_41bdb2 _public_41bdb2
#define public_41bdb7 _public_41bdb7

PROC_DECLARE(0x41bd90, internal_41bd90, public_41bd90);
extern "C" NAKED register_t __cdecl internal_41bd90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_41bdb7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_41bda4 : nop
        cmp esi, dword ptr ds : [edx+0xC]
        jae public_41bdaf
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        jmp public_41bdb2
        public_41bdaf : nop
        mov edx, dword ptr ds : [edx+8]
        public_41bdb2 : nop
        cmp edx, ecx
        jne public_41bda4
        pop esi
        public_41bdb7 : nop
        ret 4
        UNREACHABLE_TRAP(0x41bd90)
    }
}

#undef public_41bda4
#undef public_41bdaf
#undef public_41bdb2
#undef public_41bdb7
