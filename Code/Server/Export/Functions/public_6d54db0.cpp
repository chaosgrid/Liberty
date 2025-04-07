#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5e480);

#define public_6d54e0b _public_6d54e0b
#define public_6d54e64 _public_6d54e64

PROC_DECLARE(0x6d54db0, internal_6d54db0, public_6d54db0);
extern "C" NAKED register_t __cdecl internal_6d54db0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        test eax, eax
        mov esi, 0xFFFFFFFE
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        jbe public_6d54e0b
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, edx
        jae public_6d54e0b
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push ebp
        mov ebp, dword ptr ds : [ecx+edx+0x348]
        test ebp, ebp
        pop ebp
        je public_6d54e0b
        imul eax, 0x418
        mov eax, dword ptr ds : [eax+edx-0x1B4]
        mov dword ptr ss : [esp+8], eax
        public_6d54e0b : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        call public_6d5e480
        fld dword ptr ds : [public_6d65188]
        mov eax, dword ptr ds : [edi]
        add esp, 8
        test eax, eax
        jbe public_6d54e64
        mov edx, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, edx
        jae public_6d54e64
        mov edx, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        mov edi, dword ptr ds : [ecx+edx+0x348]
        test edi, edi
        je public_6d54e64
        imul eax, 0x418
        fstp st(0)
        lea ecx, ds:[eax+edx-0x1A0]
        call dword ptr ds : [public_6d643f8]
        xor esi, esi
        public_6d54e64 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        pop edi
        mov eax, esi
        fsub st, st(1)
        pop esi
        fstp dword ptr ds : [ecx]
        fstp st(0)
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d54db0)
    }
}

#undef public_6d54e0b
#undef public_6d54e64
