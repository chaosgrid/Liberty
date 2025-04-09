#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);

#define public_413e13 _public_413e13
#define public_413e35 _public_413e35
#define public_413e49 _public_413e49
#define public_413e4c _public_413e4c
#define public_413e69 _public_413e69
#define public_413e7a _public_413e7a

PROC_DECLARE(0x413df0, internal_413df0, public_413df0);
extern "C" NAKED register_t __cdecl internal_413df0()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        push esi
        mov esi, ecx
        je public_413e69
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, 0xFFFFFFFF
        push edi
        jne public_413e13
        push ebp
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        public_413e13 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edi, ds:[ebx+1]
        cmp edi, eax
        jbe public_413e4c
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_413e35
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ds : [esi], eax
        jmp public_413e49
        public_413e35 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ds : [esi], eax
        add esp, 4
        mov word ptr ds : [eax], 0
        public_413e49 : nop
        mov dword ptr ds : [esi+4], edi
        public_413e4c : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push ebp
        push eax
        call dword ptr ds : [public_5c71c0]
        mov ecx, dword ptr ds : [esi]
        add esp, 0xC
        pop edi
        mov word ptr ds : [ecx+ebx*2], 0
        pop ebx
        pop esi
        pop ebp
        ret 8
        public_413e69 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        je public_413e7a
        cmp word ptr ds : [esi], 0
        je public_413e7a
        mov word ptr ds : [esi], 0
        public_413e7a : nop
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x413df0)
    }
}

#undef public_413e13
#undef public_413e35
#undef public_413e49
#undef public_413e4c
#undef public_413e69
#undef public_413e7a
