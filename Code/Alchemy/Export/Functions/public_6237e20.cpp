#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6237e20);
CLANG_FORWARD_PROC_SYMBOL(public_6244330);

#define public_6237e45 _public_6237e45
#define public_6237e66 _public_6237e66
#define public_6237e87 _public_6237e87
#define public_6237ea8 _public_6237ea8
#define public_6237ecc _public_6237ecc

PROC_DECLARE(0x6237e20, internal_6237e20, public_6237e20);
extern "C" NAKED register_t __cdecl internal_6237e20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x4FC9016
        jne public_6237e45
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
        public_6237e45 : nop
        cmp eax, 0xFBA203B8
        jne public_6237e66
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
        public_6237e66 : nop
        cmp eax, 0xE48DDAE2
        jne public_6237e87
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
        public_6237e87 : nop
        cmp eax, 0x1266735F
        jne public_6237ea8
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
        public_6237ea8 : nop
        cmp eax, 0x15A6F47
        jne public_6237ecc
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
        public_6237ecc : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6244330
        UNREACHABLE_TRAP(0x6237e20)
    }
}

#undef public_6237e45
#undef public_6237e66
#undef public_6237e87
#undef public_6237ea8
#undef public_6237ecc
