#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420750);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_591de0);

#define public_56b260 _public_56b260
#define public_56b2a2 _public_56b2a2
#define public_56b2ad _public_56b2ad

PROC_DECLARE(0x56b240, internal_56b240, public_56b240);
extern "C" NAKED register_t __cdecl internal_56b240()
{
    __asm
    {
        sub esp, 0x28
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ds : [ebx+0x6C]
        push ebp
        mov ebp, dword ptr ds : [ebx+0xC]
        push esi
        and cl, 0xFC
        xor esi, esi
        cmp ebp, esi
        mov byte ptr ds : [ebx+0x6C], cl
        je public_56b2ad
        push edi
        nop 
        lea esp, ss:[esp]
        public_56b260 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], esi
        mov byte ptr ss : [esp+0x1C], 0
        call public_420750
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        mov edi, offset public_5cb118
        lea esi, ss:[esp+0x18]
        mov ecx, 0xE
        xor eax, eax
        repe cmpsb
        jne public_56b2a2
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        public_56b2a2 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        xor esi, esi
        test ebp, ebp
        jne public_56b260
        pop edi
        public_56b2ad : nop
        mov ecx, ebx
        call public_591de0
        push 0xF
        lea ecx, ds:[ebx+0x80]
        call public_5760f0
        mov dword ptr ds : [ebx+0xC4], esi
        mov dword ptr ds : [ebx+0xC8], esi
        mov dword ptr ds : [ebx+0xCC], esi
        mov dword ptr ds : [ebx+0xD0], esi
        mov dword ptr ds : [ebx+0xB8], esi
        mov dword ptr ds : [ebx+0xBC], esi
        mov dword ptr ds : [ebx+0xC0], esi
        mov dword ptr ds : [ebx+0xD4], esi
        mov dword ptr ds : [ebx+0xD8], esi
        mov dword ptr ds : [ebx+0xDC], esi
        mov dword ptr ds : [ebx+0xE0], esi
        mov dword ptr ds : [ebx+0xE4], esi
        mov dword ptr ds : [ebx+0xE8], esi
        mov dword ptr ds : [ebx+0xEC], esi
        mov dword ptr ds : [ebx+0xF0], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x56b240)
    }
}

#undef public_56b260
#undef public_56b2a2
#undef public_56b2ad
