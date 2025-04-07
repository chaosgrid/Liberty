#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cbb0);

#define public_6f38d10 _public_6f38d10

PROC_DECLARE(0x6f38ca0, internal_6f38ca0, public_6f38ca0);
extern "C" NAKED register_t __cdecl internal_6f38ca0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [edi+0xA0]
        jae public_6f38d10
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        lea esi, ds:[edi+0xA4]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], ebx
        call public_6f3cbb0
        mov edx, dword ptr ds : [edi+0xA8]
        cmp edx, dword ptr ss : [esp+0x20]
        je public_6f38d10
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], 0
        call public_6f3c5d0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x10]
        mov eax, dword ptr ds : [eax+0x80]
        pop edi
        pop esi
        pop ebx
        add esp, 0x10
        ret 8
        public_6f38d10 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6f38ca0)
    }
}

#undef public_6f38d10
