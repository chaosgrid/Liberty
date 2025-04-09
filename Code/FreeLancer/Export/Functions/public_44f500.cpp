#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f500);
CLANG_FORWARD_PROC_SYMBOL(public_457380);

#define public_44f521 _public_44f521
#define public_44f53e _public_44f53e
#define public_44f548 _public_44f548

PROC_DECLARE(0x44f500, internal_44f500, public_44f500);
extern "C" NAKED register_t __cdecl internal_44f500()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x3C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        xor edi, edi
        call dword ptr ds : [ecx+0x4C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ebx+0xAC]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_44f548
        public_44f521 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_44f53e
        call public_457380
        test al, al
        je public_44f53e
        mov eax, dword ptr ds : [esi+0x14]
        sub eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jle public_44f53e
        mov edi, eax
        public_44f53e : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0xAC]
        jne public_44f521
        public_44f548 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x44f500)
    }
}

#undef public_44f521
#undef public_44f53e
#undef public_44f548
