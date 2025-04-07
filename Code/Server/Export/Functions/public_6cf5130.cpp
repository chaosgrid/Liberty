#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf5130);

#define public_6cf5140 _public_6cf5140
#define public_6cf5149 _public_6cf5149
#define public_6cf514b _public_6cf514b
#define public_6cf5161 _public_6cf5161

PROC_DECLARE(0x6cf5130, internal_6cf5130, public_6cf5130);
extern "C" NAKED register_t __cdecl internal_6cf5130()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor ebp, ebp
        mov edi, ecx
        xor esi, esi
        mov edi, edi
        public_6cf5140 : nop
        test esi, esi
        jne public_6cf5149
        mov esi, dword ptr ds : [edi+4]
        jmp public_6cf514b
        public_6cf5149 : nop
        mov esi, dword ptr ds : [esi]
        public_6cf514b : nop
        test esi, esi
        je public_6cf5161
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x154]
        test ebx, eax
        je public_6cf5140
        inc ebp
        jmp public_6cf5140
        public_6cf5161 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6cf5130)
    }
}

#undef public_6cf5140
#undef public_6cf5149
#undef public_6cf514b
#undef public_6cf5161
