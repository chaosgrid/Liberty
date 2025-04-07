#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7370);
CLANG_FORWARD_PROC_SYMBOL(public_6d0e580);

#define public_6d0e5a0 _public_6d0e5a0
#define public_6d0e5e0 _public_6d0e5e0
#define public_6d0e5ed _public_6d0e5ed

PROC_DECLARE(0x6d0e580, internal_6d0e580, public_6d0e580);
extern "C" NAKED register_t __cdecl internal_6d0e580()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d0e5ed
        push ebx
        mov bl, byte ptr ss : [esp+0x20]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6d0e5a0 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [esi+0x40]
        cmp eax, dword ptr ds : [ecx]
        je public_6d0e5e0
        mov edx, dword ptr ds : [edi]
        push edx
        lea ecx, ds:[esi+8]
        call public_6cf7370
        test al, al
        je public_6d0e5e0
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x14], cl
        mov ecx, dword ptr ds : [public_6d8fb14]
        push eax
        mov eax, dword ptr ds : [esi+0x40]
        mov byte ptr ss : [esp+0x19], bl
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        public_6d0e5e0 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ecx+0xC]
        jne public_6d0e5a0
        pop edi
        pop ebx
        public_6d0e5ed : nop
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x6d0e580)
    }
}

#undef public_6d0e5a0
#undef public_6d0e5e0
#undef public_6d0e5ed
