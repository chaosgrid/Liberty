#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621c030);
CLANG_FORWARD_PROC_SYMBOL(public_6245a20);

#define public_621c059 _public_621c059
#define public_621c077 _public_621c077
#define public_621c095 _public_621c095
#define public_621c0b3 _public_621c0b3

PROC_DECLARE(0x621c030, internal_621c030, public_621c030);
extern "C" NAKED register_t __cdecl internal_621c030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        add eax, 4
        cmp ecx, 0x1C73D16B
        jne public_621c059
        mov ecx, dword ptr ds : [eax+0x6C]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_621c059 : nop
        cmp ecx, 0xF636F07F
        jne public_621c077
        mov edx, dword ptr ds : [eax+0x70]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_621c077 : nop
        cmp ecx, 0x100E7F55
        jne public_621c095
        mov ecx, dword ptr ds : [eax+0x74]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        mov eax, ecx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_621c095 : nop
        cmp ecx, 0xFA4B5E41
        jne public_621c0b3
        mov edx, dword ptr ds : [eax+0x78]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edx
        mov eax, edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        public_621c0b3 : nop
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_6245a20
        UNREACHABLE_TRAP(0x621c030)
    }
}

#undef public_621c059
#undef public_621c077
#undef public_621c095
#undef public_621c0b3
