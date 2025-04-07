#include "Alchemy-PCH.h"


#define public_620a963 _public_620a963
#define public_620a965 _public_620a965
#define public_620a989 _public_620a989
#define public_620a98d _public_620a98d
#define public_620a992 _public_620a992
#define public_620a9a2 _public_620a9a2
#define public_620a9b8 _public_620a9b8
#define public_620a9e4 _public_620a9e4

PROC_DECLARE(0x620a950, internal_620a950, public_620a950);
extern "C" NAKED register_t __cdecl internal_620a950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bcf0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620a9a2
        mov ebp, dword ptr ss : [esp+0x18]
        public_620a963 : nop
        mov esi, ebp
        public_620a965 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620a98d
        test cl, cl
        je public_620a989
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620a98d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620a965
        public_620a989 : nop
        xor eax, eax
        jmp public_620a992
        public_620a98d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620a992 : nop
        test eax, eax
        je public_620a9b8
        mov eax, dword ptr ds : [edi*8+public_624bcf8]
        inc edi
        test eax, eax
        jne public_620a963
        public_620a9a2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620a9b8 : nop
        mov eax, dword ptr ds : [edi*8+public_624bcf4]
        test eax, eax
        jns public_620a9e4
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
        public_620a9e4 : nop
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
        UNREACHABLE_TRAP(0x620a950)
    }
}

#undef public_620a963
#undef public_620a965
#undef public_620a989
#undef public_620a98d
#undef public_620a992
#undef public_620a9a2
#undef public_620a9b8
#undef public_620a9e4
