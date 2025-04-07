#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355710);

#define public_635572c _public_635572c
#define public_6355738 _public_6355738
#define public_6355749 _public_6355749
#define public_635575e _public_635575e

PROC_DECLARE(0x6355710, internal_6355710, public_6355710);
extern "C" NAKED register_t __cdecl internal_6355710()
{
    __asm
    {
        push esi
        xor esi, esi
        mov si, word ptr ds : [ecx+0x36]
        push edi
        mov eax, esi
        and eax, 0xFFFF
        dec eax
        js public_6355738
        mov edx, dword ptr ds : [ecx+0x38]
        mov edi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+eax*4]
        public_635572c : nop
        cmp dword ptr ds : [edx], edi
        je public_6355738
        dec eax
        sub edx, 4
        test eax, eax
        jge public_635572c
        public_6355738 : nop
        lea edx, ds:[esi-1]
        mov word ptr ds : [ecx+0x36], dx
        and edx, 0xFFFF
        cmp eax, edx
        jge public_635575e
        public_6355749 : nop
        mov edx, dword ptr ds : [ecx+0x38]
        mov esi, dword ptr ds : [edx+eax*4+4]
        mov dword ptr ds : [edx+eax*4], esi
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x36]
        inc eax
        cmp eax, edx
        jl public_6355749
        public_635575e : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6355710)
    }
}

#undef public_635572c
#undef public_6355738
#undef public_6355749
#undef public_635575e
