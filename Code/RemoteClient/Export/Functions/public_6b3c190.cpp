#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3c190);

#define public_6b3c1a4 _public_6b3c1a4
#define public_6b3c1ae _public_6b3c1ae
#define public_6b3c1b2 _public_6b3c1b2
#define public_6b3c1b7 _public_6b3c1b7

PROC_DECLARE(0x6b3c190, internal_6b3c190, public_6b3c190);
extern "C" NAKED register_t __cdecl internal_6b3c190()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp edx, ecx
        je public_6b3c1b7
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov esi, dword ptr ds : [esi]
        public_6b3c1a4 : nop
        cmp dword ptr ds : [edx+0xC], esi
        jae public_6b3c1ae
        mov edx, dword ptr ds : [edx+8]
        jmp public_6b3c1b2
        public_6b3c1ae : nop
        mov eax, edx
        mov edx, dword ptr ds : [edx]
        public_6b3c1b2 : nop
        cmp edx, ecx
        jne public_6b3c1a4
        pop esi
        public_6b3c1b7 : nop
        ret 4
        UNREACHABLE_TRAP(0x6b3c190)
    }
}

#undef public_6b3c1a4
#undef public_6b3c1ae
#undef public_6b3c1b2
#undef public_6b3c1b7
