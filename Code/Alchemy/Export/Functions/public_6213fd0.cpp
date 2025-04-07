#include "Alchemy-PCH.h"


#define public_6213fe4 _public_6213fe4
#define public_6213ff2 _public_6213ff2
#define public_6214005 _public_6214005

PROC_DECLARE(0x6213fd0, internal_6213fd0, public_6213fd0);
extern "C" NAKED register_t __cdecl internal_6213fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x10423CEB
        jne public_6213fe4
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x4C]
        jmp public_6213ff2
        public_6213fe4 : nop
        cmp eax, 0xE5E3524C
        jne public_6214005
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx+0x50]
        public_6213ff2 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6214005 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6213fd0)
    }
}

#undef public_6213fe4
#undef public_6213ff2
#undef public_6214005
