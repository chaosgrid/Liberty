#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bd10);

#define public_41bd24 _public_41bd24
#define public_41bd2e _public_41bd2e
#define public_41bd32 _public_41bd32
#define public_41bd37 _public_41bd37

PROC_DECLARE(0x41bd10, internal_41bd10, public_41bd10);
extern "C" NAKED register_t __cdecl internal_41bd10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_41bd37
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_41bd24 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_41bd2e
        mov eax, dword ptr ds : [eax+8]
        jmp public_41bd32
        public_41bd2e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_41bd32 : nop
        cmp eax, ecx
        jne public_41bd24
        pop esi
        public_41bd37 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x41bd10)
    }
}

#undef public_41bd24
#undef public_41bd2e
#undef public_41bd32
#undef public_41bd37
