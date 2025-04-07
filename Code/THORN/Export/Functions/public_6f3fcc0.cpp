#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3fcc0);

#define public_6f3fcd8 _public_6f3fcd8
#define public_6f3fce3 _public_6f3fce3
#define public_6f3fd03 _public_6f3fd03
#define public_6f3fd0a _public_6f3fd0a

PROC_DECLARE(0x6f3fcc0, internal_6f3fcc0, public_6f3fcc0);
extern "C" NAKED register_t __cdecl internal_6f3fcc0()
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
        mov ebx, offset public_6f5af04
        je public_6f3fcd8
        mov ebx, eax
        public_6f3fcd8 : nop
        mov esi, dword ptr ds : [ecx+8]
        cmp esi, edi
        mov edx, esi
        jb public_6f3fce3
        mov edx, edi
        public_6f3fce3 : nop
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push ebx
        push eax
        call dword ptr ds : [public_6f5a08c]
        add esp, 0xC
        test eax, eax
        jne public_6f3fd0a
        cmp esi, edi
        jae public_6f3fd03
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 4
        public_6f3fd03 : nop
        xor eax, eax
        cmp esi, edi
        setne al
        public_6f3fd0a : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f3fcc0)
    }
}

#undef public_6f3fcd8
#undef public_6f3fce3
#undef public_6f3fd03
#undef public_6f3fd0a
