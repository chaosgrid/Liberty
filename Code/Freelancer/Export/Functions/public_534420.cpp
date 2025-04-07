#include "Freelancer-PCH.h"


#define public_534435 _public_534435
#define public_534445 _public_534445
#define public_53444b _public_53444b
#define public_534451 _public_534451

PROC_DECLARE(0x534420, internal_534420, public_534420);
extern "C" NAKED register_t __cdecl internal_534420()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_53444b
        mov ebx, dword ptr ds : [public_5c6980]
        public_534435 : nop
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_534445
        lea ecx, ds:[esi+8]
        call ebx
        test al, al
        je public_534451
        public_534445 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_534435
        public_53444b : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_534451 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x534420)
    }
}

#undef public_534435
#undef public_534445
#undef public_53444b
#undef public_534451
