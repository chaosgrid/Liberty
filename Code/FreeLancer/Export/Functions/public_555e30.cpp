#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_555e50 _public_555e50
#define public_555e5d _public_555e5d
#define public_555e80 _public_555e80
#define public_555e90 _public_555e90

PROC_DECLARE(0x555e30, internal_555e30, public_555e30);
extern "C" NAKED register_t __cdecl internal_555e30()
{
    __asm
    {
        push esi
        mov esi, ecx
        push esi
        mov dword ptr ds : [esi], offset public_5e1218
        call public_558de0
        mov ecx, dword ptr ds : [public_67999c]
        mov eax, dword ptr ds : [ecx]
        add esp, 4
        cmp eax, ecx
        je public_555e80
        mov edi, edi
        public_555e50 : nop
        cmp dword ptr ds : [eax+8], esi
        je public_555e5d
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_555e50
        jmp public_555e80
        public_555e5d : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6799a0]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_6799a0], eax
        public_555e80 : nop
        test byte ptr ss : [esp+8], 1
        je public_555e90
        push esi
        call public_5b7e1d
        add esp, 4
        public_555e90 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x555e30)
    }
}

#undef public_555e50
#undef public_555e5d
#undef public_555e80
#undef public_555e90
