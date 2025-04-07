#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce57a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce57b0 _public_6ce57b0
#define public_6ce57b9 _public_6ce57b9
#define public_6ce57bb _public_6ce57bb
#define public_6ce57d0 _public_6ce57d0
#define public_6ce57d7 _public_6ce57d7
#define public_6ce57ea _public_6ce57ea
#define public_6ce57f3 _public_6ce57f3
#define public_6ce57f7 _public_6ce57f7

PROC_DECLARE(0x6ce57a0, internal_6ce57a0, public_6ce57a0);
extern "C" NAKED register_t __cdecl internal_6ce57a0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        xor ebx, ebx
        mov edi, ecx
        xor esi, esi
        lea esp, ss:[esp]
        public_6ce57b0 : nop
        cmp esi, ebx
        jne public_6ce57b9
        mov esi, dword ptr ds : [edi+4]
        jmp public_6ce57bb
        public_6ce57b9 : nop
        mov esi, dword ptr ds : [esi]
        public_6ce57bb : nop
        cmp esi, ebx
        je public_6ce57d0
        mov eax, dword ptr ds : [esi+8]
        push eax
        call public_6d5ffb0
        add esp, 4
        mov dword ptr ds : [esi+8], ebx
        jmp public_6ce57b0
        public_6ce57d0 : nop
        mov esi, dword ptr ds : [edi+4]
        cmp esi, ebx
        je public_6ce57f7
        public_6ce57d7 : nop
        cmp byte ptr ds : [edi+0xC], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_6ce57ea
        mov ecx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [edi+0x10], eax
        jmp public_6ce57f3
        public_6ce57ea : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6ce57f3 : nop
        cmp esi, ebx
        jne public_6ce57d7
        public_6ce57f7 : nop
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ce57a0)
    }
}

#undef public_6ce57b0
#undef public_6ce57b9
#undef public_6ce57bb
#undef public_6ce57d0
#undef public_6ce57d7
#undef public_6ce57ea
#undef public_6ce57f3
#undef public_6ce57f7
