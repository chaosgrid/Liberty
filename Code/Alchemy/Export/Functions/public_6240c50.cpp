#include "Alchemy-PCH.h"


#define public_6240c63 _public_6240c63
#define public_6240c65 _public_6240c65
#define public_6240c89 _public_6240c89
#define public_6240c8d _public_6240c8d
#define public_6240c92 _public_6240c92
#define public_6240ca2 _public_6240ca2
#define public_6240cb8 _public_6240cb8
#define public_6240ce4 _public_6240ce4

PROC_DECLARE(0x6240c50, internal_6240c50, public_6240c50);
extern "C" NAKED register_t __cdecl internal_6240c50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624f8c0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6240ca2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6240c63 : nop
        mov esi, ebp
        public_6240c65 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6240c8d
        test cl, cl
        je public_6240c89
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6240c8d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6240c65
        public_6240c89 : nop
        xor eax, eax
        jmp public_6240c92
        public_6240c8d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6240c92 : nop
        test eax, eax
        je public_6240cb8
        mov eax, dword ptr ds : [edi*8+public_624f8c8]
        inc edi
        test eax, eax
        jne public_6240c63
        public_6240ca2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6240cb8 : nop
        mov eax, dword ptr ds : [edi*8+public_624f8c4]
        test eax, eax
        jns public_6240ce4
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
        public_6240ce4 : nop
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
        UNREACHABLE_TRAP(0x6240c50)
    }
}

#undef public_6240c63
#undef public_6240c65
#undef public_6240c89
#undef public_6240c8d
#undef public_6240c92
#undef public_6240ca2
#undef public_6240cb8
#undef public_6240ce4
