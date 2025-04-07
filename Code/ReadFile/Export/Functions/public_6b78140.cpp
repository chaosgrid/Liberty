#include "ReadFile-PCH.h"


#define public_6b78153 _public_6b78153
#define public_6b78155 _public_6b78155
#define public_6b78179 _public_6b78179
#define public_6b7817d _public_6b7817d
#define public_6b78182 _public_6b78182
#define public_6b78192 _public_6b78192
#define public_6b781a8 _public_6b781a8
#define public_6b781d4 _public_6b781d4

PROC_DECLARE(0x6b78140, internal_6b78140, public_6b78140);
extern "C" NAKED register_t __cdecl internal_6b78140()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b793d8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6b78192
        mov ebp, dword ptr ss : [esp+0x18]
        public_6b78153 : nop
        mov esi, ebp
        public_6b78155 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6b7817d
        test cl, cl
        je public_6b78179
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6b7817d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b78155
        public_6b78179 : nop
        xor eax, eax
        jmp public_6b78182
        public_6b7817d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b78182 : nop
        test eax, eax
        je public_6b781a8
        mov eax, dword ptr ds : [edi*8+public_6b793e0]
        inc edi
        test eax, eax
        jne public_6b78153
        public_6b78192 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6b781a8 : nop
        mov eax, dword ptr ds : [edi*8+public_6b793dc]
        test eax, eax
        jns public_6b781d4
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
        public_6b781d4 : nop
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
        UNREACHABLE_TRAP(0x6b78140)
    }
}

#undef public_6b78153
#undef public_6b78155
#undef public_6b78179
#undef public_6b7817d
#undef public_6b78182
#undef public_6b78192
#undef public_6b781a8
#undef public_6b781d4
