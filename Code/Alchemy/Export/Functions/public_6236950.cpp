#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236950);

#define public_6236965 _public_6236965
#define public_6236983 _public_6236983
#define public_623698e _public_623698e
#define public_62369a1 _public_62369a1

PROC_DECLARE(0x6236950, internal_6236950, public_6236950);
extern "C" NAKED register_t __cdecl internal_6236950()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        cmp ecx, 0xFF28F620
        jne public_6236965
        mov ecx, dword ptr ds : [eax+0x58]
        jmp public_623698e
        public_6236965 : nop
        cmp ecx, 0x64B3B9
        jne public_6236983
        mov edx, dword ptr ds : [eax+0x50]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6236983 : nop
        cmp ecx, 0xF3CF5EA5
        jne public_62369a1
        mov ecx, dword ptr ds : [eax+0x54]
        public_623698e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_62369a1 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6236950)
    }
}

#undef public_6236965
#undef public_6236983
#undef public_623698e
#undef public_62369a1
