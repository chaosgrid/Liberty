#include "EngBase-PCH.h"


#define public_6621590 _public_6621590
#define public_66215aa _public_66215aa
#define public_66215b4 _public_66215b4
#define public_66215bd _public_66215bd

PROC_DECLARE(0x6621560, internal_6621560, public_6621560);
extern "C" NAKED register_t __cdecl internal_6621560()
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
        je public_66215bd
        mov ebp, dword ptr ss : [esp+0x1C]
        test ebp, ebp
        je public_66215bd
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x58]
        mov dword ptr ss : [esp+0x20], eax
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_66215aa
        public_6621590 : nop
        mov eax, dword ptr ds : [esi+0x38]
        push edi
        push ebp
        push ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        jge public_66215b4
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x20]
        cmp esi, eax
        jne public_6621590
        public_66215aa : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_66215b4 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x10
        public_66215bd : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6621560)
    }
}

#undef public_6621590
#undef public_66215aa
#undef public_66215b4
#undef public_66215bd
