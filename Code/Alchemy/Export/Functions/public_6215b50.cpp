#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215b50);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_6215b75 _public_6215b75
#define public_6215b96 _public_6215b96
#define public_6215bb7 _public_6215bb7
#define public_6215bd8 _public_6215bd8
#define public_6215bfc _public_6215bfc

PROC_DECLARE(0x6215b50, internal_6215b50, public_6215b50);
extern "C" NAKED register_t __cdecl internal_6215b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x4FC9016
        jne public_6215b75
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
        public_6215b75 : nop
        cmp eax, 0xF7C2EBA9
        jne public_6215b96
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
        public_6215b96 : nop
        cmp eax, 0x5DB630E
        jne public_6215bb7
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
        public_6215bb7 : nop
        cmp eax, 0x15A6F47
        jne public_6215bd8
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x7C]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6215bd8 : nop
        cmp eax, 0xE0E97650
        jne public_6215bfc
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
        public_6215bfc : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x6215b50)
    }
}

#undef public_6215b75
#undef public_6215b96
#undef public_6215bb7
#undef public_6215bd8
#undef public_6215bfc
