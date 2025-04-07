#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fff80);

#define public_66fff33 _public_66fff33
#define public_66fff5a _public_66fff5a
#define public_66fff61 _public_66fff61
#define public_66fff6e _public_66fff6e

PROC_DECLARE(0x66fff20, internal_66fff20, public_66fff20);
extern "C" NAKED register_t __cdecl internal_66fff20()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        jbe public_66fff6e
        push ebx
        push edi
        xor edi, edi
        public_66fff33 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_66fff5a
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_66fff61
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_66fff61
        public_66fff5a : nop
        mov dword ptr ds : [eax+8], 0
        public_66fff61 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_66fff33
        pop edi
        pop ebx
        public_66fff6e : nop
        mov ecx, esi
        call public_66fff80
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x66fff20)
    }
}

#undef public_66fff33
#undef public_66fff5a
#undef public_66fff61
#undef public_66fff6e
