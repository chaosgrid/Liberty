#include "FLMaterials-PCH.h"


#define public_66f8860 _public_66f8860
#define public_66f8880 _public_66f8880
#define public_66f8894 _public_66f8894

PROC_DECLARE(0x66f8840, internal_66f8840, public_66f8840);
extern "C" NAKED register_t __cdecl internal_66f8840()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ecx, ecx
        mov dword ptr ds : [edi+0x6C], ecx
        mov dword ptr ds : [edi+0x68], ecx
        mov esi, dword ptr ds : [public_6704034]
        mov eax, dword ptr ds : [eax+4]
        lea ebx, ds:[ebx]
        public_66f8860 : nop
        mov bl, byte ptr ds : [eax]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_66f8894
        cmp dl, cl
        je public_66f8880
        mov bl, byte ptr ds : [eax+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_66f8894
        add eax, 2
        add esi, 2
        cmp dl, cl
        jne public_66f8860
        public_66f8880 : nop
        xor eax, eax
        cmp eax, ecx
        setne cl
        mov byte ptr ds : [edi+0x70], cl
        mov byte ptr ds : [edi+0x71], 1
        pop edi
        pop esi
        pop ebx
        ret 4
        public_66f8894 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        cmp eax, ecx
        setne cl
        mov byte ptr ds : [edi+0x70], cl
        mov byte ptr ds : [edi+0x71], 1
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66f8840)
    }
}

#undef public_66f8860
#undef public_66f8880
#undef public_66f8894
