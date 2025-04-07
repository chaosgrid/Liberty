#include "RendComp-PCH.h"


#define public_6c22303 _public_6c22303
#define public_6c22305 _public_6c22305
#define public_6c22329 _public_6c22329
#define public_6c2232d _public_6c2232d
#define public_6c22332 _public_6c22332
#define public_6c22342 _public_6c22342
#define public_6c22358 _public_6c22358
#define public_6c22384 _public_6c22384

PROC_DECLARE(0x6c222f0, internal_6c222f0, public_6c222f0);
extern "C" NAKED register_t __cdecl internal_6c222f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c360c0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c22342
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c22303 : nop
        mov esi, ebp
        public_6c22305 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2232d
        test cl, cl
        je public_6c22329
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2232d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c22305
        public_6c22329 : nop
        xor eax, eax
        jmp public_6c22332
        public_6c2232d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c22332 : nop
        test eax, eax
        je public_6c22358
        mov eax, dword ptr ds : [edi*8+public_6c360c8]
        inc edi
        test eax, eax
        jne public_6c22303
        public_6c22342 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c22358 : nop
        mov eax, dword ptr ds : [edi*8+public_6c360c4]
        test eax, eax
        jns public_6c22384
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
        public_6c22384 : nop
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
        UNREACHABLE_TRAP(0x6c222f0)
    }
}

#undef public_6c22303
#undef public_6c22305
#undef public_6c22329
#undef public_6c2232d
#undef public_6c22332
#undef public_6c22342
#undef public_6c22358
#undef public_6c22384
