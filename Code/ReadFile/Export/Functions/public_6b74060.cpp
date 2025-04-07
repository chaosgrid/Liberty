#include "ReadFile-PCH.h"


#define public_6b74073 _public_6b74073
#define public_6b74075 _public_6b74075
#define public_6b74099 _public_6b74099
#define public_6b7409d _public_6b7409d
#define public_6b740a2 _public_6b740a2
#define public_6b740b2 _public_6b740b2
#define public_6b740c8 _public_6b740c8
#define public_6b740f4 _public_6b740f4

PROC_DECLARE(0x6b74060, internal_6b74060, public_6b74060);
extern "C" NAKED register_t __cdecl internal_6b74060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b79204]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6b740b2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6b74073 : nop
        mov esi, ebp
        public_6b74075 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6b7409d
        test cl, cl
        je public_6b74099
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6b7409d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b74075
        public_6b74099 : nop
        xor eax, eax
        jmp public_6b740a2
        public_6b7409d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b740a2 : nop
        test eax, eax
        je public_6b740c8
        mov eax, dword ptr ds : [edi*8+public_6b7920c]
        inc edi
        test eax, eax
        jne public_6b74073
        public_6b740b2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6b740c8 : nop
        mov eax, dword ptr ds : [edi*8+public_6b79208]
        test eax, eax
        jns public_6b740f4
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
        public_6b740f4 : nop
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
        UNREACHABLE_TRAP(0x6b74060)
    }
}

#undef public_6b74073
#undef public_6b74075
#undef public_6b74099
#undef public_6b7409d
#undef public_6b740a2
#undef public_6b740b2
#undef public_6b740c8
#undef public_6b740f4
