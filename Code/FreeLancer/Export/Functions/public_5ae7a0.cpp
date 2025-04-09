#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae7a0);
CLANG_FORWARD_PROC_SYMBOL(public_5af6a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5ae7b0 _public_5ae7b0
#define public_5ae7b9 _public_5ae7b9
#define public_5ae7bb _public_5ae7bb
#define public_5ae7d6 _public_5ae7d6
#define public_5ae7db _public_5ae7db
#define public_5ae7e3 _public_5ae7e3
#define public_5ae7f6 _public_5ae7f6
#define public_5ae7ff _public_5ae7ff
#define public_5ae803 _public_5ae803

PROC_DECLARE(0x5ae7a0, internal_5ae7a0, public_5ae7a0);
extern "C" NAKED register_t __cdecl internal_5ae7a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        push ebp
        lea ebx, ds:[ebx]
        public_5ae7b0 : nop
        cmp esi, ebx
        jne public_5ae7b9
        mov esi, dword ptr ds : [edi+4]
        jmp public_5ae7bb
        public_5ae7b9 : nop
        mov esi, dword ptr ds : [esi]
        public_5ae7bb : nop
        cmp esi, ebx
        je public_5ae7db
        mov ebp, dword ptr ds : [esi+8]
        cmp ebp, ebx
        je public_5ae7d6
        mov ecx, ebp
        call public_5af6a0
        push ebp
        call public_5b7e1d
        add esp, 4
        public_5ae7d6 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_5ae7b0
        public_5ae7db : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        pop ebp
        je public_5ae803
        public_5ae7e3 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_5ae7f6
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_5ae7ff
        public_5ae7f6 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_5ae7ff : nop
        cmp esi, ebx
        jne public_5ae7e3
        public_5ae803 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5ae7a0)
    }
}

#undef public_5ae7b0
#undef public_5ae7b9
#undef public_5ae7bb
#undef public_5ae7d6
#undef public_5ae7db
#undef public_5ae7e3
#undef public_5ae7f6
#undef public_5ae7ff
#undef public_5ae803
