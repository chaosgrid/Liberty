#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b24d0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62b23fa _public_62b23fa
#define public_62b23fc _public_62b23fc
#define public_62b2420 _public_62b2420
#define public_62b2422 _public_62b2422
#define public_62b2449 _public_62b2449
#define public_62b2476 _public_62b2476
#define public_62b247f _public_62b247f
#define public_62b2481 _public_62b2481
#define public_62b248d _public_62b248d

PROC_DECLARE(0x62b23e0, internal_62b23e0, public_62b23e0);
extern "C" NAKED register_t __cdecl internal_62b23e0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x220]
        test eax, eax
        push edi
        lea edi, ds:[ebx+0x220]
        je public_62b23fa
        add eax, 0xFFFFFFF8
        jmp public_62b23fc
        public_62b23fa : nop
        xor eax, eax
        public_62b23fc : nop
        mov esi, dword ptr ss : [esp+0x10]
        cmp eax, esi
        je public_62b248d
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b2449
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b2449
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b2420
        lea ecx, ds:[eax-8]
        jmp public_62b2422
        public_62b2420 : nop
        xor ecx, ecx
        public_62b2422 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b2449
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62b2449
        push 0
        push ebx
        mov ecx, eax
        call public_62b24d0
        public_62b2449 : nop
        test esi, esi
        je public_62b247f
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b2476
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62b2476
        push 1
        push ebx
        mov ecx, eax
        call public_62b24d0
        public_62b2476 : nop
        test esi, esi
        je public_62b247f
        lea eax, ds:[esi+8]
        jmp public_62b2481
        public_62b247f : nop
        xor eax, eax
        public_62b2481 : nop
        cmp eax, dword ptr ds : [edi]
        je public_62b248d
        push eax
        mov ecx, edi
        call public_6341610
        public_62b248d : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62b23e0)
    }
}

#undef public_62b23fa
#undef public_62b23fc
#undef public_62b2420
#undef public_62b2422
#undef public_62b2449
#undef public_62b2476
#undef public_62b247f
#undef public_62b2481
#undef public_62b248d
