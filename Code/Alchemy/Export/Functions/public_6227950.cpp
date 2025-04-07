#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6227950);

#define public_62279ba _public_62279ba
#define public_6227a17 _public_6227a17

PROC_DECLARE(0x6227950, internal_6227950, public_6227950);
extern "C" NAKED register_t __cdecl internal_6227950()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x10]
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x1C]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        push esi
        call dword ptr ds : [eax+0x40]
        mov ebp, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x10]
        push 4
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], edx
        call public_6222ee0
        lea ecx, ss:[esp+0x14]
        push 2
        push ecx
        mov ecx, ebp
        call public_6222ee0
        lea edx, ss:[esp+0x2C]
        push 2
        push edx
        mov ecx, ebp
        call public_6222ee0
        xor ebx, ebx
        cmp word ptr ss : [esp+0x2C], bx
        jbe public_6227a17
        push edi
        public_62279ba : nop
        mov eax, dword ptr ds : [esi]
        mov edi, ebx
        lea ecx, ss:[esp+0x2C]
        and edi, 0xFFFF
        push ecx
        push edi
        push esi
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x30], 0
        call dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        call dword ptr ds : [edx+0x30]
        lea ecx, ss:[esp+0x2C]
        push 4
        push ecx
        mov ecx, ebp
        call public_6222ee0
        lea edx, ss:[esp+0x1C]
        push 0xC
        push edx
        mov ecx, ebp
        call public_6222ee0
        inc ebx
        cmp bx, word ptr ss : [esp+0x30]
        jb public_62279ba
        pop edi
        public_6227a17 : nop
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6227950)
    }
}

#undef public_62279ba
#undef public_6227a17
