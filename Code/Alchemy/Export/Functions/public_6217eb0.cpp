#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217eb0);

#define public_6217ecb _public_6217ecb
#define public_6217ecd _public_6217ecd
#define public_6217ed6 _public_6217ed6
#define public_6217ed9 _public_6217ed9

PROC_DECLARE(0x6217eb0, internal_6217eb0, public_6217eb0);
extern "C" NAKED register_t __cdecl internal_6217eb0()
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
        je public_6217ecb
        mov dword ptr ds : [eax], edx
        jmp public_6217ecd
        public_6217ecb : nop
        mov dword ptr ds : [ecx], edx
        public_6217ecd : nop
        test edx, edx
        je public_6217ed6
        mov dword ptr ds : [edx+4], eax
        jmp public_6217ed9
        public_6217ed6 : nop
        mov dword ptr ds : [ecx+4], eax
        public_6217ed9 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6217eb0)
    }
}

#undef public_6217ecb
#undef public_6217ecd
#undef public_6217ed6
#undef public_6217ed9
