#include "FLMaterials-PCH.h"


#define public_66fa9d3 _public_66fa9d3
#define public_66fa9d5 _public_66fa9d5
#define public_66fa9f9 _public_66fa9f9
#define public_66fa9fd _public_66fa9fd
#define public_66faa02 _public_66faa02
#define public_66faa12 _public_66faa12
#define public_66faa28 _public_66faa28
#define public_66faa57 _public_66faa57

PROC_DECLARE(0x66fa9c0, internal_66fa9c0, public_66fa9c0);
extern "C" NAKED register_t __cdecl internal_66fa9c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67025ec]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66faa12
        mov ebp, dword ptr ss : [esp+0x18]
        public_66fa9d3 : nop
        mov esi, ebp
        public_66fa9d5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66fa9fd
        test cl, cl
        je public_66fa9f9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66fa9fd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66fa9d5
        public_66fa9f9 : nop
        xor eax, eax
        jmp public_66faa02
        public_66fa9fd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66faa02 : nop
        test eax, eax
        je public_66faa28
        mov eax, dword ptr ds : [edi*8+public_67025f4]
        inc edi
        test eax, eax
        jne public_66fa9d3
        public_66faa12 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66faa28 : nop
        mov eax, dword ptr ds : [edi*8+public_67025f0]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66faa57
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
        public_66faa57 : nop
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
        UNREACHABLE_TRAP(0x66fa9c0)
    }
}

#undef public_66fa9d3
#undef public_66fa9d5
#undef public_66fa9f9
#undef public_66fa9fd
#undef public_66faa02
#undef public_66faa12
#undef public_66faa28
#undef public_66faa57
