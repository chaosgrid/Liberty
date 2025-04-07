#include "FLMaterials-PCH.h"


#define public_66fae13 _public_66fae13
#define public_66fae15 _public_66fae15
#define public_66fae39 _public_66fae39
#define public_66fae3d _public_66fae3d
#define public_66fae42 _public_66fae42
#define public_66fae52 _public_66fae52
#define public_66fae68 _public_66fae68
#define public_66fae97 _public_66fae97

PROC_DECLARE(0x66fae00, internal_66fae00, public_66fae00);
extern "C" NAKED register_t __cdecl internal_66fae00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_67026a8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66fae52
        mov ebp, dword ptr ss : [esp+0x18]
        public_66fae13 : nop
        mov esi, ebp
        public_66fae15 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66fae3d
        test cl, cl
        je public_66fae39
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66fae3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66fae15
        public_66fae39 : nop
        xor eax, eax
        jmp public_66fae42
        public_66fae3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66fae42 : nop
        test eax, eax
        je public_66fae68
        mov eax, dword ptr ds : [edi*8+public_67026b0]
        inc edi
        test eax, eax
        jne public_66fae13
        public_66fae52 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66fae68 : nop
        mov eax, dword ptr ds : [edi*8+public_67026ac]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66fae97
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
        public_66fae97 : nop
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
        UNREACHABLE_TRAP(0x66fae00)
    }
}

#undef public_66fae13
#undef public_66fae15
#undef public_66fae39
#undef public_66fae3d
#undef public_66fae42
#undef public_66fae52
#undef public_66fae68
#undef public_66fae97
