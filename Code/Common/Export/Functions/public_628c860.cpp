#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628c860);
CLANG_FORWARD_PROC_SYMBOL(public_634cdf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_628c891 _public_628c891
#define public_628c8d5 _public_628c8d5

PROC_DECLARE(0x628c860, internal_628c860, public_628c860);
extern "C" NAKED register_t __cdecl internal_628c860()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [eax]
        push esi
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [eax+4]
        mov esi, ecx
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_63fc0b8]
        test eax, eax
        fstp dword ptr ss : [esp+0x2C]
        jne public_628c891
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628c891 : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        jne public_628c8d5
        mov ecx, dword ptr ds : [public_63fc0bc]
        mov dword ptr ds : [eax+0x18], ecx
        public_628c8d5 : nop
        mov edx, dword ptr ss : [esp+0x40]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [esp+0x3C], edx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        call public_634cdf0
        pop esi
        add esp, 0x30
        ret 0x10
        UNREACHABLE_TRAP(0x628c860)
    }
}

#undef public_628c891
#undef public_628c8d5
