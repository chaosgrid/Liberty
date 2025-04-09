#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_47e590);

#define public_47e5b9 _public_47e5b9
#define public_47e5dd _public_47e5dd
#define public_47e602 _public_47e602
#define public_47e627 _public_47e627
#define public_47e64c _public_47e64c

PROC_DECLARE(0x47e590, internal_47e590, public_47e590);
extern "C" NAKED register_t __cdecl internal_47e590()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x3D8]
        test ecx, ecx
        push edi
        je public_47e5b9
        mov edi, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 3
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        public_47e5b9 : nop
        mov ecx, dword ptr ds : [esi+0x3D4]
        test ecx, ecx
        je public_47e5dd
        mov edi, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        test edi, edi
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        public_47e5dd : nop
        mov ecx, dword ptr ds : [esi+0x3DC]
        test ecx, ecx
        je public_47e602
        mov edi, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 2
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        public_47e602 : nop
        mov ecx, dword ptr ds : [esi+0x3E0]
        test ecx, ecx
        je public_47e627
        mov edi, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 4
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        public_47e627 : nop
        mov ecx, dword ptr ds : [esi+0x3E4]
        test ecx, ecx
        je public_47e64c
        mov edi, dword ptr ds : [esi+0x32C]
        mov eax, dword ptr ds : [ecx]
        xor edx, edx
        cmp edi, 1
        sete dl
        push 0
        push edx
        push 0xC
        call dword ptr ds : [eax+0xA8]
        public_47e64c : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x47e590)
    }
}

#undef public_47e5b9
#undef public_47e5dd
#undef public_47e602
#undef public_47e627
#undef public_47e64c
