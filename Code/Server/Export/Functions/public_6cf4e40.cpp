#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d500);

#define public_6cf4e5c _public_6cf4e5c
#define public_6cf4e5e _public_6cf4e5e

PROC_DECLARE(0x6cf4e40, internal_6cf4e40, public_6cf4e40);
extern "C" NAKED register_t __cdecl internal_6cf4e40()
{
    __asm
    {
        sub esp, 0x1C
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        je public_6cf4e5c
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x67
        cmp al, 0x67
        jne public_6cf4e5c
        mov edi, ecx
        jmp public_6cf4e5e
        public_6cf4e5c : nop
        xor edi, edi
        public_6cf4e5e : nop
        call dword ptr ds : [public_6d6419c]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [edi+0xE4]
        mov edi, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x20]
        mov cx, word ptr ds : [edi+8]
        lea edx, ss:[esp+8]
        mov word ptr ss : [esp+0x14], cx
        mov ecx, dword ptr ds : [esi+0x28]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_6d0d500
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x20]
        push eax
        push 1
        mov ecx, esi
        call dword ptr ds : [edi+0x158]
        pop edi
        pop esi
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6cf4e40)
    }
}

#undef public_6cf4e5c
#undef public_6cf4e5e
