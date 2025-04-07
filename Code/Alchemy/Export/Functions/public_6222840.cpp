#include "Alchemy-PCH.h"


#define public_6222853 _public_6222853
#define public_6222855 _public_6222855
#define public_6222879 _public_6222879
#define public_622287d _public_622287d
#define public_6222882 _public_6222882
#define public_6222892 _public_6222892
#define public_62228a8 _public_62228a8
#define public_62228d4 _public_62228d4

PROC_DECLARE(0x6222840, internal_6222840, public_6222840);
extern "C" NAKED register_t __cdecl internal_6222840()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624da04]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6222892
        mov ebp, dword ptr ss : [esp+0x18]
        public_6222853 : nop
        mov esi, ebp
        public_6222855 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_622287d
        test cl, cl
        je public_6222879
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_622287d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6222855
        public_6222879 : nop
        xor eax, eax
        jmp public_6222882
        public_622287d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6222882 : nop
        test eax, eax
        je public_62228a8
        mov eax, dword ptr ds : [edi*8+public_624da0c]
        inc edi
        test eax, eax
        jne public_6222853
        public_6222892 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62228a8 : nop
        mov eax, dword ptr ds : [edi*8+public_624da08]
        test eax, eax
        jns public_62228d4
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
        public_62228d4 : nop
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
        UNREACHABLE_TRAP(0x6222840)
    }
}

#undef public_6222853
#undef public_6222855
#undef public_6222879
#undef public_622287d
#undef public_6222882
#undef public_6222892
#undef public_62228a8
#undef public_62228d4
