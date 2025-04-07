#include "Alchemy-PCH.h"


#define public_621df13 _public_621df13
#define public_621df15 _public_621df15
#define public_621df39 _public_621df39
#define public_621df3d _public_621df3d
#define public_621df42 _public_621df42
#define public_621df52 _public_621df52
#define public_621df68 _public_621df68
#define public_621df94 _public_621df94

PROC_DECLARE(0x621df00, internal_621df00, public_621df00);
extern "C" NAKED register_t __cdecl internal_621df00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624d77c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_621df52
        mov ebp, dword ptr ss : [esp+0x18]
        public_621df13 : nop
        mov esi, ebp
        public_621df15 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_621df3d
        test cl, cl
        je public_621df39
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_621df3d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_621df15
        public_621df39 : nop
        xor eax, eax
        jmp public_621df42
        public_621df3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_621df42 : nop
        test eax, eax
        je public_621df68
        mov eax, dword ptr ds : [edi*8+public_624d784]
        inc edi
        test eax, eax
        jne public_621df13
        public_621df52 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_621df68 : nop
        mov eax, dword ptr ds : [edi*8+public_624d780]
        test eax, eax
        jns public_621df94
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
        public_621df94 : nop
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
        UNREACHABLE_TRAP(0x621df00)
    }
}

#undef public_621df13
#undef public_621df15
#undef public_621df39
#undef public_621df3d
#undef public_621df42
#undef public_621df52
#undef public_621df68
#undef public_621df94
