#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40cdc0);
CLANG_FORWARD_PROC_SYMBOL(public_40ce70);
CLANG_FORWARD_PROC_SYMBOL(public_418906);
CLANG_FORWARD_PROC_SYMBOL(public_418996);

#define public_403960 _public_403960
#define public_403975 _public_403975
#define public_403983 _public_403983

PROC_DECLARE(0x403940, internal_403940, public_403940);
extern "C" NAKED register_t __cdecl internal_403940()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        call public_418996
        call public_40cdc0
        mov ecx, dword ptr ds : [public_41baf8]
        mov eax, dword ptr ds : [ecx+4]
        mov esi, 1
        cmp eax, esi
        jb public_403983
        public_403960 : nop
        push esi
        call public_418906
        test eax, eax
        je public_403975
        mov edx, dword ptr ds : [edi+0x60]
        lea ecx, ds:[edi+0x60]
        push 0
        push eax
        call dword ptr ds : [edx]
        public_403975 : nop
        mov ecx, dword ptr ds : [public_41baf8]
        mov eax, dword ptr ds : [ecx+4]
        inc esi
        cmp esi, eax
        jbe public_403960
        public_403983 : nop
        call public_40ce70
        pop edi
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x403940)
    }
}

#undef public_403960
#undef public_403975
#undef public_403983
