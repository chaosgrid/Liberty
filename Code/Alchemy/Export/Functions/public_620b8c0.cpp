#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b8c0);

#define public_620b8db _public_620b8db
#define public_620b8dd _public_620b8dd
#define public_620b8e6 _public_620b8e6
#define public_620b8e9 _public_620b8e9

PROC_DECLARE(0x620b8c0, internal_620b8c0, public_620b8c0);
extern "C" NAKED register_t __cdecl internal_620b8c0()
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
        je public_620b8db
        mov dword ptr ds : [eax], edx
        jmp public_620b8dd
        public_620b8db : nop
        mov dword ptr ds : [ecx], edx
        public_620b8dd : nop
        test edx, edx
        je public_620b8e6
        mov dword ptr ds : [edx+4], eax
        jmp public_620b8e9
        public_620b8e6 : nop
        mov dword ptr ds : [ecx+4], eax
        public_620b8e9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x620b8c0)
    }
}

#undef public_620b8db
#undef public_620b8dd
#undef public_620b8e6
#undef public_620b8e9
