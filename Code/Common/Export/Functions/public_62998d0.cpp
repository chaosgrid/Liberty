#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62998d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629993c _public_629993c
#define public_629996b _public_629996b

PROC_DECLARE(0x62998d0, internal_62998d0, public_62998d0);
extern "C" NAKED register_t __cdecl internal_62998d0()
{
    __asm
    {
        sub esp, 0x48
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [eax+8]
        test al, al
        jne public_629996b
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [public_6399040]
        imul ecx, 0x34
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx+ebp+0x54]
        push ebx
        push esi
        lea ebx, ds:[ecx+ebp+0x54]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fc194]
        test eax, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x28]
        rep movsd
        jne public_629993c
        call public_6391cf0
        mov dword ptr ds : [public_63fc194], eax
        public_629993c : nop
        mov ecx, dword ptr ds : [eax]
        add ebx, 0x28
        push ebx
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], edx
        pop ebx
        public_629996b : nop
        mov eax, dword ptr ss : [esp+0x5C]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x50]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp+0xC]
        fsub dword ptr ss : [esp+0xC]
        pop ebp
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x94]
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], edx
        fld st(2)
        mov edx, dword ptr ss : [esp+8]
        fmul st, st(3)
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx+8], edx
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fdivp 
        fstp dword ptr ss : [esp+0x54]
        fxch 
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        add esp, 0x48
        ret 0x10
        UNREACHABLE_TRAP(0x62998d0)
    }
}

#undef public_629993c
#undef public_629996b
