#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae9a0);

#define public_4ae9c6 _public_4ae9c6
#define public_4ae9f7 _public_4ae9f7
#define public_4aeaa7 _public_4aeaa7

PROC_DECLARE(0x4ae9a0, internal_4ae9a0, public_4ae9a0);
extern "C" NAKED register_t __cdecl internal_4ae9a0()
{
    __asm
    {
        sub esp, 0x80
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x7F4]
        mov eax, 4
        cmp ecx, eax
        jne public_4ae9c6
        mov cl, byte ptr ds : [esi+0x8A0]
        test cl, cl
        je public_4aeaa7
        public_4ae9c6 : nop
        mov cl, byte ptr ds : [esi+0x8A0]
        test cl, cl
        jne public_4ae9f7
        mov dword ptr ds : [esi+0x7F4], eax
        mov eax, dword ptr ds : [esi+0x374]
        mov byte ptr ds : [esi+0x8A0], 1
        mov ecx, dword ptr ds : [public_679ba4]
        mov dword ptr ds : [eax+0x348], ecx
        pop esi
        add esp, 0x80
        ret 
        public_4ae9f7 : nop
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea edx, ss:[esp+8]
        push edx
        push 0x765
        push eax
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x7B4]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+8]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov eax, dword ptr ds : [esi+0x7F0]
        mov dword ptr ds : [esi+0x8A8], 0
        mov dword ptr ds : [esi+0x8AC], 0
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 3
        or dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x7B0]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x7B4]
        or byte ptr ds : [eax+0x6C], cl
        mov eax, dword ptr ds : [esi+0x344]
        mov dl, byte ptr ds : [eax+0x6C]
        or dl, cl
        push 0x40
        lea ecx, ss:[esp+8]
        push ecx
        mov byte ptr ds : [eax+0x6C], dl
        mov edx, dword ptr ds : [public_67eca8]
        push 0x532
        push edx
        call public_4347e0
        mov ecx, dword ptr ds : [esi+0x344]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+8]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        push 0
        mov ecx, esi
        call public_4abdf0
        public_4aeaa7 : nop
        pop esi
        add esp, 0x80
        ret 
        UNREACHABLE_TRAP(0x4ae9a0)
    }
}

#undef public_4ae9c6
#undef public_4ae9f7
#undef public_4aeaa7
