#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f020);
CLANG_FORWARD_PROC_SYMBOL(public_6f51520);
CLANG_FORWARD_PROC_SYMBOL(public_6f52ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55310);

#define public_6f51539 _public_6f51539
#define public_6f51540 _public_6f51540
#define public_6f51575 _public_6f51575
#define public_6f5158a _public_6f5158a
#define public_6f515d3 _public_6f515d3
#define public_6f515e0 _public_6f515e0
#define public_6f51614 _public_6f51614
#define public_6f51664 _public_6f51664
#define public_6f5167f _public_6f5167f
#define public_6f51683 _public_6f51683
#define public_6f51691 _public_6f51691
#define public_6f516bd _public_6f516bd
#define public_6f516c1 _public_6f516c1
#define public_6f516e0 _public_6f516e0
#define public_6f516f2 _public_6f516f2
#define public_6f5172f _public_6f5172f
#define public_6f5173d _public_6f5173d
#define public_6f51761 _public_6f51761
#define public_6f51765 _public_6f51765
#define public_6f51780 _public_6f51780
#define public_6f51792 _public_6f51792
#define public_6f517cf _public_6f517cf
#define public_6f517dd _public_6f517dd
#define public_6f51810 _public_6f51810
#define public_6f51822 _public_6f51822
#define public_6f51828 _public_6f51828
#define public_6f5182d _public_6f5182d
#define public_6f51860 _public_6f51860
#define public_6f51872 _public_6f51872
#define public_6f51878 _public_6f51878
#define public_6f5187d _public_6f5187d
#define public_6f51882 _public_6f51882
#define public_6f518a6 _public_6f518a6
#define public_6f518c8 _public_6f518c8
#define public_6f518cb _public_6f518cb
#define public_6f518d5 _public_6f518d5
#define public_6f518db _public_6f518db
#define public_6f518fa _public_6f518fa
#define public_6f51904 _public_6f51904
#define public_6f5190e _public_6f5190e

