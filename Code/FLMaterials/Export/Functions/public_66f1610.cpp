#include "FLMaterials-PCH.h"


#define public_66f1623 _public_66f1623
#define public_66f164a _public_66f164a
#define public_66f1651 _public_66f1651
#define public_66f165e _public_66f165e

PROC_DECLARE(0x66f1610, internal_66f1610, public_66f1610);
extern "C" NAKED register_t __cdecl internal_66f1610()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        jbe public_66f165e
        push ebx
        push edi
        xor edi, edi
        public_66f1623 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_66f164a
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_66f1651
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_66f1651
        public_66f164a : nop
        mov dword ptr ds : [eax+8], 0
        public_66f1651 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_66f1623
        pop edi
        pop ebx
        public_66f165e : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x66f1610)
    }
}

#undef public_66f1623
#undef public_66f164a
#undef public_66f1651
#undef public_66f165e
