#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612b20);

#define public_6612b37 _public_6612b37
#define public_6612b44 _public_6612b44
#define public_6612b5a _public_6612b5a
#define public_6612b6f _public_6612b6f

PROC_DECLARE(0x6612b20, internal_6612b20, public_6612b20);
extern "C" NAKED register_t __cdecl internal_6612b20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        cmp eax, edx
        jne public_6612b37
        test eax, eax
        jne public_6612b44
        mov eax, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [esi+0xC]
        public_6612b37 : nop
        xor ecx, ecx
        cmp eax, edx
        setl cl
        mov al, cl
        pop esi
        ret 4
        public_6612b44 : nop
        cmp eax, 1
        jne public_6612b5a
        mov edx, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [esi+0xC]
        xor eax, eax
        cmp edx, ecx
        setl al
        pop esi
        ret 4
        public_6612b5a : nop
        cmp eax, 2
        jne public_6612b6f
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [esi+4]
        cmp eax, edx
        pop esi
        sbb eax, eax
        neg eax
        ret 4
        public_6612b6f : nop
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6612b20)
    }
}

#undef public_6612b37
#undef public_6612b44
#undef public_6612b5a
#undef public_6612b6f
