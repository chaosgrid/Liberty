#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96e60);

#define public_6d96e74 _public_6d96e74
#define public_6d96e7e _public_6d96e7e
#define public_6d96e82 _public_6d96e82
#define public_6d96e87 _public_6d96e87

PROC_DECLARE(0x6d96e60, internal_6d96e60, public_6d96e60);
extern "C" NAKED register_t __cdecl internal_6d96e60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6d96e87
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6d96e74 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6d96e7e
        mov edx, dword ptr ds : [edx+8]
        jmp public_6d96e82
        public_6d96e7e : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6d96e82 : nop
        cmp edx, ecx
        jne public_6d96e74
        pop esi
        public_6d96e87 : nop
        ret 4
        UNREACHABLE_TRAP(0x6d96e60)
    }
}

#undef public_6d96e74
#undef public_6d96e7e
#undef public_6d96e82
#undef public_6d96e87
