#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0c7e0);

#define public_6d0c7f0 _public_6d0c7f0
#define public_6d0c7f9 _public_6d0c7f9
#define public_6d0c7fb _public_6d0c7fb
#define public_6d0c829 _public_6d0c829
#define public_6d0c82b _public_6d0c82b
#define public_6d0c839 _public_6d0c839

PROC_DECLARE(0x6d0c7e0, internal_6d0c7e0, public_6d0c7e0);
extern "C" NAKED register_t __cdecl internal_6d0c7e0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        xor eax, eax
        xor edi, edi
        lea esp, ss:[esp]
        public_6d0c7f0 : nop
        test edi, edi
        jne public_6d0c7f9
        mov edi, dword ptr ds : [ecx+0x60]
        jmp public_6d0c7fb
        public_6d0c7f9 : nop
        mov edi, dword ptr ds : [edi]
        public_6d0c7fb : nop
        test edi, edi
        je public_6d0c839
        test eax, eax
        jne public_6d0c839
        mov esi, dword ptr ds : [edi+8]
        test esi, esi
        je public_6d0c829
        lea edx, ds:[esi+0xC]
        test edx, edx
        je public_6d0c829
        mov edx, dword ptr ds : [edx+4]
        test edx, edx
        je public_6d0c829
        mov ebp, dword ptr ds : [edx+0x4C]
        and ebp, 0x303
        cmp ebp, 0x303
        je public_6d0c82b
        public_6d0c829 : nop
        xor edx, edx
        public_6d0c82b : nop
        mov edx, dword ptr ds : [edx+0x1A4]
        cmp edx, dword ptr ds : [ebx]
        jne public_6d0c7f0
        mov eax, esi
        jmp public_6d0c7f0
        public_6d0c839 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d0c7e0)
    }
}

#undef public_6d0c7f0
#undef public_6d0c7f9
#undef public_6d0c7fb
#undef public_6d0c829
#undef public_6d0c82b
#undef public_6d0c839
