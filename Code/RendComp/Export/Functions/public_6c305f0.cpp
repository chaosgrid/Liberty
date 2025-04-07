#include "RendComp-PCH.h"


#define public_6c30603 _public_6c30603
#define public_6c30605 _public_6c30605
#define public_6c30629 _public_6c30629
#define public_6c3062d _public_6c3062d
#define public_6c30632 _public_6c30632
#define public_6c30642 _public_6c30642
#define public_6c30658 _public_6c30658
#define public_6c30687 _public_6c30687

PROC_DECLARE(0x6c305f0, internal_6c305f0, public_6c305f0);
extern "C" NAKED register_t __cdecl internal_6c305f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c365e4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c30642
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c30603 : nop
        mov esi, ebp
        public_6c30605 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c3062d
        test cl, cl
        je public_6c30629
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c3062d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c30605
        public_6c30629 : nop
        xor eax, eax
        jmp public_6c30632
        public_6c3062d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c30632 : nop
        test eax, eax
        je public_6c30658
        mov eax, dword ptr ds : [edi*8+public_6c365ec]
        inc edi
        test eax, eax
        jne public_6c30603
        public_6c30642 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c30658 : nop
        mov eax, dword ptr ds : [edi*8+public_6c365e8]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6c30687
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
        public_6c30687 : nop
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
        UNREACHABLE_TRAP(0x6c305f0)
    }
}

#undef public_6c30603
#undef public_6c30605
#undef public_6c30629
#undef public_6c3062d
#undef public_6c30632
#undef public_6c30642
#undef public_6c30658
#undef public_6c30687
