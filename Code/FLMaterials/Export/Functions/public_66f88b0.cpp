#include "FLMaterials-PCH.h"


#define public_66f88c7 _public_66f88c7
#define public_66f88e0 _public_66f88e0
#define public_66f8907 _public_66f8907
#define public_66f890e _public_66f890e
#define public_66f891b _public_66f891b

PROC_DECLARE(0x66f88b0, internal_66f88b0, public_66f88b0);
extern "C" NAKED register_t __cdecl internal_66f88b0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi+0x70]
        test al, al
        je public_66f88c7
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [esi+0x68]
        fstp dword ptr ds : [esi+0x68]
        public_66f88c7 : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x1C]
        fadd dword ptr ds : [esi+0x6C]
        xor ebp, ebp
        test eax, eax
        fstp dword ptr ds : [esi+0x6C]
        jbe public_66f891b
        push ebx
        push edi
        xor edi, edi
        mov edi, edi
        public_66f88e0 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_66f8907
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_66f890e
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_66f890e
        public_66f8907 : nop
        mov dword ptr ds : [eax+8], 0
        public_66f890e : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_66f88e0
        pop edi
        pop ebx
        public_66f891b : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x66f88b0)
    }
}

#undef public_66f88c7
#undef public_66f88e0
#undef public_66f8907
#undef public_66f890e
#undef public_66f891b
