#include "Alchemy-PCH.h"


#define public_620ad53 _public_620ad53
#define public_620ad55 _public_620ad55
#define public_620ad79 _public_620ad79
#define public_620ad7d _public_620ad7d
#define public_620ad82 _public_620ad82
#define public_620ad92 _public_620ad92
#define public_620ada8 _public_620ada8
#define public_620add4 _public_620add4

PROC_DECLARE(0x620ad40, internal_620ad40, public_620ad40);
extern "C" NAKED register_t __cdecl internal_620ad40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bd50]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620ad92
        mov ebp, dword ptr ss : [esp+0x18]
        public_620ad53 : nop
        mov esi, ebp
        public_620ad55 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620ad7d
        test cl, cl
        je public_620ad79
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620ad7d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620ad55
        public_620ad79 : nop
        xor eax, eax
        jmp public_620ad82
        public_620ad7d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620ad82 : nop
        test eax, eax
        je public_620ada8
        mov eax, dword ptr ds : [edi*8+public_624bd58]
        inc edi
        test eax, eax
        jne public_620ad53
        public_620ad92 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620ada8 : nop
        mov eax, dword ptr ds : [edi*8+public_624bd54]
        test eax, eax
        jns public_620add4
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
        public_620add4 : nop
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
        UNREACHABLE_TRAP(0x620ad40)
    }
}

#undef public_620ad53
#undef public_620ad55
#undef public_620ad79
#undef public_620ad7d
#undef public_620ad82
#undef public_620ad92
#undef public_620ada8
#undef public_620add4
