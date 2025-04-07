#include "Alchemy-PCH.h"


#define public_623d484 _public_623d484
#define public_623d492 _public_623d492
#define public_623d4a5 _public_623d4a5

PROC_DECLARE(0x623d470, internal_623d470, public_623d470);
extern "C" NAKED register_t __cdecl internal_623d470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1B970B9A
        jne public_623d484
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x4C]
        jmp public_623d492
        public_623d484 : nop
        cmp eax, 0x1CEAC6D1
        jne public_623d4a5
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x50]
        public_623d492 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_623d4a5 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623d470)
    }
}

#undef public_623d484
#undef public_623d492
#undef public_623d4a5
