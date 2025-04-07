#include "Alchemy-PCH.h"


#define public_620ac53 _public_620ac53
#define public_620ac55 _public_620ac55
#define public_620ac79 _public_620ac79
#define public_620ac7d _public_620ac7d
#define public_620ac82 _public_620ac82
#define public_620ac92 _public_620ac92
#define public_620aca8 _public_620aca8
#define public_620acd4 _public_620acd4

PROC_DECLARE(0x620ac40, internal_620ac40, public_620ac40);
extern "C" NAKED register_t __cdecl internal_620ac40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bd38]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620ac92
        mov ebp, dword ptr ss : [esp+0x18]
        public_620ac53 : nop
        mov esi, ebp
        public_620ac55 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620ac7d
        test cl, cl
        je public_620ac79
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620ac7d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620ac55
        public_620ac79 : nop
        xor eax, eax
        jmp public_620ac82
        public_620ac7d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620ac82 : nop
        test eax, eax
        je public_620aca8
        mov eax, dword ptr ds : [edi*8+public_624bd40]
        inc edi
        test eax, eax
        jne public_620ac53
        public_620ac92 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620aca8 : nop
        mov eax, dword ptr ds : [edi*8+public_624bd3c]
        test eax, eax
        jns public_620acd4
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
        public_620acd4 : nop
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
        UNREACHABLE_TRAP(0x620ac40)
    }
}

#undef public_620ac53
#undef public_620ac55
#undef public_620ac79
#undef public_620ac7d
#undef public_620ac82
#undef public_620ac92
#undef public_620aca8
#undef public_620acd4
