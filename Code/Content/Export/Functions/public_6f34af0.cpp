#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05f00);
CLANG_FORWARD_PROC_SYMBOL(public_6f34af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);

#define public_6f34b2e _public_6f34b2e
#define public_6f34b5c _public_6f34b5c

PROC_DECLARE(0x6f34af0, internal_6f34af0, public_6f34af0);
extern "C" NAKED register_t __cdecl internal_6f34af0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x178]
        test eax, eax
        lea esi, ds:[edi+0x178]
        je public_6f34b2e
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_6fb31b4]
        lea eax, ss:[esp+8]
        push eax
        mov ecx, edi
        call public_6f57c60
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f34b2e
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi], 0
        public_6f34b2e : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f34b5c
        push esi
        push eax
        call public_6f05f00
        mov al, byte ptr ss : [esp+0x24]
        add esp, 8
        test al, al
        je public_6f34b5c
        mov eax, dword ptr ds : [edi+0x160]
        test eax, eax
        jne public_6f34b5c
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        public_6f34b5c : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x6f34af0)
    }
}

#undef public_6f34b2e
#undef public_6f34b5c
