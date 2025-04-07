#include "Alchemy-PCH.h"


#define public_62131a3 _public_62131a3
#define public_62131a5 _public_62131a5
#define public_62131c9 _public_62131c9
#define public_62131cd _public_62131cd
#define public_62131d2 _public_62131d2
#define public_62131e2 _public_62131e2
#define public_62131f8 _public_62131f8
#define public_6213224 _public_6213224

PROC_DECLARE(0x6213190, internal_6213190, public_6213190);
extern "C" NAKED register_t __cdecl internal_6213190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624c790]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62131e2
        mov ebp, dword ptr ss : [esp+0x18]
        public_62131a3 : nop
        mov esi, ebp
        public_62131a5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62131cd
        test cl, cl
        je public_62131c9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62131cd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62131a5
        public_62131c9 : nop
        xor eax, eax
        jmp public_62131d2
        public_62131cd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62131d2 : nop
        test eax, eax
        je public_62131f8
        mov eax, dword ptr ds : [edi*8+public_624c798]
        inc edi
        test eax, eax
        jne public_62131a3
        public_62131e2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62131f8 : nop
        mov eax, dword ptr ds : [edi*8+public_624c794]
        test eax, eax
        jns public_6213224
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
        public_6213224 : nop
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
        UNREACHABLE_TRAP(0x6213190)
    }
}

#undef public_62131a3
#undef public_62131a5
#undef public_62131c9
#undef public_62131cd
#undef public_62131d2
#undef public_62131e2
#undef public_62131f8
#undef public_6213224
