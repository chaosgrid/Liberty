#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215930);

#define public_6215950 _public_6215950
#define public_621596e _public_621596e
#define public_621598d _public_621598d
#define public_62159ac _public_62159ac
#define public_62159cb _public_62159cb
#define public_62159ea _public_62159ea

PROC_DECLARE(0x6215930, internal_6215930, public_6215930);
extern "C" NAKED register_t __cdecl internal_6215930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0xF863872E
        jne public_6215950
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov cl, byte ptr ds : [eax+0x5C]
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_6215950 : nop
        cmp eax, 0xF87B5FD5
        jne public_621596e
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 1
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_621596e : nop
        cmp eax, 0xE91467F1
        jne public_621598d
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 2
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_621598d : nop
        cmp eax, 0xE2F60EEB
        jne public_62159ac
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 3
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_62159ac : nop
        cmp eax, 0xF3D52EE4
        jne public_62159cb
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xC
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_62159cb : nop
        cmp eax, 0xE8DC7F5E
        jne public_62159ea
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x5C]
        shr ecx, 0xD
        and cl, 1
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 0xC
        public_62159ea : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6215930)
    }
}

#undef public_6215950
#undef public_621596e
#undef public_621598d
#undef public_62159ac
#undef public_62159cb
#undef public_62159ea
