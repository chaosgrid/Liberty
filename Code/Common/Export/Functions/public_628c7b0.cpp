#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628c7b0);
CLANG_FORWARD_PROC_SYMBOL(public_634cd80);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_628c7e3 _public_628c7e3
#define public_628c826 _public_628c826

PROC_DECLARE(0x628c7b0, internal_628c7b0, public_628c7b0);
extern "C" NAKED register_t __cdecl internal_628c7b0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ds : [public_63fc0b8]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x2C]
        push edi
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x30]
        mov edi, ecx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x34]
        fstp dword ptr ss : [esp+0x30]
        jne public_628c7e3
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628c7e3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+8]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0x18]
        test ecx, ecx
        mov dword ptr ss : [esp+0x20], edx
        jne public_628c826
        mov ecx, dword ptr ds : [public_63fc0bc]
        mov dword ptr ds : [eax+0x18], ecx
        public_628c826 : nop
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [esi+0x5C]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, dword ptr ds : [edi+0x18]
        push eax
        push edx
        call public_634cd80
        mov dword ptr ds : [esi+0x54], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x50], ecx
        pop edi
        mov dword ptr ds : [eax+0xA4], esi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x628c7b0)
    }
}

#undef public_628c7e3
#undef public_628c826
