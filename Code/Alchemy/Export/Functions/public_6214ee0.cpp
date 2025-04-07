#include "Alchemy-PCH.h"


#define public_6214ef3 _public_6214ef3
#define public_6214ef5 _public_6214ef5
#define public_6214f19 _public_6214f19
#define public_6214f1d _public_6214f1d
#define public_6214f22 _public_6214f22
#define public_6214f32 _public_6214f32
#define public_6214f48 _public_6214f48
#define public_6214f74 _public_6214f74

PROC_DECLARE(0x6214ee0, internal_6214ee0, public_6214ee0);
extern "C" NAKED register_t __cdecl internal_6214ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624ca54]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6214f32
        mov ebp, dword ptr ss : [esp+0x18]
        public_6214ef3 : nop
        mov esi, ebp
        public_6214ef5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6214f1d
        test cl, cl
        je public_6214f19
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6214f1d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6214ef5
        public_6214f19 : nop
        xor eax, eax
        jmp public_6214f22
        public_6214f1d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6214f22 : nop
        test eax, eax
        je public_6214f48
        mov eax, dword ptr ds : [edi*8+public_624ca5c]
        inc edi
        test eax, eax
        jne public_6214ef3
        public_6214f32 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6214f48 : nop
        mov eax, dword ptr ds : [edi*8+public_624ca58]
        test eax, eax
        jns public_6214f74
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
        public_6214f74 : nop
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
        UNREACHABLE_TRAP(0x6214ee0)
    }
}

#undef public_6214ef3
#undef public_6214ef5
#undef public_6214f19
#undef public_6214f1d
#undef public_6214f22
#undef public_6214f32
#undef public_6214f48
#undef public_6214f74
