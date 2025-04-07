#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0d500);

#define public_6cf42a1 _public_6cf42a1
#define public_6cf42a3 _public_6cf42a3
#define public_6cf42b8 _public_6cf42b8
#define public_6cf42ba _public_6cf42ba
#define public_6cf42fd _public_6cf42fd

PROC_DECLARE(0x6cf4270, internal_6cf4270, public_6cf4270);
extern "C" NAKED register_t __cdecl internal_6cf4270()
{
    __asm
    {
        sub esp, 0x1C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        mov ebp, ecx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x20]
        test eax, eax
        je public_6cf42fd
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        je public_6cf42a1
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0xA7
        cmp dl, 0xA7
        jne public_6cf42a1
        mov edi, ecx
        jmp public_6cf42a3
        public_6cf42a1 : nop
        xor edi, edi
        public_6cf42a3 : nop
        mov eax, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [eax+0x10]
        test eax, eax
        je public_6cf42b8
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 3
        cmp dl, 3
        je public_6cf42ba
        public_6cf42b8 : nop
        xor eax, eax
        public_6cf42ba : nop
        mov edx, dword ptr ds : [eax+0xB4]
        test edx, edx
        jne public_6cf42fd
        call dword ptr ds : [public_6d6419c]
        mov ecx, dword ptr ds : [edi+0xE4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0xC], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        mov ax, word ptr ds : [esi+8]
        push ecx
        mov ecx, dword ptr ss : [ebp+0x28]
        mov word ptr ss : [esp+0x1C], ax
        call public_6d0d500
        public_6cf42fd : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x6cf4270)
    }
}

#undef public_6cf42a1
#undef public_6cf42a3
#undef public_6cf42b8
#undef public_6cf42ba
#undef public_6cf42fd
