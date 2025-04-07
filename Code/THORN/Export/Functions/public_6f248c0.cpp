#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f248c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f248d6 _public_6f248d6
#define public_6f24924 _public_6f24924
#define public_6f2496e _public_6f2496e

PROC_DECLARE(0x6f248c0, internal_6f248c0, public_6f248c0);
extern "C" NAKED register_t __cdecl internal_6f248c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61dd0]
        sub esp, 0x50
        test eax, eax
        jne public_6f248d6
        call public_6f57de0
        mov dword ptr ds : [public_6f61dd0], eax
        public_6f248d6 : nop
        mov edx, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x6C]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x68]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_6f61dd0]
        test eax, eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        jne public_6f24924
        call public_6f57de0
        mov dword ptr ds : [public_6f61dd0], eax
        public_6f24924 : nop
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x64]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x40], eax
        mov eax, dword ptr ds : [public_6f61dd0]
        test eax, eax
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], edx
        pop esi
        jne public_6f2496e
        call public_6f57de0
        mov dword ptr ds : [public_6f61dd0], eax
        public_6f2496e : nop
        fld dword ptr ds : [public_6f5a1b8]
        mov ecx, dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x68]
        push ecx
        lea edx, ss:[esp+0x24]
        fmul dword ptr ss : [esp+0x6C]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        push edx
        lea edx, ss:[esp+0x38]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov eax, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [ecx+0xC], edx
        add esp, 0x50
        ret 
        UNREACHABLE_TRAP(0x6f248c0)
    }
}

#undef public_6f248d6
#undef public_6f24924
#undef public_6f2496e
