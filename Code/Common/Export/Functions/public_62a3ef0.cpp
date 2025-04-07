#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a44c0);
CLANG_FORWARD_PROC_SYMBOL(public_62fcfb0);

#define public_62a3f35 _public_62a3f35
#define public_62a3f3d _public_62a3f3d
#define public_62a3f51 _public_62a3f51

PROC_DECLARE(0x62a3ef0, internal_62a3ef0, public_62a3ef0);
extern "C" NAKED register_t __cdecl internal_62a3ef0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, offset public_63fc294
        call public_62fcfb0
        mov ecx, dword ptr ds : [public_63fc298]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_62a3f35
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_62a3f35
        lea eax, ss:[esp+4]
        jmp public_62a3f3d
        public_62a3f35 : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        public_62a3f3d : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_62a3f51
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push esi
        lea ecx, ds:[eax+0x10]
        call public_62a44c0
        public_62a3f51 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x62a3ef0)
    }
}

#undef public_62a3f35
#undef public_62a3f3d
#undef public_62a3f51
