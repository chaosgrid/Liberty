#include "Shading-PCH.h"


#define public_6ebaba3 _public_6ebaba3
#define public_6ebaba5 _public_6ebaba5
#define public_6ebabc9 _public_6ebabc9
#define public_6ebabcd _public_6ebabcd
#define public_6ebabd2 _public_6ebabd2
#define public_6ebabe2 _public_6ebabe2
#define public_6ebabf8 _public_6ebabf8
#define public_6ebac27 _public_6ebac27

PROC_DECLARE(0x6ebab90, internal_6ebab90, public_6ebab90);
extern "C" NAKED register_t __cdecl internal_6ebab90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6ed21b8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6ebabe2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6ebaba3 : nop
        mov esi, ebp
        public_6ebaba5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6ebabcd
        test cl, cl
        je public_6ebabc9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6ebabcd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ebaba5
        public_6ebabc9 : nop
        xor eax, eax
        jmp public_6ebabd2
        public_6ebabcd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ebabd2 : nop
        test eax, eax
        je public_6ebabf8
        mov eax, dword ptr ds : [edi*8+public_6ed21c0]
        inc edi
        test eax, eax
        jne public_6ebaba3
        public_6ebabe2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6ebabf8 : nop
        mov eax, dword ptr ds : [edi*8+public_6ed21bc]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x14]
        jns public_6ebac27
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        mov edx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6ebac27 : nop
        mov esi, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi+eax]
        add esi, eax
        push esi
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ebab90)
    }
}

#undef public_6ebaba3
#undef public_6ebaba5
#undef public_6ebabc9
#undef public_6ebabcd
#undef public_6ebabd2
#undef public_6ebabe2
#undef public_6ebabf8
#undef public_6ebac27
