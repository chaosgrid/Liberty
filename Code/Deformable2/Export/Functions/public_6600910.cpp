#include "Deformable2-PCH.h"


#define public_6600923 _public_6600923
#define public_6600925 _public_6600925
#define public_6600949 _public_6600949
#define public_660094d _public_660094d
#define public_6600952 _public_6600952
#define public_6600962 _public_6600962
#define public_6600978 _public_6600978
#define public_66009a7 _public_66009a7

PROC_DECLARE(0x6600910, internal_6600910, public_6600910);
extern "C" NAKED register_t __cdecl internal_6600910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6601588]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6600962
        mov ebp, dword ptr ss : [esp+0x18]
        public_6600923 : nop
        mov esi, ebp
        public_6600925 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_660094d
        test cl, cl
        je public_6600949
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_660094d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6600925
        public_6600949 : nop
        xor eax, eax
        jmp public_6600952
        public_660094d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6600952 : nop
        test eax, eax
        je public_6600978
        mov eax, dword ptr ds : [edi*8+public_6601590]
        inc edi
        test eax, eax
        jne public_6600923
        public_6600962 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6600978 : nop
        mov eax, dword ptr ds : [edi*8+public_660158c]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_66009a7
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
        public_66009a7 : nop
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
        UNREACHABLE_TRAP(0x6600910)
    }
}

#undef public_6600923
#undef public_6600925
#undef public_6600949
#undef public_660094d
#undef public_6600952
#undef public_6600962
#undef public_6600978
#undef public_66009a7
