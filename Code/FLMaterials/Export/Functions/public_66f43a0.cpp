#include "FLMaterials-PCH.h"


#define public_66f43b3 _public_66f43b3
#define public_66f43b5 _public_66f43b5
#define public_66f43d9 _public_66f43d9
#define public_66f43dd _public_66f43dd
#define public_66f43e2 _public_66f43e2
#define public_66f43f2 _public_66f43f2
#define public_66f4408 _public_66f4408
#define public_66f4437 _public_66f4437

PROC_DECLARE(0x66f43a0, internal_66f43a0, public_66f43a0);
extern "C" NAKED register_t __cdecl internal_66f43a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6701568]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f43f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f43b3 : nop
        mov esi, ebp
        public_66f43b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f43dd
        test cl, cl
        je public_66f43d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f43dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f43b5
        public_66f43d9 : nop
        xor eax, eax
        jmp public_66f43e2
        public_66f43dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f43e2 : nop
        test eax, eax
        je public_66f4408
        mov eax, dword ptr ds : [edi*8+public_6701570]
        inc edi
        test eax, eax
        jne public_66f43b3
        public_66f43f2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f4408 : nop
        mov eax, dword ptr ds : [edi*8+public_670156c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f4437
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_66f4437 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f43a0)
    }
}

#undef public_66f43b3
#undef public_66f43b5
#undef public_66f43d9
#undef public_66f43dd
#undef public_66f43e2
#undef public_66f43f2
#undef public_66f4408
#undef public_66f4437
