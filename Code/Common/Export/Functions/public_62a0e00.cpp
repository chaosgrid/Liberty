#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0e00);
CLANG_FORWARD_PROC_SYMBOL(public_62f11e0);

#define public_62a0e11 _public_62a0e11
#define public_62a0e28 _public_62a0e28
#define public_62a0e2e _public_62a0e2e
#define public_62a0e40 _public_62a0e40
#define public_62a0e57 _public_62a0e57
#define public_62a0e5d _public_62a0e5d

PROC_DECLARE(0x62a0e00, internal_62a0e00, public_62a0e00);
extern "C" NAKED register_t __cdecl internal_62a0e00()
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
        je public_62a0e2e
        public_62a0e11 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_62f11e0
        add esp, 4
        test eax, eax
        je public_62a0e28
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_62a0e28 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a0e11
        public_62a0e2e : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax+0x50]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_62a0e5d
        lea ebx, ds:[ebx]
        public_62a0e40 : nop
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        call public_62f11e0
        add esp, 4
        test eax, eax
        je public_62a0e57
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        public_62a0e57 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_62a0e40
        public_62a0e5d : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a0e00)
    }
}

#undef public_62a0e11
#undef public_62a0e28
#undef public_62a0e2e
#undef public_62a0e40
#undef public_62a0e57
#undef public_62a0e5d
