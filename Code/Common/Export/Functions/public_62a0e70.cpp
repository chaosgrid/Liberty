#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0e70);
CLANG_FORWARD_PROC_SYMBOL(public_62f0d50);
CLANG_FORWARD_PROC_SYMBOL(public_62f11e0);

#define public_62a0e81 _public_62a0e81
#define public_62a0e98 _public_62a0e98
#define public_62a0e9e _public_62a0e9e
#define public_62a0eb0 _public_62a0eb0
#define public_62a0ec7 _public_62a0ec7
#define public_62a0ecd _public_62a0ecd

PROC_DECLARE(0x62a0e70, internal_62a0e70, public_62a0e70);
extern "C" NAKED register_t __cdecl internal_62a0e70()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [eax+0x44]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62a0e9e
        public_62a0e81 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_62f11e0
        add esp, 4
        test eax, eax
        je public_62a0e98
        mov ecx, eax
        call public_62f0d50
        public_62a0e98 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a0e81
        public_62a0e9e : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [ecx+0x50]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62a0ecd
        lea ebx, ds:[ebx]
        public_62a0eb0 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_62f11e0
        add esp, 4
        test eax, eax
        je public_62a0ec7
        mov ecx, eax
        call public_62f0d50
        public_62a0ec7 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a0eb0
        public_62a0ecd : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a0e70)
    }
}

#undef public_62a0e81
#undef public_62a0e98
#undef public_62a0e9e
#undef public_62a0eb0
#undef public_62a0ec7
#undef public_62a0ecd
