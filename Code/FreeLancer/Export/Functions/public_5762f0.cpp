#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5762f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_576310 _public_576310
#define public_576346 _public_576346
#define public_576347 _public_576347
#define public_576349 _public_576349
#define public_57634f _public_57634f

PROC_DECLARE(0x5762f0, internal_5762f0, public_5762f0);
extern "C" NAKED register_t __cdecl internal_5762f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67c274]
        test eax, eax
        push ebx
        mov ebx, ecx
        je public_57634f
        mov ecx, dword ptr ds : [public_67c270]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_57634f
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov edi, edi
        public_576310 : nop
        cmp dword ptr ds : [eax+8], ebx
        jne public_576347
        test edi, edi
        jne public_576346
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_5b7e1d
        mov eax, dword ptr ds : [public_67c274]
        mov ecx, dword ptr ds : [public_67c270]
        add esp, 4
        dec eax
        mov dword ptr ds : [public_67c274], eax
        mov eax, esi
        jmp public_576349
        public_576346 : nop
        dec edi
        public_576347 : nop
        mov eax, dword ptr ds : [eax]
        public_576349 : nop
        cmp eax, ecx
        jne public_576310
        pop edi
        pop esi
        public_57634f : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5762f0)
    }
}

#undef public_576310
#undef public_576346
#undef public_576347
#undef public_576349
#undef public_57634f
