#include "Alchemy-PCH.h"


#define public_6201f1a _public_6201f1a
#define public_6201f3b _public_6201f3b
#define public_6201f5a _public_6201f5a
#define public_6201f7f _public_6201f7f
#define public_6201f8a _public_6201f8a

PROC_DECLARE(0x6201f00, internal_6201f00, public_6201f00);
extern "C" NAKED register_t __cdecl internal_6201f00()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x28]
        mov ebx, eax
        test ebx, ebx
        jne public_6201f1a
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 8
        public_6201f1a : nop
        mov ecx, dword ptr ds : [esi]
        push ebp
        push edi
        push esi
        call dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_6201f3b
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x30]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        mov ebp, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x34]
        push eax
        push edi
        call dword ptr ss : [ebp+0x54]
        public_6201f3b : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x34]
        test eax, eax
        je public_6201f5a
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+0x34]
        mov edi, eax
        mov eax, dword ptr ds : [esi]
        push esi
        mov ebp, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x30]
        push eax
        push edi
        call dword ptr ss : [ebp+0x50]
        public_6201f5a : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x28]
        mov edi, eax
        test edi, edi
        je public_6201f7f
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+0x2C]
        cmp eax, esi
        jne public_6201f8a
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [edi]
        push esi
        call dword ptr ds : [eax+0x34]
        push eax
        push edi
        call dword ptr ss : [ebp+0x4C]
        jmp public_6201f8a
        public_6201f7f : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [public_62578b0], eax
        public_6201f8a : nop
        mov edx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [edx+0x48]
        mov eax, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [eax+0x54]
        mov ecx, dword ptr ds : [esi]
        push 0
        push esi
        call dword ptr ds : [ecx+0x50]
        mov edx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        pop edi
        pop ebp
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6201f00)
    }
}

#undef public_6201f1a
#undef public_6201f3b
#undef public_6201f5a
#undef public_6201f7f
#undef public_6201f8a
