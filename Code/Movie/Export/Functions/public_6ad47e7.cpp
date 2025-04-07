#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad47e7);

#define public_6ad47f9 _public_6ad47f9
#define public_6ad4802 _public_6ad4802
#define public_6ad4817 _public_6ad4817
#define public_6ad484a _public_6ad484a
#define public_6ad4857 _public_6ad4857
#define public_6ad4890 _public_6ad4890
#define public_6ad48cd _public_6ad48cd
#define public_6ad48dd _public_6ad48dd

PROC_DECLARE(0x6ad47e7, internal_6ad47e7, public_6ad47e7);
extern "C" NAKED register_t __cdecl internal_6ad47e7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push ebx
        push esi
        push edi
        mov esi, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx+8]
        xor ebx, ebx
        public_6ad47f9 : nop
        test eax, eax
        jl public_6ad4802
        shl eax, 1
        inc ebx
        jmp public_6ad47f9
        public_6ad4802 : nop
        mov eax, ebx
        push 0x3F
        imul eax, 0x204
        pop edx
        lea eax, ds:[eax+esi+0x144]
        mov dword ptr ss : [ebp-4], eax
        public_6ad4817 : nop
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [eax+4], eax
        add eax, 8
        dec edx
        jne public_6ad4817
        mov edi, ebx
        push 4
        shl edi, 0xF
        add edi, dword ptr ds : [ecx+0xC]
        push 0x1000
        push 0x8000
        push edi
        call dword ptr ds : [public_6ada0bc]
        test eax, eax
        jne public_6ad484a
        or eax, 0xFFFFFFFF
        jmp public_6ad48dd
        public_6ad484a : nop
        lea edx, ds:[edi+0x7000]
        cmp edi, edx
        ja public_6ad4890
        lea eax, ds:[edi+0x10]
        public_6ad4857 : nop
        or dword ptr ds : [eax-8], 0xFFFFFFFF
        or dword ptr ds : [eax+0xFEC], 0xFFFFFFFF
        lea ecx, ds:[eax+0xFFC]
        mov dword ptr ds : [eax-4], 0xFF0
        mov dword ptr ds : [eax], ecx
        lea ecx, ds:[eax-0x1004]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+0xFE8], 0xFF0
        add eax, 0x1000
        lea ecx, ds:[eax-0x10]
        cmp ecx, edx
        jbe public_6ad4857
        public_6ad4890 : nop
        mov eax, dword ptr ss : [ebp-4]
        lea ecx, ds:[edi+0xC]
        add eax, 0x1F8
        push 1
        pop edi
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [ecx+8], eax
        lea ecx, ds:[edx+0xC]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [ecx+4], eax
        and dword ptr ds : [esi+ebx*4+0x44], 0
        mov dword ptr ds : [esi+ebx*4+0xC4], edi
        mov al, byte ptr ds : [esi+0x43]
        mov cl, al
        inc cl
        test al, al
        mov eax, dword ptr ss : [ebp+8]
        mov byte ptr ds : [esi+0x43], cl
        jne public_6ad48cd
        or dword ptr ds : [eax+4], edi
        public_6ad48cd : nop
        mov edx, 0x80000000
        mov ecx, ebx
        shr edx, cl
        not edx
        and dword ptr ds : [eax+8], edx
        mov eax, ebx
        public_6ad48dd : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad47e7)
    }
}

#undef public_6ad47f9
#undef public_6ad4802
#undef public_6ad4817
#undef public_6ad484a
#undef public_6ad4857
#undef public_6ad4890
#undef public_6ad48cd
#undef public_6ad48dd
