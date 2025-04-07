#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6aca7d0);

#define public_6aca7e8 _public_6aca7e8
#define public_6aca7f2 _public_6aca7f2
#define public_6aca800 _public_6aca800
#define public_6aca80c _public_6aca80c
#define public_6aca816 _public_6aca816
#define public_6aca81d _public_6aca81d
#define public_6aca829 _public_6aca829
#define public_6aca854 _public_6aca854

PROC_DECLARE(0x6aca7d0, internal_6aca7d0, public_6aca7d0);
extern "C" NAKED register_t __cdecl internal_6aca7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        test eax, eax
        push edi
        je public_6aca854
        cmp eax, 3
        mov ebx, eax
        jb public_6aca7e8
        cmp eax, 0xC
        jbe public_6aca7f2
        public_6aca7e8 : nop
        mov dword ptr ds : [public_6ae097c], 0x2C
        public_6aca7f2 : nop
        mov eax, 1
        mov edi, offset public_6ae0988
        mov dword ptr ss : [esp+0x14], eax
        public_6aca800 : nop
        lea ecx, ds:[eax-4]
        test ecx, ecx
        jl public_6aca80c
        mov eax, dword ptr ds : [edi-0x38]
        shl eax, 1
        public_6aca80c : nop
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ds : [edi], eax
        mov edx, eax
        jbe public_6aca81d
        public_6aca816 : nop
        shr edx, 1
        inc esi
        cmp edx, ebx
        ja public_6aca816
        public_6aca81d : nop
        mov dword ptr ds : [edi+4], esi
        mov eax, offset public_6ada800
        lea ecx, ds:[edi+8]
        inc esi
        public_6aca829 : nop
        mov ebp, dword ptr ds : [eax]
        add eax, 4
        imul ebp, edx
        mov dword ptr ds : [ecx], ebp
        add ecx, 4
        dec esi
        jne public_6aca829
        mov eax, dword ptr ss : [esp+0x14]
        add edi, 0x1C
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        lea edx, ds:[eax-1]
        cmp edx, 0xC
        jne public_6aca800
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6aca854 : nop
        mov ebx, 4
        jmp public_6aca7f2
        UNREACHABLE_TRAP(0x6aca7d0)
    }
}

#undef public_6aca7e8
#undef public_6aca7f2
#undef public_6aca800
#undef public_6aca80c
#undef public_6aca816
#undef public_6aca81d
#undef public_6aca829
#undef public_6aca854
