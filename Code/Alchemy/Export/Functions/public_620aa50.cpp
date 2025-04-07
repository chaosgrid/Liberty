#include "Alchemy-PCH.h"


#define public_620aa63 _public_620aa63
#define public_620aa65 _public_620aa65
#define public_620aa89 _public_620aa89
#define public_620aa8d _public_620aa8d
#define public_620aa92 _public_620aa92
#define public_620aaa2 _public_620aaa2
#define public_620aab8 _public_620aab8
#define public_620aae4 _public_620aae4

PROC_DECLARE(0x620aa50, internal_620aa50, public_620aa50);
extern "C" NAKED register_t __cdecl internal_620aa50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624bd08]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_620aaa2
        mov ebp, dword ptr ss : [esp+0x18]
        public_620aa63 : nop
        mov esi, ebp
        public_620aa65 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620aa8d
        test cl, cl
        je public_620aa89
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620aa8d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_620aa65
        public_620aa89 : nop
        xor eax, eax
        jmp public_620aa92
        public_620aa8d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_620aa92 : nop
        test eax, eax
        je public_620aab8
        mov eax, dword ptr ds : [edi*8+public_624bd10]
        inc edi
        test eax, eax
        jne public_620aa63
        public_620aaa2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_620aab8 : nop
        mov eax, dword ptr ds : [edi*8+public_624bd0c]
        test eax, eax
        jns public_620aae4
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
        public_620aae4 : nop
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
        UNREACHABLE_TRAP(0x620aa50)
    }
}

#undef public_620aa63
#undef public_620aa65
#undef public_620aa89
#undef public_620aa8d
#undef public_620aa92
#undef public_620aaa2
#undef public_620aab8
#undef public_620aae4
