#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538e80);

#define public_538e92 _public_538e92
#define public_538e9e _public_538e9e
#define public_538ea0 _public_538ea0
#define public_538ebd _public_538ebd

PROC_DECLARE(0x538e80, internal_538e80, public_538e80);
extern "C" NAKED register_t __cdecl internal_538e80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c6d24]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor ebp, ebp
        xor esi, esi
        public_538e92 : nop
        test esi, esi
        jne public_538e9e
        mov esi, dword ptr ds : [public_67555c]
        jmp public_538ea0
        public_538e9e : nop
        mov esi, dword ptr ds : [esi]
        public_538ea0 : nop
        test esi, esi
        je public_538ebd
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x18
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_538e92
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_538ebd : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x538e80)
    }
}

#undef public_538e92
#undef public_538e9e
#undef public_538ea0
#undef public_538ebd
