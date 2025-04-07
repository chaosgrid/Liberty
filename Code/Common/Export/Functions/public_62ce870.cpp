#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3040);
CLANG_FORWARD_PROC_SYMBOL(public_62ce740);
CLANG_FORWARD_PROC_SYMBOL(public_62ce870);
CLANG_FORWARD_PROC_SYMBOL(public_62e74e0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ce896 _public_62ce896
#define public_62ce8a2 _public_62ce8a2
#define public_62ce8a4 _public_62ce8a4
#define public_62ce8c5 _public_62ce8c5
#define public_62ce8c7 _public_62ce8c7
#define public_62ce8f3 _public_62ce8f3
#define public_62ce90c _public_62ce90c
#define public_62ce961 _public_62ce961
#define public_62ce975 _public_62ce975
#define public_62ce981 _public_62ce981
#define public_62ce983 _public_62ce983
#define public_62ce9c3 _public_62ce9c3
#define public_62ce9c5 _public_62ce9c5
#define public_62cea30 _public_62cea30
#define public_62cea41 _public_62cea41
#define public_62cea4b _public_62cea4b
#define public_62cea5d _public_62cea5d
#define public_62cea61 _public_62cea61
#define public_62ceaf2 _public_62ceaf2
#define public_62ceaf4 _public_62ceaf4
#define public_62ceb0f _public_62ceb0f
#define public_62ceb1c _public_62ceb1c
#define public_62ceb1e _public_62ceb1e
#define public_62ceb2e _public_62ceb2e

PROC_DECLARE(0x62ce870, internal_62ce870, public_62ce870);
extern "C" NAKED register_t __cdecl internal_62ce870()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [eax+0x18FC]
        test ecx, ecx
        mov dword ptr ss : [esp+0x28], edi
        jne public_62ce896
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 4
        public_62ce896 : nop
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        je public_62ce8a2
        lea ecx, ds:[eax-8]
        jmp public_62ce8a4
        public_62ce8a2 : nop
        xor ecx, ecx
        public_62ce8a4 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62ce8c5
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62ce8c5
        mov ecx, eax
        jmp public_62ce8c7
        public_62ce8c5 : nop
        xor ecx, ecx
        public_62ce8c7 : nop
        mov esi, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [esi+0x100]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62ce8f3
        fstp st(0)
        call public_62b3040
        fdiv dword ptr ds : [esi+0x100]
        public_62ce8f3 : nop
        fcomp qword ptr ds : [public_639fa50]
        fnstsw ax
        test ah, 0x41
        je public_62ce90c
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 4
        public_62ce90c : nop
        mov eax, dword ptr ds : [edi+0x24]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [edi+0x24]
        mov ebx, eax
        push 0x10000000
        lea eax, ss:[esp+0x18]
        xor ebp, ebp
        push eax
        add ecx, 0x34
        add ebx, 0x24
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x20], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x1C], ebp
        call public_62e74e0
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_62ce961
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1C
        ret 4
        public_62ce961 : nop
        mov edx, dword ptr ds : [eax+0x800]
        xor ecx, ecx
        test edx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        jbe public_62ceb1c
        public_62ce975 : nop
        mov eax, dword ptr ds : [eax+ecx*8]
        test eax, eax
        je public_62ce981
        lea esi, ds:[eax-8]
        jmp public_62ce983
        public_62ce981 : nop
        xor esi, esi
        public_62ce983 : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x88]
        test dword ptr ss : [esp+0x24], 0x10000000
        je public_62ceaf4
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62ce9c3
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x803
        cmp ecx, 0x803
        jne public_62ce9c3
        mov ebp, eax
        jmp public_62ce9c5
        public_62ce9c3 : nop
        xor ebp, ebp
        public_62ce9c5 : nop
        mov al, byte ptr ss : [ebp+0xFC]
        test al, al
        je public_62ceb0f
        mov ecx, dword ptr ss : [ebp+0xEC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        cmp eax, 0xA
        jne public_62cea41
        mov eax, dword ptr ds : [edi+0x24]
        test byte ptr ds : [eax+0x18FC], 1
        je public_62ceb0f
        mov ecx, dword ptr ds : [eax+0x1904]
        test ecx, ecx
        jle public_62cea61
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [eax+0x24]
        test eax, eax
        jne public_62cea61
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edx+0x1904]
        test ecx, ecx
        jle public_62ceb0f
        mov edi, dword ptr ss : [esp+0x10]
        add edx, 0x1908
        public_62cea30 : nop
        cmp dword ptr ds : [edx], edi
        je public_62cea5d
        inc eax
        add edx, 4
        cmp eax, ecx
        jl public_62cea30
        jmp public_62ceb0f
        public_62cea41 : nop
        cmp eax, 0x1A
        je public_62cea4b
        cmp eax, 0x1B
        jne public_62cea61
        public_62cea4b : nop
        mov edx, dword ptr ds : [edi+0x24]
        test byte ptr ds : [edx+0x18FC], 4
        je public_62ceb0f
        jmp public_62cea61
        public_62cea5d : nop
        mov edi, dword ptr ss : [esp+0x28]
        public_62cea61 : nop
        mov eax, dword ptr ss : [ebp+0xF0]
        test eax, eax
        je public_62ceb0f
        push esi
        mov ecx, edi
        call public_62ce740
        test al, al
        je public_62ceaf4
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        fld dword ptr ds : [eax+0x24]
        fsub dword ptr ds : [ebx]
        add eax, 0x24
        fld dword ptr ds : [eax+4]
        mov edx, 0x5F3759DF
        fsub dword ptr ds : [ebx+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ebx+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmulp 
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_62ceaf2
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], esi
        jmp public_62ceaf4
        public_62ceaf2 : nop
        fstp st(0)
        public_62ceaf4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [eax+0x800]
        inc ecx
        cmp ecx, edx
        mov dword ptr ss : [esp+0x1C], ecx
        jb public_62ce975
        public_62ceb0f : nop
        mov ebp, dword ptr ss : [esp+0x20]
        test ebp, ebp
        je public_62ceb1c
        lea eax, ss:[ebp+8]
        jmp public_62ceb1e
        public_62ceb1c : nop
        xor eax, eax
        public_62ceb1e : nop
        mov esi, dword ptr ss : [esp+0x30]
        cmp eax, dword ptr ds : [esi]
        je public_62ceb2e
        push eax
        mov ecx, esi
        call public_6341610
        public_62ceb2e : nop
        pop edi
        mov byte ptr ds : [esi+8], 0
        xor eax, eax
        pop esi
        test ebp, ebp
        pop ebp
        setne al
        pop ebx
        add esp, 0x1C
        ret 4
        UNREACHABLE_TRAP(0x62ce870)
    }
}

#undef public_62ce896
#undef public_62ce8a2
#undef public_62ce8a4
#undef public_62ce8c5
#undef public_62ce8c7
#undef public_62ce8f3
#undef public_62ce90c
#undef public_62ce961
#undef public_62ce975
#undef public_62ce981
#undef public_62ce983
#undef public_62ce9c3
#undef public_62ce9c5
#undef public_62cea30
#undef public_62cea41
#undef public_62cea4b
#undef public_62cea5d
#undef public_62cea61
#undef public_62ceaf2
#undef public_62ceaf4
#undef public_62ceb0f
#undef public_62ceb1c
#undef public_62ceb1e
#undef public_62ceb2e
