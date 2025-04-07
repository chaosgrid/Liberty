#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac35c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac36d0);
CLANG_FORWARD_PROC_SYMBOL(public_6aca470);

#define public_6ac35d8 _public_6ac35d8
#define public_6ac3609 _public_6ac3609
#define public_6ac3621 _public_6ac3621
#define public_6ac3623 _public_6ac3623
#define public_6ac3626 _public_6ac3626
#define public_6ac362d _public_6ac362d
#define public_6ac3642 _public_6ac3642

PROC_DECLARE(0x6ac35c0, internal_6ac35c0, public_6ac35c0);
extern "C" NAKED register_t __cdecl internal_6ac35c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+4]
        dec eax
        je public_6ac3642
        dec eax
        je public_6ac362d
        dec eax
        je public_6ac35d8
        xor eax, eax
        ret 0xC
        public_6ac35d8 : nop
        mov ecx, dword ptr ds : [ecx]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        shl ecx, 2
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, ecx
        push edi
        mov edi, ebx
        mov eax, 1
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        cmp edx, eax
        rep movsb
        je public_6ac3626
        mov esi, dword ptr ss : [esp+0x1C]
        lea edi, ds:[edx-1]
        public_6ac3609 : nop
        test eax, eax
        je public_6ac3621
        push esi
        push ebx
        push ebx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac3621
        mov eax, 1
        jmp public_6ac3623
        public_6ac3621 : nop
        xor eax, eax
        public_6ac3623 : nop
        dec edi
        jne public_6ac3609
        public_6ac3626 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6ac362d : nop
        mov eax, dword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        dec edx
        push eax
        push edx
        push ecx
        call public_6ac36d0
        ret 0xC
        public_6ac3642 : nop
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+4]
        push edx
        push eax
        push ecx
        call public_6aca470
        ret 0xC
        UNREACHABLE_TRAP(0x6ac35c0)
    }
}

#undef public_6ac35d8
#undef public_6ac3609
#undef public_6ac3621
#undef public_6ac3623
#undef public_6ac3626
#undef public_6ac362d
#undef public_6ac3642
