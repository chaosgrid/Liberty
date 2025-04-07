#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77a50);

#define public_6b77a63 _public_6b77a63
#define public_6b77a65 _public_6b77a65
#define public_6b77a89 _public_6b77a89
#define public_6b77a8d _public_6b77a8d
#define public_6b77a92 _public_6b77a92
#define public_6b77aa2 _public_6b77aa2
#define public_6b77ab8 _public_6b77ab8
#define public_6b77ae4 _public_6b77ae4

PROC_DECLARE(0x6b77a50, internal_6b77a50, public_6b77a50);
extern "C" NAKED register_t __cdecl internal_6b77a50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b79398]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6b77aa2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6b77a63 : nop
        mov esi, ebp
        public_6b77a65 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6b77a8d
        test cl, cl
        je public_6b77a89
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6b77a8d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6b77a65
        public_6b77a89 : nop
        xor eax, eax
        jmp public_6b77a92
        public_6b77a8d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6b77a92 : nop
        test eax, eax
        je public_6b77ab8
        mov eax, dword ptr ds : [edi*8+public_6b793a0]
        inc edi
        test eax, eax
        jne public_6b77a63
        public_6b77aa2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6b77ab8 : nop
        mov eax, dword ptr ds : [edi*8+public_6b7939c]
        test eax, eax
        jns public_6b77ae4
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
        public_6b77ae4 : nop
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
        UNREACHABLE_TRAP(0x6b77a50)
    }
}

#undef public_6b77a63
#undef public_6b77a65
#undef public_6b77a89
#undef public_6b77a8d
#undef public_6b77a92
#undef public_6b77aa2
#undef public_6b77ab8
#undef public_6b77ae4
