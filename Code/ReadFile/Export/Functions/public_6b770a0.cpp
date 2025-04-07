#include "ReadFile-PCH.h"


#define public_6b770b3 _public_6b770b3
#define public_6b770b5 _public_6b770b5
#define public_6b770d9 _public_6b770d9
#define public_6b770dd _public_6b770dd
#define public_6b770e2 _public_6b770e2
#define public_6b770f2 _public_6b770f2
#define public_6b77108 _public_6b77108
#define public_6b77134 _public_6b77134

PROC_DECLARE(0x6b770a0, internal_6b770a0, public_6b770a0);
extern "C" NAKED register_t __cdecl internal_6b770a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b792c0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6b770f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6b770b3 : nop
        mov esi, ebp
        public_6b770b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6b770dd
        test cl, cl
        je public_6b770d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6b770dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b770b5
        public_6b770d9 : nop
        xor eax, eax
        jmp public_6b770e2
        public_6b770dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b770e2 : nop
        test eax, eax
        je public_6b77108
        mov eax, dword ptr ds : [edi*8+public_6b792c8]
        inc edi
        test eax, eax
        jne public_6b770b3
        public_6b770f2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6b77108 : nop
        mov eax, dword ptr ds : [edi*8+public_6b792c4]
        test eax, eax
        jns public_6b77134
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
        public_6b77134 : nop
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
        UNREACHABLE_TRAP(0x6b770a0)
    }
}

#undef public_6b770b3
#undef public_6b770b5
#undef public_6b770d9
#undef public_6b770dd
#undef public_6b770e2
#undef public_6b770f2
#undef public_6b77108
#undef public_6b77134
