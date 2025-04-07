#include "FLMaterials-PCH.h"


#define public_66f95e3 _public_66f95e3
#define public_66f95e5 _public_66f95e5
#define public_66f9609 _public_66f9609
#define public_66f960d _public_66f960d
#define public_66f9612 _public_66f9612
#define public_66f9622 _public_66f9622
#define public_66f9638 _public_66f9638
#define public_66f9667 _public_66f9667

PROC_DECLARE(0x66f95d0, internal_66f95d0, public_66f95d0);
extern "C" NAKED register_t __cdecl internal_66f95d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_670214c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_66f9622
        mov ebp, dword ptr ss : [esp+0x18]
        public_66f95e3 : nop
        mov esi, ebp
        public_66f95e5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_66f960d
        test cl, cl
        je public_66f9609
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_66f960d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_66f95e5
        public_66f9609 : nop
        xor eax, eax
        jmp public_66f9612
        public_66f960d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f9612 : nop
        test eax, eax
        je public_66f9638
        mov eax, dword ptr ds : [edi*8+public_6702154]
        inc edi
        test eax, eax
        jne public_66f95e3
        public_66f9622 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_66f9638 : nop
        mov eax, dword ptr ds : [edi*8+public_6702150]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66f9667
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
        public_66f9667 : nop
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
        UNREACHABLE_TRAP(0x66f95d0)
    }
}

#undef public_66f95e3
#undef public_66f95e5
#undef public_66f9609
#undef public_66f960d
#undef public_66f9612
#undef public_66f9622
#undef public_66f9638
#undef public_66f9667
