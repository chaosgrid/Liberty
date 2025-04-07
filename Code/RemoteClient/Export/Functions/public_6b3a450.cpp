#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b3a468 _public_6b3a468
#define public_6b3a47f _public_6b3a47f
#define public_6b3a488 _public_6b3a488
#define public_6b3a491 _public_6b3a491
#define public_6b3a4a0 _public_6b3a4a0
#define public_6b3a4c7 _public_6b3a4c7
#define public_6b3a4e7 _public_6b3a4e7

PROC_DECLARE(0x6b3a450, internal_6b3a450, public_6b3a450);
extern "C" NAKED register_t __cdecl internal_6b3a450()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx]
        test eax, eax
        push esi
        push edi
        je public_6b3a4e7
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6b3a491
        public_6b3a468 : nop
        mov edi, dword ptr ds : [esi+8]
        test edi, edi
        je public_6b3a488
        mov eax, dword ptr ds : [edi+0x14]
        test eax, eax
        je public_6b3a47f
        push eax
        call public_6b6a092
        add esp, 4
        public_6b3a47f : nop
        push edi
        call public_6b6a092
        add esp, 4
        public_6b3a488 : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [eax+4]
        jne public_6b3a468
        public_6b3a491 : nop
        mov edi, dword ptr ds : [ebx]
        test edi, edi
        je public_6b3a4e7
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        je public_6b3a4c7
        public_6b3a4a0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_6b3a4a0
        public_6b3a4c7 : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6b6a092
        push edi
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [edi+8], 0
        call public_6b6a092
        add esp, 8
        public_6b3a4e7 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6b3a450)
    }
}

#undef public_6b3a468
#undef public_6b3a47f
#undef public_6b3a488
#undef public_6b3a491
#undef public_6b3a4a0
#undef public_6b3a4c7
#undef public_6b3a4e7
