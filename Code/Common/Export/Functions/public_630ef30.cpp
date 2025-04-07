#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e870);
CLANG_FORWARD_PROC_SYMBOL(public_630ef30);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_630efcc _public_630efcc
#define public_630f01c _public_630f01c
#define public_630f03a _public_630f03a
#define public_630f05d _public_630f05d

PROC_DECLARE(0x630ef30, internal_630ef30, public_630ef30);
extern "C" NAKED register_t __cdecl internal_630ef30()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        sub esp, 0xB8
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x7C]
        push eax
        mov eax, dword ptr ss : [esp+0xCC]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        push eax
        call public_630e870
        mov bl, al
        add esp, 0x10
        test bl, bl
        je public_630f05d
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x90]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x98]
        mov ecx, 9
        mov esi, eax
        lea edi, ss:[esp+0x34]
        rep movsd
        mov esi, dword ptr ss : [esp+0xD0]
        test esi, esi
        je public_630f01c
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630efcc
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630efcc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x80]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], eax
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+4], ecx
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+8], edx
        public_630f01c : nop
        mov edi, dword ptr ss : [esp+0xD4]
        test edi, edi
        je public_630f05d
        mov eax, dword ptr ds : [public_63fcf94]
        test eax, eax
        jne public_630f03a
        call public_6391cf0
        mov dword ptr ds : [public_63fcf94], eax
        public_630f03a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x8C]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x58]
        rep movsd
        public_630f05d : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        add esp, 0xB8
        ret 
        UNREACHABLE_TRAP(0x630ef30)
    }
}

#undef public_630efcc
#undef public_630f01c
#undef public_630f03a
#undef public_630f05d
