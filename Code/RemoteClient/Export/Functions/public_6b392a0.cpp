#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b32370);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b69d0e);

#define public_6b392c0 _public_6b392c0
#define public_6b3933c _public_6b3933c
#define public_6b39345 _public_6b39345

PROC_DECLARE(0x6b392a0, internal_6b392a0, public_6b392a0);
extern "C" NAKED register_t __cdecl internal_6b392a0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        test edi, edi
        mov dword ptr ss : [esp+0xC], ecx
        je public_6b39345
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        jle public_6b39345
        public_6b392c0 : nop
        movzx ecx, word ptr ds : [edi]
        mov eax, ecx
        and eax, 0xFFFFFF00
        and ecx, 0xFF
        shl eax, 8
        or eax, ecx
        mov edx, eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, dword ptr ds : [public_6b73b30]
        and edx, 0xFFF
        push edx
        shr eax, 0x10
        push eax
        add edi, 2
        sub esi, 2
        mov dword ptr ss : [esp+0x20], 0
        call public_6b3b480
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_6b3933c
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        push edi
        mov ecx, ebx
        call dword ptr ds : [eax+8]
        test eax, eax
        jne public_6b3933c
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edx+0x68]
        push ebx
        push eax
        mov ecx, offset public_6b73b28
        call public_6b32370
        sub esi, dword ptr ss : [esp+0x18]
        test esi, esi
        jg public_6b392c0
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_6b3933c : nop
        mov ecx, dword ptr ss : [esp+0xC]
        call public_6b69d0e
        public_6b39345 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b392a0)
    }
}

#undef public_6b392c0
#undef public_6b3933c
#undef public_6b39345
