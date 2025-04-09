#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50c620);
CLANG_FORWARD_PROC_SYMBOL(public_51c970);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_51c9b0 _public_51c9b0
#define public_51c9c9 _public_51c9c9
#define public_51c9d0 _public_51c9d0
#define public_51c9d6 _public_51c9d6

PROC_DECLARE(0x51c970, internal_51c970, public_51c970);
extern "C" NAKED register_t __cdecl internal_51c970()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x25
        mov ebx, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c9d6
        push 0x24
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c9d6
        push 0x28
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51c9d6
        call public_50c620
        mov edi, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_51c9d6
        lea ecx, ds:[ecx]
        public_51c9b0 : nop
        cmp dword ptr ds : [public_67524c], 2
        mov ecx, dword ptr ds : [esi+8]
        je public_51c9c9
        mov eax, dword ptr ds : [ecx]
        push 0x3F800000
        push ebx
        call dword ptr ds : [eax+0x10]
        jmp public_51c9d0
        public_51c9c9 : nop
        mov dword ptr ds : [ecx+0x34], 0x3F800000
        public_51c9d0 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_51c9b0
        public_51c9d6 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x51c970)
    }
}

#undef public_51c9b0
#undef public_51c9c9
#undef public_51c9d0
#undef public_51c9d6
