#include "Shading-PCH.h"


#define public_6ec6893 _public_6ec6893
#define public_6ec6895 _public_6ec6895
#define public_6ec68b9 _public_6ec68b9
#define public_6ec68bd _public_6ec68bd
#define public_6ec68c2 _public_6ec68c2
#define public_6ec68d2 _public_6ec68d2
#define public_6ec68e8 _public_6ec68e8
#define public_6ec6917 _public_6ec6917

PROC_DECLARE(0x6ec6880, internal_6ec6880, public_6ec6880);
extern "C" NAKED register_t __cdecl internal_6ec6880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed2ad4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ec68d2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ec6893 : nop
        mov esi, ebp
        public_6ec6895 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ec68bd
        test cl, cl
        je public_6ec68b9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ec68bd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec6895
        public_6ec68b9 : nop
        xor eax, eax
        jmp public_6ec68c2
        public_6ec68bd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec68c2 : nop
        test eax, eax
        je public_6ec68e8
        mov eax, dword ptr ds : [edi*8+public_6ed2adc]
        inc edi
        test eax, eax
        jne public_6ec6893
        public_6ec68d2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ec68e8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed2ad8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ec6917
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
        public_6ec6917 : nop
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
        UNREACHABLE_TRAP(0x6ec6880)
    }
}

#undef public_6ec6893
#undef public_6ec6895
#undef public_6ec68b9
#undef public_6ec68bd
#undef public_6ec68c2
#undef public_6ec68d2
#undef public_6ec68e8
#undef public_6ec6917
