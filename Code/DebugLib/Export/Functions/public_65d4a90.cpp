#include "DebugLib-PCH.h"


#define public_65d4aa3 _public_65d4aa3
#define public_65d4aa5 _public_65d4aa5
#define public_65d4ac9 _public_65d4ac9
#define public_65d4acd _public_65d4acd
#define public_65d4ad2 _public_65d4ad2
#define public_65d4ae2 _public_65d4ae2
#define public_65d4af8 _public_65d4af8
#define public_65d4b24 _public_65d4b24

PROC_DECLARE(0x65d4a90, internal_65d4a90, public_65d4a90);
extern "C" NAKED register_t __cdecl internal_65d4a90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e13e4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d4ae2
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d4aa3 : nop
        mov esi, ebp
        public_65d4aa5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d4acd
        test cl, cl
        je public_65d4ac9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d4acd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d4aa5
        public_65d4ac9 : nop
        xor eax, eax
        jmp public_65d4ad2
        public_65d4acd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d4ad2 : nop
        test eax, eax
        je public_65d4af8
        mov eax, dword ptr ds : [edi*8+public_65e13ec]
        inc edi
        test eax, eax
        jne public_65d4aa3
        public_65d4ae2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d4af8 : nop
        mov eax, dword ptr ds : [edi*8+public_65e13e8]
        test eax, eax
        jns public_65d4b24
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d4b24 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65d4a90)
    }
}

#undef public_65d4aa3
#undef public_65d4aa5
#undef public_65d4ac9
#undef public_65d4acd
#undef public_65d4ad2
#undef public_65d4ae2
#undef public_65d4af8
#undef public_65d4b24
