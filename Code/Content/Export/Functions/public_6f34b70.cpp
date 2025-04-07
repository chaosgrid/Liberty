#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34b70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);

#define public_6f34b9c _public_6f34b9c
#define public_6f34ba8 _public_6f34ba8
#define public_6f34bc7 _public_6f34bc7
#define public_6f34bec _public_6f34bec
#define public_6f34c0c _public_6f34c0c
#define public_6f34c25 _public_6f34c25

PROC_DECLARE(0x6f34b70, internal_6f34b70, public_6f34b70);
extern "C" NAKED register_t __cdecl internal_6f34b70()
{
    __asm
    {
        sub esp, 0xC
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        test edi, edi
        mov esi, ecx
        je public_6f34bec
        mov ecx, dword ptr ds : [esi+0x178]
        cmp ecx, edi
        je public_6f34ba8
        test ecx, ecx
        je public_6f34b9c
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x178], 0
        public_6f34b9c : nop
        mov dword ptr ds : [esi+0x178], edi
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        public_6f34ba8 : nop
        mov ecx, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x20]
        mov al, byte ptr ss : [esp+0x20]
        test al, al
        je public_6f34bc7
        mov ecx, dword ptr ds : [esi+0x178]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        public_6f34bc7 : nop
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_6f34c25
        mov eax, dword ptr ds : [esi+0x160]
        test eax, eax
        jne public_6f34c25
        mov ecx, dword ptr ds : [esi+0x178]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        pop edi
        pop esi
        add esp, 0xC
        ret 0xC
        public_6f34bec : nop
        mov eax, dword ptr ds : [esi+0x178]
        test eax, eax
        je public_6f34c0c
        lea ecx, ss:[esp+8]
        call dword ptr ds : [public_6fb31b4]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, esi
        call public_6f57c60
        public_6f34c0c : nop
        mov ecx, dword ptr ds : [esi+0x178]
        test ecx, ecx
        je public_6f34c25
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x178], 0
        public_6f34c25 : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6f34b70)
    }
}

#undef public_6f34b9c
#undef public_6f34ba8
#undef public_6f34bc7
#undef public_6f34bec
#undef public_6f34c0c
#undef public_6f34c25
