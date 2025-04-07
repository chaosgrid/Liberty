#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d50af0);

#define public_6cf0db9 _public_6cf0db9

PROC_DECLARE(0x6cf0d50, internal_6cf0d50, public_6cf0d50);
extern "C" NAKED register_t __cdecl internal_6cf0d50()
{
    __asm
    {
        push ecx
        push ebx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf0db9
        mov ebx, dword ptr ss : [esp+0x14]
        test ebx, ebx
        je public_6cf0db9
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x160]
        test al, al
        jne public_6cf0db9
        mov ecx, dword ptr ds : [public_6d90260]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, esi
        imul eax, 0x418
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d50af0
        mov eax, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [ebx+4]
        push esi
        push eax
        xor eax, eax
        mov ax, word ptr ds : [edi+4]
        lea ecx, ds:[ebx+4]
        push eax
        call dword ptr ds : [edx+0x38]
        pop esi
        public_6cf0db9 : nop
        pop edi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6cf0d50)
    }
}

#undef public_6cf0db9
