#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628d7df _public_628d7df
#define public_628d7e7 _public_628d7e7
#define public_628d7f7 _public_628d7f7
#define public_628d813 _public_628d813
#define public_628d81b _public_628d81b
#define public_628d826 _public_628d826
#define public_628d850 _public_628d850
#define public_628d862 _public_628d862

PROC_DECLARE(0x628d7d0, internal_628d7d0, public_628d7d0);
extern "C" NAKED register_t __cdecl internal_628d7d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_628d7df
        xor eax, eax
        jmp public_628d7e7
        public_628d7df : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 2
        public_628d7e7 : nop
        mov ebx, dword ptr ss : [esp+0xC]
        cmp eax, ebx
        jae public_628d862
        test ebx, ebx
        mov eax, ebx
        jge public_628d7f7
        xor eax, eax
        public_628d7f7 : nop
        shl eax, 2
        push edi
        push eax
        call public_6391d9c
        mov edx, dword ptr ds : [esi+8]
        mov edi, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        mov ecx, edi
        je public_628d826
        push ebp
        public_628d813 : nop
        test ecx, ecx
        je public_628d81b
        mov ebp, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebp
        public_628d81b : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_628d813
        pop ebp
        public_628d826 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6391d5a
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        lea edx, ds:[edi+ebx*4]
        mov dword ptr ds : [esi+0xC], edx
        jne public_628d850
        xor eax, eax
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        public_628d850 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        lea eax, ds:[edi+eax*4]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], eax
        pop edi
        public_628d862 : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x628d7d0)
    }
}

#undef public_628d7df
#undef public_628d7e7
#undef public_628d7f7
#undef public_628d813
#undef public_628d81b
#undef public_628d826
#undef public_628d850
#undef public_628d862
