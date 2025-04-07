#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220ce0);

#define public_6220cfb _public_6220cfb
#define public_6220cfd _public_6220cfd
#define public_6220d06 _public_6220d06
#define public_6220d09 _public_6220d09

PROC_DECLARE(0x6220ce0, internal_6220ce0, public_6220ce0);
extern "C" NAKED register_t __cdecl internal_6220ce0()
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
        je public_6220cfb
        mov dword ptr ds : [eax], edx
        jmp public_6220cfd
        public_6220cfb : nop
        mov dword ptr ds : [ecx], edx
        public_6220cfd : nop
        test edx, edx
        je public_6220d06
        mov dword ptr ds : [edx+4], eax
        jmp public_6220d09
        public_6220d06 : nop
        mov dword ptr ds : [ecx+4], eax
        public_6220d09 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+4], 0
        mov dword ptr ds : [esi], 0
        pop esi
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6220ce0)
    }
}

#undef public_6220cfb
#undef public_6220cfd
#undef public_6220d06
#undef public_6220d09
