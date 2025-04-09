#include "FreeLancer-PCH.h"


#define public_41a763 _public_41a763
#define public_41a765 _public_41a765
#define public_41a789 _public_41a789
#define public_41a78d _public_41a78d
#define public_41a792 _public_41a792
#define public_41a7a2 _public_41a7a2
#define public_41a7b8 _public_41a7b8
#define public_41a7e4 _public_41a7e4

PROC_DECLARE(0x41a750, internal_41a750, public_41a750);
extern "C" NAKED register_t __cdecl internal_41a750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9268]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_41a7a2
        mov ebp, dword ptr ss : [esp+0x18]
        public_41a763 : nop
        mov esi, ebp
        public_41a765 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_41a78d
        test cl, cl
        je public_41a789
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_41a78d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_41a765
        public_41a789 : nop
        xor eax, eax
        jmp public_41a792
        public_41a78d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_41a792 : nop
        test eax, eax
        je public_41a7b8
        mov eax, dword ptr ds : [edi*8+public_5c9270]
        inc edi
        test eax, eax
        jne public_41a763
        public_41a7a2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_41a7b8 : nop
        mov eax, dword ptr ds : [edi*8+public_5c926c]
        test eax, eax
        jns public_41a7e4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_41a7e4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x41a750)
    }
}

#undef public_41a763
#undef public_41a765
#undef public_41a789
#undef public_41a78d
#undef public_41a792
#undef public_41a7a2
#undef public_41a7b8
#undef public_41a7e4
