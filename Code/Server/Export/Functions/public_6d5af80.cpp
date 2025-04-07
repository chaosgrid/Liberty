#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);

#define public_6d5af98 _public_6d5af98
#define public_6d5afa3 _public_6d5afa3
#define public_6d5afc3 _public_6d5afc3
#define public_6d5afca _public_6d5afca

PROC_DECLARE(0x6d5af80, internal_6d5af80, public_6d5af80);
extern "C" NAKED register_t __cdecl internal_6d5af80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov ebx, offset public_6d64f30
        je public_6d5af98
        mov ebx, eax
        public_6d5af98 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp esi, edi
        mov edx, esi
        jb public_6d5afa3
        mov edx, edi
        public_6d5afa3 : nop
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push ebx
        push eax
        call dword ptr ds : [public_6d64ca4]
        add esp, 0xC
        test eax, eax
        jne public_6d5afca
        cmp esi, edi
        jae public_6d5afc3
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_6d5afc3 : nop
        xor eax, eax
        cmp esi, edi
        setne al
        public_6d5afca : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5af80)
    }
}

#undef public_6d5af98
#undef public_6d5afa3
#undef public_6d5afc3
#undef public_6d5afca
