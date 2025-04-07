#include "THORN-PCH.h"


#define public_6f37913 _public_6f37913
#define public_6f37915 _public_6f37915
#define public_6f37939 _public_6f37939
#define public_6f3793d _public_6f3793d
#define public_6f37942 _public_6f37942
#define public_6f37952 _public_6f37952
#define public_6f37968 _public_6f37968
#define public_6f37997 _public_6f37997

PROC_DECLARE(0x6f37900, internal_6f37900, public_6f37900);
extern "C" NAKED register_t __cdecl internal_6f37900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5acf4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f37952
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f37913 : nop
        mov esi, ebp
        public_6f37915 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3793d
        test cl, cl
        je public_6f37939
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3793d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f37915
        public_6f37939 : nop
        xor eax, eax
        jmp public_6f37942
        public_6f3793d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f37942 : nop
        test eax, eax
        je public_6f37968
        mov eax, dword ptr ds : [edi*8+public_6f5acfc]
        inc edi
        test eax, eax
        jne public_6f37913
        public_6f37952 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f37968 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5acf8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6f37997
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
        public_6f37997 : nop
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
        UNREACHABLE_TRAP(0x6f37900)
    }
}

#undef public_6f37913
#undef public_6f37915
#undef public_6f37939
#undef public_6f3793d
#undef public_6f37942
#undef public_6f37952
#undef public_6f37968
#undef public_6f37997
