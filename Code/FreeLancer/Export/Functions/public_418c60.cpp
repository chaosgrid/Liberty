#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c60);

#define public_418c74 _public_418c74
#define public_418c7e _public_418c7e
#define public_418c82 _public_418c82
#define public_418c87 _public_418c87

PROC_DECLARE(0x418c60, internal_418c60, public_418c60);
extern "C" NAKED register_t __cdecl internal_418c60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_418c87
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_418c74 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_418c7e
        mov eax, dword ptr ds : [eax+8]
        jmp public_418c82
        public_418c7e : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_418c82 : nop
        cmp eax, ecx
        jne public_418c74
        pop esi
        public_418c87 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x418c60)
    }
}

#undef public_418c74
#undef public_418c7e
#undef public_418c82
#undef public_418c87
