#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_6204cd5 _public_6204cd5
#define public_6204cf6 _public_6204cf6
#define public_6204d1a _public_6204d1a
#define public_6204d3b _public_6204d3b
#define public_6204d5f _public_6204d5f

PROC_DECLARE(0x6204cb0, internal_6204cb0, public_6204cb0);
extern "C" NAKED register_t __cdecl internal_6204cb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x4FC9016
        jne public_6204cd5
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204cd5 : nop
        cmp eax, 0xFBA203B8
        jne public_6204cf6
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x74]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204cf6 : nop
        cmp eax, 0xE48DDAE2
        jne public_6204d1a
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x84]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204d1a : nop
        cmp eax, 0x1266735F
        jne public_6204d3b
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x78]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204d3b : nop
        cmp eax, 0x15A6F47
        jne public_6204d5f
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x80]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204d5f : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x6204cb0)
    }
}

#undef public_6204cd5
#undef public_6204cf6
#undef public_6204d1a
#undef public_6204d3b
#undef public_6204d5f
