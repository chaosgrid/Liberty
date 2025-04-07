#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285d10);
CLANG_FORWARD_PROC_SYMBOL(public_62ac2e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62c2350);

#define public_62c2396 _public_62c2396
#define public_62c2398 _public_62c2398
#define public_62c23ba _public_62c23ba
#define public_62c23bc _public_62c23bc
#define public_62c23e3 _public_62c23e3
#define public_62c23e5 _public_62c23e5
#define public_62c23ee _public_62c23ee
#define public_62c23fa _public_62c23fa
#define public_62c23fc _public_62c23fc
#define public_62c2410 _public_62c2410
#define public_62c2412 _public_62c2412
#define public_62c241f _public_62c241f
#define public_62c2429 _public_62c2429

PROC_DECLARE(0x62c2350, internal_62c2350, public_62c2350);
extern "C" NAKED register_t __cdecl internal_62c2350()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x90]
        test eax, eax
        je public_62c2429
        push esi
        mov dword ptr ds : [esi+0x90], 0
        call public_6285d10
        mov eax, dword ptr ds : [esi+0x18]
        add esp, 4
        test eax, eax
        je public_62c241f
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62c241f
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_62c2396
        lea ecx, ds:[eax-8]
        jmp public_62c2398
        public_62c2396 : nop
        xor ecx, ecx
        public_62c2398 : nop
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62c23ba
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_62c23ba
        mov edi, eax
        jmp public_62c23bc
        public_62c23ba : nop
        xor edi, edi
        public_62c23bc : nop
        push 0
        mov ecx, edi
        call public_62ac2e0
        push 1
        mov ecx, edi
        call public_62ad540
        mov al, byte ptr ss : [esp+0xC]
        test al, al
        pop edi
        jne public_62c23ee
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_62c23e3
        add eax, 0xFFFFFFF8
        jmp public_62c23e5
        public_62c23e3 : nop
        xor eax, eax
        public_62c23e5 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        call dword ptr ds : [edx+0x68]
        public_62c23ee : nop
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_62c23fa
        lea ecx, ds:[eax-8]
        jmp public_62c23fc
        public_62c23fa : nop
        xor ecx, ecx
        public_62c23fc : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_62c2410
        add eax, 0xFFFFFFF8
        jmp public_62c2412
        public_62c2410 : nop
        xor eax, eax
        public_62c2412 : nop
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+4]
        push 0x3F800000
        call dword ptr ds : [edx]
        public_62c241f : nop
        mov dword ptr ds : [esi+0x90], 0
        public_62c2429 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c2350)
    }
}

#undef public_62c2396
#undef public_62c2398
#undef public_62c23ba
#undef public_62c23bc
#undef public_62c23e3
#undef public_62c23e5
#undef public_62c23ee
#undef public_62c23fa
#undef public_62c23fc
#undef public_62c2410
#undef public_62c2412
#undef public_62c241f
#undef public_62c2429
