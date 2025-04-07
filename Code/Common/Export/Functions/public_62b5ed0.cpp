#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284370);
CLANG_FORWARD_PROC_SYMBOL(public_62b5ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62b5efa _public_62b5efa
#define public_62b5f33 _public_62b5f33

PROC_DECLARE(0x62b5ed0, internal_62b5ed0, public_62b5ed0);
extern "C" NAKED register_t __cdecl internal_62b5ed0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_62b5efa
        lea eax, ds:[esi+0xD0]
        push eax
        push 0
        push esi
        call public_6284370
        fstp dword ptr ds : [esi+0xDC]
        add esp, 0xC
        pop esi
        add esp, 0xC
        ret 
        public_62b5efa : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push edi
        lea edi, ds:[esi+0xD0]
        push edi
        lea ecx, ds:[esi+0xDC]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        push 0
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [public_63fc470]
        test eax, eax
        jne public_62b5f33
        call public_6391cf0
        mov dword ptr ds : [public_63fc470], eax
        public_62b5f33 : nop
        mov edx, dword ptr ds : [eax]
        push edi
        add esi, 8
        push esi
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62b5ed0)
    }
}

#undef public_62b5efa
#undef public_62b5f33
