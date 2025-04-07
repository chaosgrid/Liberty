#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d116b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d116c0 _public_6d116c0
#define public_6d116c9 _public_6d116c9
#define public_6d116cb _public_6d116cb
#define public_6d116db _public_6d116db
#define public_6d11712 _public_6d11712

PROC_DECLARE(0x6d116b0, internal_6d116b0, public_6d116b0);
extern "C" NAKED register_t __cdecl internal_6d116b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        xor eax, eax
        lea ebx, ds:[ebx]
        public_6d116c0 : nop
        test eax, eax
        jne public_6d116c9
        mov eax, dword ptr ds : [esi+4]
        jmp public_6d116cb
        public_6d116c9 : nop
        mov eax, dword ptr ds : [eax]
        public_6d116cb : nop
        test eax, eax
        je public_6d116db
        mov ecx, dword ptr ds : [eax+8]
        cmp ebx, dword ptr ds : [ecx]
        jne public_6d116c0
        pop esi
        pop ebx
        ret 4
        public_6d116db : nop
        push edi
        push 4
        call public_6d60012
        mov edi, eax
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [edi], ebx
        call public_6d11850
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edi
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        pop edi
        je public_6d11712
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_6d11712 : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d116b0)
    }
}

#undef public_6d116c0
#undef public_6d116c9
#undef public_6d116cb
#undef public_6d116db
#undef public_6d11712
