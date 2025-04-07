#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0950);

#define public_599e9d _public_599e9d

PROC_DECLARE(0x599e00, internal_599e00, public_599e00);
extern "C" NAKED register_t __cdecl internal_599e00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x24
        push esi
        push eax
        mov esi, ecx
        call public_5a0950
        lea ecx, ds:[esi+0x80]
        call public_420d60
        test al, al
        je public_599e9d
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+4], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0x84]
        push ecx
        push eax
        call dword ptr ds : [edx+0x94]
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x84]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_599e9d : nop
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x599e00)
    }
}

#undef public_599e9d
