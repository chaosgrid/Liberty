#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62883c0);
CLANG_FORWARD_PROC_SYMBOL(public_628cbe0);
CLANG_FORWARD_PROC_SYMBOL(public_6345710);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_628cc45 _public_628cc45
#define public_628cccf _public_628cccf
#define public_628cce6 _public_628cce6

PROC_DECLARE(0x628cbe0, internal_628cbe0, public_628cbe0);
extern "C" NAKED register_t __cdecl internal_628cbe0()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        mov ebx, dword ptr ss : [esp+0x68]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x54]
        call public_6345710
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [public_63fc0b8]
        test eax, eax
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x2C]
        jne public_628cc45
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628cc45 : nop
        mov edx, dword ptr ds : [eax]
        push esi
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ds:[ebx+0x2C]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx+4], ecx
        lea edi, ds:[ebx+8]
        mov ecx, 9
        lea esi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, 0xFFFFFFFF
        mov dword ptr ds : [edx+8], eax
        je public_628cccf
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea esi, ss:[esp+0xC]
        push esi
        lea esi, ss:[esp+0x74]
        push esi
        push 1
        push ecx
        push eax
        call dword ptr ds : [edx+0x88]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+0x74]
        push edx
        mov edx, dword ptr ds : [ebx+4]
        push 1
        push edx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [ebx+4]
        push ebx
        push eax
        call public_62883c0
        add esp, 8
        public_628cccf : nop
        mov ecx, dword ptr ds : [ebx+0x4C]
        and ecx, 3
        cmp cl, 3
        pop edi
        pop esi
        jne public_628cce6
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x84]
        public_628cce6 : nop
        pop ebx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x628cbe0)
    }
}

#undef public_628cc45
#undef public_628cccf
#undef public_628cce6
