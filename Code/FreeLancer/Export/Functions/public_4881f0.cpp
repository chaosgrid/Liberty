#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);
CLANG_FORWARD_PROC_SYMBOL(public_5763b0);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_488217 _public_488217
#define public_48821e _public_48821e
#define public_488231 _public_488231
#define public_488244 _public_488244
#define public_4882a2 _public_4882a2
#define public_4882b5 _public_4882b5
#define public_4882c4 _public_4882c4

PROC_DECLARE(0x4881f0, internal_4881f0, public_4881f0);
extern "C" NAKED register_t __cdecl internal_4881f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a17b0
        cmp dword ptr ds : [esi+0x338], 2
        je public_488244
        mov ecx, dword ptr ds : [esi+0x658]
        mov edx, dword ptr ds : [esi+0xF14]
        or eax, 0xFFFFFFFF
        cmp ecx, 0xFFFFFFFF
        je public_488217
        mov eax, ecx
        public_488217 : nop
        cmp edx, 0xFFFFFFFF
        je public_48821e
        mov eax, edx
        public_48821e : nop
        cmp eax, 0xFFFFFFFF
        jl public_488244
        cmp eax, dword ptr ds : [esi+0xE80]
        jge public_488231
        mov dword ptr ds : [esi+0x65C], eax
        public_488231 : nop
        cmp eax, 0xFFFFFFFF
        jl public_488244
        cmp eax, dword ptr ds : [esi+0x173C]
        jge public_488244
        mov dword ptr ds : [esi+0xF18], eax
        public_488244 : nop
        mov al, byte ptr ds : [esi+0x33C]
        test al, al
        je public_4882c4
        push 0
        push 0xC5
        mov byte ptr ds : [esi+0x33C], 0
        call public_5763b0
        xor eax, eax
        mov al, byte ptr ds : [esi+0x330]
        push eax
        call public_4a7690
        mov edx, dword ptr ds : [esi+0x5DC]
        lea ecx, ds:[esi+0x5DC]
        add esp, 0xC
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi+0xE98]
        lea ecx, ds:[esi+0xE98]
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_4882b5
        push edi
        public_4882a2 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_4882a2
        pop edi
        public_4882b5 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        public_4882c4 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4881f0)
    }
}

#undef public_488217
#undef public_48821e
#undef public_488231
#undef public_488244
#undef public_4882a2
#undef public_4882b5
#undef public_4882c4
