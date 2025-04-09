#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a8750);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);

#define public_4a8788 _public_4a8788
#define public_4a8790 _public_4a8790
#define public_4a87a0 _public_4a87a0
#define public_4a87bf _public_4a87bf
#define public_4a87cb _public_4a87cb
#define public_4a8802 _public_4a8802
#define public_4a8816 _public_4a8816

PROC_DECLARE(0x4a8750, internal_4a8750, public_4a8750);
extern "C" NAKED register_t __cdecl internal_4a8750()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_4a8788
        call public_4c4670
        mov dword ptr ss : [esp+0x10], eax
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_5c6320]
        add esp, 0xC
        public_4a8788 : nop
        mov esi, dword ptr ss : [esp+0xC]
        lea esp, ss:[esp]
        public_4a8790 : nop
        mov eax, dword ptr ds : [edi+0x41C]
        xor edx, edx
        dec eax
        test eax, eax
        mov bl, 1
        jle public_4a8816
        nop 
        public_4a87a0 : nop
        mov ecx, dword ptr ds : [edi+0x410]
        mov eax, dword ptr ds : [ecx+edx*8]
        fld dword ptr ds : [ecx+edx*8+4]
        cmp eax, esi
        fld dword ptr ds : [ecx+edx*8+0xC]
        jne public_4a87bf
        fxch 
        fadd dword ptr ds : [public_5d49b0]
        fxch 
        public_4a87bf : nop
        cmp dword ptr ds : [ecx+edx*8+8], esi
        jne public_4a87cb
        fadd dword ptr ds : [public_5d49b0]
        public_4a87cb : nop
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_4a8802
        mov ebx, dword ptr ds : [ecx+edx*8+8]
        mov esi, dword ptr ds : [ecx+edx*8+4]
        mov eax, dword ptr ds : [ecx+edx*8]
        mov dword ptr ds : [ecx+edx*8], ebx
        mov ebx, dword ptr ds : [ecx+edx*8+0xC]
        mov dword ptr ds : [ecx+edx*8+4], ebx
        mov ecx, dword ptr ds : [edi+0x410]
        mov dword ptr ds : [ecx+edx*8+8], eax
        mov dword ptr ds : [ecx+edx*8+0xC], esi
        mov esi, dword ptr ss : [esp+0xC]
        xor bl, bl
        public_4a8802 : nop
        mov eax, dword ptr ds : [edi+0x41C]
        inc edx
        dec eax
        cmp edx, eax
        jl public_4a87a0
        test bl, bl
        je public_4a8790
        public_4a8816 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4a8750)
    }
}

#undef public_4a8788
#undef public_4a8790
#undef public_4a87a0
#undef public_4a87bf
#undef public_4a87cb
#undef public_4a8802
#undef public_4a8816
