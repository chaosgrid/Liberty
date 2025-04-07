#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d080);
CLANG_FORWARD_PROC_SYMBOL(public_6245a20);

#define public_621d0a5 _public_621d0a5
#define public_621d0c6 _public_621d0c6
#define public_621d0e7 _public_621d0e7
#define public_621d108 _public_621d108
#define public_621d129 _public_621d129

PROC_DECLARE(0x621d080, internal_621d080, public_621d080);
extern "C" NAKED register_t __cdecl internal_621d080()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xFD22A11C
        jne public_621d0a5
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
        public_621d0a5 : nop
        cmp eax, 0xEFB0F8CF
        jne public_621d0c6
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
        public_621d0c6 : nop
        cmp eax, 0x14B74EB2
        jne public_621d0e7
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
        public_621d0e7 : nop
        cmp eax, 0xE282006B
        jne public_621d108
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
        public_621d108 : nop
        cmp eax, 0x8C7217F
        jne public_621d129
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
        public_621d129 : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_6245a20
        UNREACHABLE_TRAP(0x621d080)
    }
}

#undef public_621d0a5
#undef public_621d0c6
#undef public_621d0e7
#undef public_621d108
#undef public_621d129
