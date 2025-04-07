#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51ddd0);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);

#define public_51de40 _public_51de40
#define public_51de65 _public_51de65
#define public_51de72 _public_51de72
#define public_51de79 _public_51de79
#define public_51deac _public_51deac
#define public_51debd _public_51debd
#define public_51deea _public_51deea
#define public_51def8 _public_51def8
#define public_51df05 _public_51df05
#define public_51df08 _public_51df08
#define public_51df0d _public_51df0d
#define public_51df10 _public_51df10
#define public_51df6b _public_51df6b

PROC_DECLARE(0x51ddd0, internal_51ddd0, public_51ddd0);
extern "C" NAKED register_t __cdecl internal_51ddd0()
{
    __asm
    {
        sub esp, 0x128
        mov ecx, dword ptr ss : [esp+0x134]
        push ebx
        push ebp
        push esi
        push edi
        push 8
        lea eax, ss:[esp+0x3C]
        push eax
        mov eax, dword ptr ss : [esp+0x148]
        mov edx, dword ptr ds : [eax]
        xor edi, edi
        push ecx
        push eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x34], edi
        mov dword ptr ss : [esp+0x30], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [edx+0xC]
        push eax
        call public_554e90
        push eax
        call dword ptr ds : [public_5c6608]
        add esp, 0x14
        cmp eax, edi
        mov dword ptr ss : [esp+0x34], eax
        jle public_51df6b
        mov ebx, dword ptr ss : [esp+0x148]
        lea ebp, ss:[esp+0x38]
        nop 
        lea esp, ss:[esp]
        public_51de40 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_51deac
        push eax
        call dword ptr ds : [public_5c664c]
        add esp, 4
        cmp ebx, eax
        je public_51deac
        mov edx, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [edx+0x68]
        mov edx, dword ptr ds : [edx+0x6C]
        cmp ecx, edx
        je public_51de79
        mov esi, dword ptr ss : [ebp+0x1C]
        public_51de65 : nop
        cmp dword ptr ds : [ecx], esi
        je public_51de72
        add ecx, 0xC
        cmp ecx, edx
        jne public_51de65
        jmp public_51de79
        public_51de72 : nop
        mov dl, byte ptr ds : [ecx+8]
        test dl, dl
        jne public_51deac
        public_51de79 : nop
        mov cl, byte ptr ss : [esp+0x14C]
        test cl, cl
        je public_51debd
        test eax, eax
        je public_51debd
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_51debd
        fld dword ptr ds : [eax+0x140]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 1
        jne public_51debd
        public_51deac : nop
        mov eax, dword ptr ss : [esp+0x34]
        inc edi
        add ebp, 0x20
        cmp edi, eax
        jl public_51de40
        jmp public_51df6b
        public_51debd : nop
        shl edi, 5
        mov edx, edi
        mov eax, dword ptr ss : [esp+edx+0x38]
        lea ecx, ss:[esp+edx+0x3C]
        mov edi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+0x5C]
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebp
        jne public_51deea
        mov esi, dword ptr ds : [eax+4]
        jmp public_51df08
        public_51deea : nop
        mov ecx, dword ptr ds : [eax+0x68]
        mov esi, dword ptr ds : [eax+0x6C]
        cmp ecx, esi
        je public_51df0d
        mov edx, dword ptr ss : [esp+edx+0x54]
        public_51def8 : nop
        cmp dword ptr ds : [ecx], edx
        je public_51df05
        add ecx, 0xC
        cmp ecx, esi
        jne public_51def8
        jmp public_51df0d
        public_51df05 : nop
        mov esi, dword ptr ds : [ecx+4]
        public_51df08 : nop
        cmp esi, 0xFFFFFFFF
        jne public_51df10
        public_51df0d : nop
        mov esi, dword ptr ds : [eax+4]
        public_51df10 : nop
        push eax
        call dword ptr ds : [public_5c664c]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x144]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        push eax
        mov dword ptr ss : [esp+0x18], esi
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], edi
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], ebx
        fsub dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], ebp
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_51df6b : nop
        mov eax, dword ptr ss : [esp+0x13C]
        mov ecx, 6
        lea esi, ss:[esp+0x10]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x128
        ret 
        UNREACHABLE_TRAP(0x51ddd0)
    }
}

#undef public_51de40
#undef public_51de65
#undef public_51de72
#undef public_51de79
#undef public_51deac
#undef public_51debd
#undef public_51deea
#undef public_51def8
#undef public_51df05
#undef public_51df08
#undef public_51df0d
#undef public_51df10
#undef public_51df6b
