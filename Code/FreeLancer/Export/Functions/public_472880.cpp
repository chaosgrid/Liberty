#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_4728c8 _public_4728c8
#define public_4728f3 _public_4728f3
#define public_472915 _public_472915
#define public_472927 _public_472927
#define public_472936 _public_472936

PROC_DECLARE(0x472880, internal_472880, public_472880);
extern "C" NAKED register_t __cdecl internal_472880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0x26
        push esi
        push edi
        mov esi, ecx
        je public_4728c8
        cmp eax, 0x42
        jne public_472936
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x7C]
        mov edx, dword ptr ds : [esi]
        lea eax, ds:[esi+0x60]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x14]
        xor eax, eax
        pop edi
        pop esi
        ret 0xC
        public_4728c8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [esi+0x338]
        jne public_472936
        mov dword ptr ds : [public_66dc04], 0
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_4728f3
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3006
        call dword ptr ds : [edx+0x5C]
        public_4728f3 : nop
        xor eax, eax
        mov al, byte ptr ds : [esi+0x330]
        push eax
        call public_4a7690
        mov edx, dword ptr ds : [esi]
        add esp, 4
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_472927
        public_472915 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_472915
        public_472927 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_472936 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x472880)
    }
}

#undef public_4728c8
#undef public_4728f3
#undef public_472915
#undef public_472927
#undef public_472936
