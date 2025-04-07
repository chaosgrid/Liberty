#include "Deformable2-PCH.h"


#define public_65f5231 _public_65f5231
#define public_65f524a _public_65f524a
#define public_65f5253 _public_65f5253
#define public_65f5267 _public_65f5267
#define public_65f5280 _public_65f5280

PROC_DECLARE(0x65f5210, internal_65f5210, public_65f5210);
extern "C" NAKED register_t __cdecl internal_65f5210()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ebx+0x18]
        test eax, eax
        je public_65f5280
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        test esi, esi
        push edi
        mov dword ptr ss : [esp+0x10], 0
        je public_65f5267
        mov edi, dword ptr ss : [esp+0x14]
        public_65f5231 : nop
        cmp byte ptr ds : [esi], 0
        jne public_65f524a
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        test eax, eax
        jne public_65f5253
        public_65f524a : nop
        mov esi, dword ptr ds : [esi+0x10]
        test esi, esi
        jne public_65f5231
        jmp public_65f5267
        public_65f5253 : nop
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x5C]
        public_65f5267 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx]
        pop edi
        pop esi
        public_65f5280 : nop
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x65f5210)
    }
}

#undef public_65f5231
#undef public_65f524a
#undef public_65f5253
#undef public_65f5267
#undef public_65f5280
