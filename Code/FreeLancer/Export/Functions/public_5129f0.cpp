#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5129f0);

#define public_512a10 _public_512a10
#define public_512a27 _public_512a27
#define public_512a2b _public_512a2b
#define public_512a31 _public_512a31

PROC_DECLARE(0x5129f0, internal_5129f0, public_5129f0);
extern "C" NAKED register_t __cdecl internal_5129f0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_512a31
        mov eax, dword ptr ss : [esp+0x10]
        push ebp
        lea ebp, ds:[eax+4]
        lea ebx, ds:[ebx]
        public_512a10 : nop
        lea ecx, ds:[esi+0x10]
        push ebp
        push ecx
        call dword ptr ds : [public_5c70bc]
        add esp, 8
        test eax, eax
        jge public_512a27
        mov esi, dword ptr ds : [esi+8]
        jmp public_512a2b
        public_512a27 : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_512a2b : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_512a10
        pop ebp
        public_512a31 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5129f0)
    }
}

#undef public_512a10
#undef public_512a27
#undef public_512a2b
#undef public_512a31
