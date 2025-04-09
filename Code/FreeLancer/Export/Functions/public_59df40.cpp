#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59df40);

#define public_59df53 _public_59df53
#define public_59df6e _public_59df6e
#define public_59df75 _public_59df75

PROC_DECLARE(0x59df40, internal_59df40, public_59df40);
extern "C" NAKED register_t __cdecl internal_59df40()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ds : [public_67dbe8]
        xor bl, bl
        test esi, esi
        push edi
        je public_59df75
        mov edi, dword ptr ss : [esp+0x18]
        public_59df53 : nop
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_59df6e
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call dword ptr ds : [eax+0x5C]
        or bl, al
        jne public_59df75
        public_59df6e : nop
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_59df53
        public_59df75 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x59df40)
    }
}

#undef public_59df53
#undef public_59df6e
#undef public_59df75
