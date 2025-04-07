#include "RendComp-PCH.h"


#define public_6c2a613 _public_6c2a613
#define public_6c2a615 _public_6c2a615
#define public_6c2a639 _public_6c2a639
#define public_6c2a63d _public_6c2a63d
#define public_6c2a642 _public_6c2a642
#define public_6c2a652 _public_6c2a652
#define public_6c2a668 _public_6c2a668
#define public_6c2a694 _public_6c2a694

PROC_DECLARE(0x6c2a600, internal_6c2a600, public_6c2a600);
extern "C" NAKED register_t __cdecl internal_6c2a600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c362ac]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c2a652
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c2a613 : nop
        mov esi, ebp
        public_6c2a615 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c2a63d
        test cl, cl
        je public_6c2a639
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c2a63d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c2a615
        public_6c2a639 : nop
        xor eax, eax
        jmp public_6c2a642
        public_6c2a63d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c2a642 : nop
        test eax, eax
        je public_6c2a668
        mov eax, dword ptr ds : [edi*8+public_6c362b4]
        inc edi
        test eax, eax
        jne public_6c2a613
        public_6c2a652 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c2a668 : nop
        mov eax, dword ptr ds : [edi*8+public_6c362b0]
        test eax, eax
        jns public_6c2a694
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
        public_6c2a694 : nop
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
        UNREACHABLE_TRAP(0x6c2a600)
    }
}

#undef public_6c2a613
#undef public_6c2a615
#undef public_6c2a639
#undef public_6c2a63d
#undef public_6c2a642
#undef public_6c2a652
#undef public_6c2a668
#undef public_6c2a694
