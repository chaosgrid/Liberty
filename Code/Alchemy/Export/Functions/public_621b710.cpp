#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245a20);

#define public_621b735 _public_621b735
#define public_621b756 _public_621b756
#define public_621b777 _public_621b777
#define public_621b798 _public_621b798

PROC_DECLARE(0x621b710, internal_621b710, public_621b710);
extern "C" NAKED register_t __cdecl internal_621b710()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1C73D16B
        jne public_621b735
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
        public_621b735 : nop
        cmp eax, 0xF636F07F
        jne public_621b756
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edx+0x70]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_621b756 : nop
        cmp eax, 0x100E7F55
        jne public_621b777
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
        public_621b777 : nop
        cmp eax, 0xFA4B5E41
        jne public_621b798
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
        public_621b798 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6245a20
        UNREACHABLE_TRAP(0x621b710)
    }
}

#undef public_621b735
#undef public_621b756
#undef public_621b777
#undef public_621b798
