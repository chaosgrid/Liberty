#include "THORN-PCH.h"


#define public_6f33573 _public_6f33573
#define public_6f33575 _public_6f33575
#define public_6f33599 _public_6f33599
#define public_6f3359d _public_6f3359d
#define public_6f335a2 _public_6f335a2
#define public_6f335b2 _public_6f335b2
#define public_6f335c8 _public_6f335c8
#define public_6f335f4 _public_6f335f4

PROC_DECLARE(0x6f33560, internal_6f33560, public_6f33560);
extern "C" NAKED register_t __cdecl internal_6f33560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a9ac]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f335b2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33573 : nop
        mov esi, ebp
        public_6f33575 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3359d
        test cl, cl
        je public_6f33599
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3359d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33575
        public_6f33599 : nop
        xor eax, eax
        jmp public_6f335a2
        public_6f3359d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f335a2 : nop
        test eax, eax
        je public_6f335c8
        mov eax, dword ptr ds : [edi*8+public_6f5a9b4]
        inc edi
        test eax, eax
        jne public_6f33573
        public_6f335b2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f335c8 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a9b0]
        test eax, eax
        jns public_6f335f4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f335f4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f33560)
    }
}

#undef public_6f33573
#undef public_6f33575
#undef public_6f33599
#undef public_6f3359d
#undef public_6f335a2
#undef public_6f335b2
#undef public_6f335c8
#undef public_6f335f4
