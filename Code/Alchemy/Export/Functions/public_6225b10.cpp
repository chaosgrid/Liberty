#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225b10);

#define public_6225b2b _public_6225b2b
#define public_6225b2d _public_6225b2d
#define public_6225b36 _public_6225b36
#define public_6225b39 _public_6225b39

PROC_DECLARE(0x6225b10, internal_6225b10, public_6225b10);
extern "C" NAKED register_t __cdecl internal_6225b10()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        test eax, eax
        je public_6225b2b
        mov dword ptr ds : [eax], edx
        jmp public_6225b2d
        public_6225b2b : nop
        mov dword ptr ds : [ecx], edx
        public_6225b2d : nop
        test edx, edx
        je public_6225b36
        mov dword ptr ds : [edx+4], eax
        jmp public_6225b39
        public_6225b36 : nop
        mov dword ptr ds : [ecx+4], eax
        public_6225b39 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6225b10)
    }
}

#undef public_6225b2b
#undef public_6225b2d
#undef public_6225b36
#undef public_6225b39
