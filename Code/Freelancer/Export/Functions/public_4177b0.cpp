#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);

#define public_4177c8 _public_4177c8
#define public_4177e6 _public_4177e6
#define public_4177ec _public_4177ec

PROC_DECLARE(0x4177b0, internal_4177b0, public_4177b0);
extern "C" NAKED register_t __cdecl internal_4177b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_61651c]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_4177e6
        mov edi, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ds : [public_5c6d24]
        public_4177c8 : nop
        mov eax, dword ptr ds : [esi+8]
        lea ecx, ds:[esi+8]
        push edi
        call dword ptr ds : [eax+4]
        push eax
        call ebx
        add esp, 8
        test eax, eax
        je public_4177ec
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [public_61651c]
        jne public_4177c8
        public_4177e6 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 
        public_4177ec : nop
        pop edi
        lea eax, ds:[esi+8]
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4177b0)
    }
}

#undef public_4177c8
#undef public_4177e6
#undef public_4177ec
