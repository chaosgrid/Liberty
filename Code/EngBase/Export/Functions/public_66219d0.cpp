#include "EngBase-PCH.h"


#define public_6621a00 _public_6621a00
#define public_6621a1a _public_6621a1a
#define public_6621a24 _public_6621a24
#define public_6621a2d _public_6621a2d

PROC_DECLARE(0x66219d0, internal_66219d0, public_66219d0);
extern "C" NAKED register_t __cdecl internal_66219d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        cmp ebx, 0xFFFFFFFF
        mov dword ptr ds : [edi], 0
        je public_6621a2d
        mov ebp, dword ptr ss : [esp+0x1C]
        test ebp, ebp
        je public_6621a2d
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x58]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6621a1a
        public_6621a00 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push edi
        push ebp
        push ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x2C]
        test eax, eax
        jge public_6621a24
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        jne public_6621a00
        public_6621a1a : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_6621a24 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_6621a2d : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x66219d0)
    }
}

#undef public_6621a00
#undef public_6621a1a
#undef public_6621a24
#undef public_6621a2d
