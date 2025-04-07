#include "FLMaterials-PCH.h"


#define public_66f6343 _public_66f6343
#define public_66f6345 _public_66f6345
#define public_66f6369 _public_66f6369
#define public_66f636d _public_66f636d
#define public_66f6372 _public_66f6372
#define public_66f6382 _public_66f6382
#define public_66f6398 _public_66f6398
#define public_66f63c7 _public_66f63c7

PROC_DECLARE(0x66f6330, internal_66f6330, public_66f6330);
extern "C" NAKED register_t __cdecl internal_66f6330()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6701af4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f6382
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f6343 : nop
        mov esi, ebp
        public_66f6345 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f636d
        test cl, cl
        je public_66f6369
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f636d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f6345
        public_66f6369 : nop
        xor eax, eax
        jmp public_66f6372
        public_66f636d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f6372 : nop
        test eax, eax
        je public_66f6398
        mov eax, dword ptr ds : [edi*8+public_6701afc]
        inc edi
        test eax, eax
        jne public_66f6343
        public_66f6382 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f6398 : nop
        mov eax, dword ptr ds : [edi*8+public_6701af8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f63c7
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
        public_66f63c7 : nop
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
        UNREACHABLE_TRAP(0x66f6330)
    }
}

#undef public_66f6343
#undef public_66f6345
#undef public_66f6369
#undef public_66f636d
#undef public_66f6372
#undef public_66f6382
#undef public_66f6398
#undef public_66f63c7
