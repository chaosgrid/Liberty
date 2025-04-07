#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_620f3d5 _public_620f3d5
#define public_620f3f6 _public_620f3f6
#define public_620f417 _public_620f417

PROC_DECLARE(0x620f3b0, internal_620f3b0, public_620f3b0);
extern "C" NAKED register_t __cdecl internal_620f3b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x4FC9016
        jne public_620f3d5
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
        public_620f3d5 : nop
        cmp eax, 0xF7C2EBA9
        jne public_620f3f6
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
        public_620f3f6 : nop
        cmp eax, 0x15A6F47
        jne public_620f417
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
        public_620f417 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x620f3b0)
    }
}

#undef public_620f3d5
#undef public_620f3f6
#undef public_620f417
