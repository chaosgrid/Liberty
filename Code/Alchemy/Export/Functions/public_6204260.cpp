#include "Alchemy-PCH.h"


#define public_6204273 _public_6204273
#define public_6204275 _public_6204275
#define public_6204299 _public_6204299
#define public_620429d _public_620429d
#define public_62042a2 _public_62042a2
#define public_62042b2 _public_62042b2
#define public_62042c8 _public_62042c8
#define public_62042f7 _public_62042f7

PROC_DECLARE(0x6204260, internal_6204260, public_6204260);
extern "C" NAKED register_t __cdecl internal_6204260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624b5d4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62042b2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6204273 : nop
        mov esi, ebp
        public_6204275 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620429d
        test cl, cl
        je public_6204299
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620429d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6204275
        public_6204299 : nop
        xor eax, eax
        jmp public_62042a2
        public_620429d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62042a2 : nop
        test eax, eax
        je public_62042c8
        mov eax, dword ptr ds : [edi*8+public_624b5dc]
        inc edi
        test eax, eax
        jne public_6204273
        public_62042b2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62042c8 : nop
        mov eax, dword ptr ds : [edi*8+public_624b5d8]
        mov ecx, dword ptr ss : [esp+0x14]
        test eax, eax
        jns public_62042f7
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_62042f7 : nop
        mov esi, dword ptr ds : [ecx+8]
        add esi, eax
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6204260)
    }
}

#undef public_6204273
#undef public_6204275
#undef public_6204299
#undef public_620429d
#undef public_62042a2
#undef public_62042b2
#undef public_62042c8
#undef public_62042f7
