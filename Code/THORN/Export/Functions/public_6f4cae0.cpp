#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cb90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);

#define public_6f4cb11 _public_6f4cb11
#define public_6f4cb6a _public_6f4cb6a
#define public_6f4cb74 _public_6f4cb74
#define public_6f4cb7b _public_6f4cb7b

PROC_DECLARE(0x6f4cae0, internal_6f4cae0, public_6f4cae0);
extern "C" NAKED register_t __cdecl internal_6f4cae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push ebx
        push ebp
        mov ebp, dword ptr ds : [eax+0x34]
        push esi
        push edi
        call public_6f4edc0
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_6f61e28]
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [ecx+0x78]
        push edi
        push ebx
        call public_6f4cb90
        add esp, 8
        cmp eax, 1
        je public_6f4cb6a
        public_6f4cb11 : nop
        cmp eax, 2
        je public_6f4cb74
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x74]
        mov edx, esi
        neg edx
        shl edx, 0x1F
        sub edx, esi
        mov esi, dword ptr ds : [eax+0x78]
        add esi, edx
        shl esi, 1
        add ecx, esi
        mov dword ptr ds : [eax+0x74], ecx
        call public_6f4c8b0
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x74]
        sub edx, esi
        test edi, edi
        mov dword ptr ds : [ecx+0x74], edx
        je public_6f4cb7b
        test eax, eax
        jne public_6f4cb7b
        call public_6f4edc0
        mov eax, dword ptr ds : [public_6f61e28]
        mov esi, dword ptr ds : [eax+0x78]
        push edi
        push ebx
        call public_6f4cb90
        add esp, 8
        cmp eax, 1
        jne public_6f4cb11
        public_6f4cb6a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        ret 
        public_6f4cb74 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        public_6f4cb7b : nop
        mov ecx, dword ptr ds : [public_6f61e28]
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0x34], ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4cae0)
    }
}

#undef public_6f4cb11
#undef public_6f4cb6a
#undef public_6f4cb74
#undef public_6f4cb7b
