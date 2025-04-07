#include "Server-PCH.h"


#define public_6d5bfe2 _public_6d5bfe2
#define public_6d5c010 _public_6d5c010
#define public_6d5c01d _public_6d5c01d
#define public_6d5c025 _public_6d5c025
#define public_6d5c02f _public_6d5c02f
#define public_6d5c036 _public_6d5c036
#define public_6d5c03c _public_6d5c03c

PROC_DECLARE(0x6d5bfd0, internal_6d5bfd0, public_6d5bfd0);
extern "C" NAKED register_t __cdecl internal_6d5bfd0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d5c03c
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d5bfe2 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ds:[esi+0xC]
        push edx
        call dword ptr ds : [eax+0x120]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c01d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c036
        lea ebx, ds:[ebx]
        public_6d5c010 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        je public_6d5c010
        jmp public_6d5c036
        public_6d5c01d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5c02f
        public_6d5c025 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d5c025
        public_6d5c02f : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d5c036
        mov esi, eax
        public_6d5c036 : nop
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d5bfe2
        pop edi
        public_6d5c03c : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5bfd0)
    }
}

#undef public_6d5bfe2
#undef public_6d5c010
#undef public_6d5c01d
#undef public_6d5c025
#undef public_6d5c02f
#undef public_6d5c036
#undef public_6d5c03c