PROC_DECLARE(0x6f51520, internal_6f51520, public_6f51520);
extern "C" NAKED register_t __cdecl internal_6f51520()
{
    __asm
    {
        sub esp, 0x2C
        mov eax, ecx
        cmp dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+8], eax
        jne public_6f51539
        lea ecx, ds:[eax+0x18]
        mov dword ptr ss : [esp+0x38], ecx
        jmp public_6f51540
        public_6f51539 : nop
        lea edx, ds:[eax+4]
        mov dword ptr ss : [esp+0x38], edx
        public_6f51540 : nop
        mov ecx, dword ptr ss : [esp+0x38]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ds : [ecx]
        lea ecx, ds:[eax+0x2C]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea edx, ds:[eax+0xB4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, edi
        imul ecx, esi
        xor ebx, ebx
        xor ebp, ebp
        test eax, eax
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x10], edx
        jne public_6f51575
        xor edx, edx
        jmp public_6f5158a
        public_6f51575 : nop
        mov edx, dword ptr ds : [edx+8]
        sub edx, eax
        mov eax, 0x2AAAAAAB
        imul edx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_6f5158a : nop
        cmp edx, ecx
        jae public_6f517dd
        mov ecx, dword ptr ss : [esp+0x40]
        xor eax, eax
        cmp ecx, eax
        mov ecx, dword ptr ss : [esp+0x44]
        je public_6f51691
        cmp ecx, eax
        je public_6f5173d
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test esi, esi
        mov dword ptr ss : [esp+0x20], eax
        jle public_6f51683
        jmp public_6f515e0
        public_6f515d3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ss : [esp+0x1C]
        nop 
        lea esp, ss:[esp]
        public_6f515e0 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, ecx
        cdq 
        idiv esi
        mov ecx, dword ptr ss : [esp+0x48]
        push edx
        call public_6f4f020
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov esi, eax
        sar esi, 0xF
        public_6f51614 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+edx]
        cdq 
        idiv edi
        mov ecx, dword ptr ss : [esp+0x24]
        push edx
        call public_6f4f020
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebp, eax
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ebp
        mov dword ptr ss : [esp+0x2C], eax
        call public_6f53ab0
        cmp eax, dword ptr ss : [esp+0x28]
        je public_6f51664
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, eax
        inc eax
        cmp ecx, edi
        mov dword ptr ss : [esp+0x14], eax
        jl public_6f51614
        public_6f51664 : nop
        cmp dword ptr ss : [esp+0x14], edi
        jne public_6f5167f
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_6f515d3
        public_6f5167f : nop
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f51683 : nop
        cmp dword ptr ss : [esp+0x18], esi
        setl byte ptr ss : [esp+0x48]
        jmp public_6f51882
        public_6f51691 : nop
        cmp ecx, eax
        je public_6f5173d
        mov ebx, 1
        mov dword ptr ss : [esp+0x48], eax
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6f516c1
        public_6f516bd : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_6f516c1 : nop
        mov edx, dword ptr ss : [esp+0x48]
        add eax, edx
        cdq 
        idiv edi
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+0x34]
        mov eax, dword ptr ds : [ecx+4]
        sub eax, dword ptr ds : [ecx]
        inc eax
        cmp eax, edx
        ja public_6f516f2
        nop 
        lea esp, ss:[esp]
        public_6f516e0 : nop
        mov esi, dword ptr ds : [ecx+8]
        add ecx, 8
        sub edx, eax
        mov eax, dword ptr ds : [ecx+4]
        sub eax, esi
        inc eax
        cmp eax, edx
        jbe public_6f516e0
        public_6f516f2 : nop
        mov ebp, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+8]
        add ebp, edx
        lea edx, ss:[esp+0x30]
        mov eax, 1
        push edx
        mov dword ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebp
        call public_6f53ab0
        cmp eax, esi
        je public_6f5172f
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, eax
        inc eax
        cmp ecx, edi
        mov dword ptr ss : [esp+0x48], eax
        jl public_6f516bd
        public_6f5172f : nop
        cmp dword ptr ss : [esp+0x48], edi
        setne byte ptr ss : [esp+0x48]
        jmp public_6f51882
        public_6f5173d : nop
        mov ebp, 1
        mov dword ptr ss : [esp+0x18], eax
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6f51765
        public_6f51761 : nop
        mov eax, dword ptr ss : [esp+0x28]
        public_6f51765 : nop
        mov edx, dword ptr ss : [esp+0x18]
        add eax, edx
        cdq 
        idiv edi
        mov eax, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [ecx+4]
        sub eax, dword ptr ds : [ecx]
        inc eax
        cmp eax, edx
        ja public_6f51792
        nop 
        public_6f51780 : nop
        mov esi, dword ptr ds : [ecx+8]
        add ecx, 8
        sub edx, eax
        mov eax, dword ptr ds : [ecx+4]
        sub eax, esi
        inc eax
        cmp eax, edx
        jbe public_6f51780
        public_6f51792 : nop
        mov ebx, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+8]
        add ebx, edx
        lea edx, ss:[esp+0x30]
        mov eax, 1
        push edx
        mov dword ptr ss : [esp+0x3C], 1
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], eax
        call public_6f53ab0
        cmp eax, esi
        je public_6f517cf
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, eax
        inc eax
        cmp ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        jl public_6f51761
        public_6f517cf : nop
        cmp dword ptr ss : [esp+0x18], edi
        setne byte ptr ss : [esp+0x48]
        jmp public_6f51882
        public_6f517dd : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_6f51828
        call dword ptr ds : [public_6fb3370]
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, dword ptr ds : [edx]
        sar eax, 0xF
        inc ecx
        cmp ecx, eax
        ja public_6f51822
        nop 
        lea esp, ss:[esp]
        public_6f51810 : nop
        mov esi, dword ptr ds : [edx+8]
        add edx, 8
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, esi
        inc ecx
        cmp ecx, eax
        jbe public_6f51810
        public_6f51822 : nop
        mov ebx, dword ptr ds : [edx]
        add ebx, eax
        jmp public_6f5182d
        public_6f51828 : nop
        mov ebx, 1
        public_6f5182d : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        je public_6f51878
        call dword ptr ds : [public_6fb3370]
        imul eax, edi
        mov ecx, dword ptr ss : [esp+0x18]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        mov edx, dword ptr ds : [ecx+0x34]
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, dword ptr ds : [edx]
        sar eax, 0xF
        inc ecx
        cmp ecx, eax
        ja public_6f51872
        nop 
        lea esp, ss:[esp]
        public_6f51860 : nop
        mov ebp, dword ptr ds : [edx+8]
        add edx, 8
        sub eax, ecx
        mov ecx, dword ptr ds : [edx+4]
        sub ecx, ebp
        inc ecx
        cmp ecx, eax
        jbe public_6f51860
        public_6f51872 : nop
        mov ebp, dword ptr ds : [edx]
        add ebp, eax
        jmp public_6f5187d
        public_6f51878 : nop
        mov ebx, 1
        public_6f5187d : nop
        mov byte ptr ss : [esp+0x48], 0
        public_6f51882 : nop
        mov al, byte ptr ss : [esp+0x4C]
        test al, al
        je public_6f518fa
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x38], 1
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebp
        je public_6f518c8
        public_6f518a6 : nop
        lea edx, ss:[esp+0x30]
        push edx
        push esi
        call public_6f55310
        add esp, 8
        test al, al
        jne public_6f518d5
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        add esi, 0xC
        cmp esi, ecx
        jne public_6f518a6
        mov ecx, eax
        public_6f518c8 : nop
        mov esi, dword ptr ds : [ecx+8]
        public_6f518cb : nop
        cmp esi, dword ptr ds : [ecx+8]
        je public_6f518db
        inc dword ptr ds : [esi+8]
        jmp public_6f518fa
        public_6f518d5 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_6f518cb
        public_6f518db : nop
        lea edx, ss:[esp+0x30]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x40], 1
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], ebp
        call public_6f52ff0
        public_6f518fa : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_6f51904
        mov dword ptr ds : [eax], ebx
        public_6f51904 : nop
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        je public_6f5190e
        mov dword ptr ds : [eax], ebp
        public_6f5190e : nop
        mov al, byte ptr ss : [esp+0x48]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x2C
        ret 0x10
        UNREACHABLE_TRAP(0x6f51520)
    }
}

#undef public_6f51539
#undef public_6f51540
#undef public_6f51575
#undef public_6f5158a
#undef public_6f515d3
#undef public_6f515e0
#undef public_6f51614
#undef public_6f51664
#undef public_6f5167f
#undef public_6f51683
#undef public_6f51691
#undef public_6f516bd
#undef public_6f516c1
#undef public_6f516e0
#undef public_6f516f2
#undef public_6f5172f
#undef public_6f5173d
#undef public_6f51761
#undef public_6f51765
#undef public_6f51780
#undef public_6f51792
#undef public_6f517cf
#undef public_6f517dd
#undef public_6f51810
#undef public_6f51822
#undef public_6f51828
#undef public_6f5182d
#undef public_6f51860
#undef public_6f51872
#undef public_6f51878
#undef public_6f5187d
#undef public_6f51882
#undef public_6f518a6
#undef public_6f518c8
#undef public_6f518cb
#undef public_6f518d5
#undef public_6f518db
#undef public_6f518fa
#undef public_6f51904
#undef public_6f5190e
