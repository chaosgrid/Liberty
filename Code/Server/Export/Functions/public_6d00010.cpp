#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00010);
CLANG_FORWARD_PROC_SYMBOL(public_6d08890);
CLANG_FORWARD_PROC_SYMBOL(public_6d59ea0);

#define public_6d0006f _public_6d0006f
#define public_6d00082 _public_6d00082

PROC_DECLARE(0x6d00010, internal_6d00010, public_6d00010);
extern "C" NAKED register_t __cdecl internal_6d00010()
{
    __asm
    {
        sub esp, 8
        mov ecx, dword ptr ds : [public_6d90260]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, esi
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+ecx-0x38]
        test eax, 0x3FFFFFFF
        mov dword ptr ss : [esp+0x10], eax
        je public_6d00082
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, offset public_6d8da2c
        call public_6d59ea0
        mov ecx, dword ptr ds : [public_6d8da30]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_6d0006f
        mov edx, dword ptr ss : [esp+0x10]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6d0006f
        lea eax, ss:[esp+4]
        mov eax, dword ptr ds : [eax]
        push esi
        lea ecx, ds:[eax+0x10]
        call public_6d08890
        pop esi
        add esp, 8
        ret 
        public_6d0006f : nop
        mov dword ptr ss : [esp+8], ecx
        lea eax, ss:[esp+8]
        mov eax, dword ptr ds : [eax]
        push esi
        lea ecx, ds:[eax+0x10]
        call public_6d08890
        public_6d00082 : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d00010)
    }
}

#undef public_6d0006f
#undef public_6d00082
