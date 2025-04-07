#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acedc0);
CLANG_FORWARD_PROC_SYMBOL(public_6acef00);

#define public_6acedef _public_6acedef
#define public_6acee53 _public_6acee53
#define public_6acee57 _public_6acee57
#define public_6acee61 _public_6acee61
#define public_6acee75 _public_6acee75
#define public_6acee8f _public_6acee8f

PROC_DECLARE(0x6acedc0, internal_6acedc0, public_6acedc0);
extern "C" NAKED register_t __cdecl internal_6acedc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        mov ecx, dword ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [esp+0x18]
        mov eax, ecx
        push edi
        shr eax, 3
        lea ecx, ds:[ecx+esi*8]
        lea edx, ds:[esi*8]
        and eax, 0x3F
        cmp ecx, edx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ds : [ebx+0x10], ecx
        jae public_6acedef
        inc dword ptr ds : [ebx+0x14]
        public_6acedef : nop
        mov edx, dword ptr ds : [ebx+0x14]
        mov ecx, esi
        shr ecx, 0x1D
        add edx, ecx
        test eax, eax
        mov dword ptr ds : [ebx+0x14], edx
        jbe public_6acee53
        lea ecx, ds:[eax+esi]
        cmp ecx, 0x40
        mov dword ptr ss : [esp+0x1C], ecx
        jb public_6acee53
        mov ebp, dword ptr ss : [esp+0x18]
        mov ecx, 0x40
        sub ecx, eax
        mov esi, ebp
        mov edx, ecx
        lea edi, ds:[eax+ebx+0x18]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x1C]
        and ecx, 3
        rep movsb
        mov ecx, 0x40
        lea esi, ds:[edx-0x40]
        sub ecx, eax
        lea eax, ds:[ebx+0x18]
        push eax
        push ebx
        add ebp, ecx
        call public_6acef00
        mov dword ptr ss : [esp+0x14], 0
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_6acee57
        public_6acee53 : nop
        mov ebp, dword ptr ss : [esp+0x18]
        public_6acee57 : nop
        cmp esi, 0x40
        jb public_6acee75
        mov edi, esi
        shr edi, 6
        public_6acee61 : nop
        push ebp
        push ebx
        call public_6acef00
        add ebp, 0x40
        sub esi, 0x40
        dec edi
        jne public_6acee61
        mov eax, dword ptr ss : [esp+0x14]
        public_6acee75 : nop
        test esi, esi
        je public_6acee8f
        mov ecx, esi
        mov esi, ebp
        mov edx, ecx
        lea edi, ds:[eax+ebx+0x18]
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6acee8f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6acedc0)
    }
}

#undef public_6acedef
#undef public_6acee53
#undef public_6acee57
#undef public_6acee61
#undef public_6acee75
#undef public_6acee8f
