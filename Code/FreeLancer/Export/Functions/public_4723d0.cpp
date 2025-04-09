#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

#define public_4723e3 _public_4723e3
#define public_472413 _public_472413
#define public_472425 _public_472425
#define public_472438 _public_472438
#define public_472448 _public_472448

PROC_DECLARE(0x4723d0, internal_4723d0, public_4723d0);
extern "C" NAKED register_t __cdecl internal_4723d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub eax, 0xF
        je public_4723e3
        sub eax, 2
        je public_472448
        xor al, al
        ret 4
        public_4723e3 : nop
        push esi
        lea esi, ds:[ecx-0x32C]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x338]
        push eax
        call public_4a7690
        mov eax, dword ptr ds : [esi+0x330]
        add esp, 4
        test eax, eax
        je public_472413
        mov ecx, dword ptr ds : [esi+0x334]
        push 0
        push ecx
        call eax
        add esp, 8
        public_472413 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x84]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        je public_472438
        push edi
        public_472425 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test edi, edi
        mov eax, edi
        jne public_472425
        pop edi
        public_472438 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx]
        pop esi
        public_472448 : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x4723d0)
    }
}

#undef public_4723e3
#undef public_472413
#undef public_472425
#undef public_472438
#undef public_472448
