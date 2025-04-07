#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_50b2d0);

#define public_50b370 _public_50b370
#define public_50b3a0 _public_50b3a0
#define public_50b3d0 _public_50b3d0
#define public_50b400 _public_50b400
#define public_50b42d _public_50b42d
#define public_50b483 _public_50b483
#define public_50b4b0 _public_50b4b0
#define public_50b4e0 _public_50b4e0
#define public_50b4fd _public_50b4fd

PROC_DECLARE(0x50b2d0, internal_50b2d0, public_50b2d0);
extern "C" NAKED register_t __cdecl internal_50b2d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        push edi
        je public_50b42d
        mov ecx, dword ptr ds : [esi+0x54]
        test ecx, ecx
        je public_50b42d
        mov eax, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [edx]
        push 0
        call public_425640
        push eax
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        push 0
        push ecx
        call dword ptr ds : [edi+0x108]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x58]
        mov edi, dword ptr ds : [eax]
        push 0
        call public_425640
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 1
        push edx
        call dword ptr ds : [edi+0x108]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0xB
        push 1
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5db108
        mov eax, 1
        public_50b370 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b370
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5db140
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_50b3a0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b3a0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5db178
        mov eax, 1
        nop 
        lea esp, ss:[esp]
        public_50b3d0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 2
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b3d0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5db0d8
        mov eax, 0x89
        nop 
        lea esp, ss:[esp]
        public_50b400 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b400
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x110]
        pop edi
        mov al, 1
        pop esi
        ret 
        public_50b42d : nop
        mov ecx, dword ptr ds : [esi+0x54]
        test ecx, ecx
        je public_50b4fd
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov esi, dword ptr ds : [eax]
        push 0
        call public_425640
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push 0
        push edx
        call dword ptr ds : [esi+0x108]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0xB
        push 0
        push eax
        call dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [edx]
        mov esi, offset public_5db108
        mov eax, 1
        public_50b483 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 0
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b483
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5db178
        mov eax, 1
        mov edi, edi
        public_50b4b0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push 1
        push edi
        call dword ptr ds : [ecx+0xF8]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b4b0
        mov eax, dword ptr ds : [public_5c6de0]
        mov edi, dword ptr ds : [eax]
        mov esi, offset public_5db0d8
        mov eax, 0x89
        nop 
        lea esp, ss:[esp]
        public_50b4e0 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [edi]
        push edx
        push eax
        push edi
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        jne public_50b4e0
        pop edi
        mov al, 1
        pop esi
        ret 
        public_50b4fd : nop
        pop edi
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50b2d0)
    }
}

#undef public_50b370
#undef public_50b3a0
#undef public_50b3d0
#undef public_50b400
#undef public_50b42d
#undef public_50b483
#undef public_50b4b0
#undef public_50b4e0
#undef public_50b4fd
