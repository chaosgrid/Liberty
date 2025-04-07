#include "EngBase-PCH.h"


#define public_661a893 _public_661a893
#define public_661a895 _public_661a895
#define public_661a8b9 _public_661a8b9
#define public_661a8bd _public_661a8bd
#define public_661a8c2 _public_661a8c2
#define public_661a8d2 _public_661a8d2
#define public_661a8e8 _public_661a8e8
#define public_661a917 _public_661a917

PROC_DECLARE(0x661a880, internal_661a880, public_661a880);
extern "C" NAKED register_t __cdecl internal_661a880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6629478]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_661a8d2
        mov ebp, dword ptr ss : [esp+0x18]
        public_661a893 : nop
        mov esi, ebp
        public_661a895 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_661a8bd
        test cl, cl
        je public_661a8b9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_661a8bd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_661a895
        public_661a8b9 : nop
        xor eax, eax
        jmp public_661a8c2
        public_661a8bd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_661a8c2 : nop
        test eax, eax
        je public_661a8e8
        mov eax, dword ptr ds : [edi*8+public_6629480]
        inc edi
        test eax, eax
        jne public_661a893
        public_661a8d2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_661a8e8 : nop
        mov eax, dword ptr ds : [edi*8+public_662947c]
        mov ecx, dword ptr ss : [esp+0x14]
        test eax, eax
        jns public_661a917
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_661a917 : nop
        mov esi, dword ptr ds : [ecx+8]
        add esi, eax
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x661a880)
    }
}

#undef public_661a893
#undef public_661a895
#undef public_661a8b9
#undef public_661a8bd
#undef public_661a8c2
#undef public_661a8d2
#undef public_661a8e8
#undef public_661a917
