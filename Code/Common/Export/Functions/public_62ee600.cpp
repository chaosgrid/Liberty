#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b24a0);
CLANG_FORWARD_PROC_SYMBOL(public_62ee600);

#define public_62ee640 _public_62ee640
#define public_62ee650 _public_62ee650
#define public_62ee670 _public_62ee670
#define public_62ee695 _public_62ee695
#define public_62ee6bc _public_62ee6bc
#define public_62ee6e5 _public_62ee6e5
#define public_62ee702 _public_62ee702
#define public_62ee704 _public_62ee704
#define public_62ee73a _public_62ee73a
#define public_62ee7c2 _public_62ee7c2
#define public_62ee7c6 _public_62ee7c6
#define public_62ee7e6 _public_62ee7e6
#define public_62ee809 _public_62ee809
#define public_62ee822 _public_62ee822
#define public_62ee895 _public_62ee895
#define public_62ee89d _public_62ee89d
#define public_62ee8a5 _public_62ee8a5
#define public_62ee8b8 _public_62ee8b8
#define public_62ee8e6 _public_62ee8e6
#define public_62ee8f7 _public_62ee8f7
#define public_62ee916 _public_62ee916
#define public_62ee918 _public_62ee918
#define public_62ee926 _public_62ee926

PROC_DECLARE(0x62ee600, internal_62ee600, public_62ee600);
extern "C" NAKED register_t __cdecl internal_62ee600()
{
    __asm
    {
        sub esp, 0x70
        mov eax, dword ptr ss : [esp+0x80]
        push ebx
        mov dword ptr ds : [eax], 0xF
        mov eax, dword ptr ds : [ecx+4]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+0x1834]
        add eax, 0x1834
        push edi
        xor ebp, ebp
        xor edx, edx
        xor edi, edi
        cmp esi, 0xC
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x28], edx
        je public_62ee650
        lea esp, ss:[esp]
        public_62ee640 : nop
        mov esi, dword ptr ds : [eax+0xC]
        add eax, 0xC
        inc edx
        cmp esi, 0xC
        jne public_62ee640
        mov dword ptr ss : [esp+0x28], edx
        public_62ee650 : nop
        cmp edx, edi
        mov byte ptr ss : [esp+0x13], 0
        mov dword ptr ss : [esp+0x2C], edi
        jle public_62ee809
        mov esi, dword ptr ss : [esp+0x88]
        mov dword ptr ss : [esp+0x30], edi
        lea esp, ss:[esp]
        public_62ee670 : nop
        mov eax, dword ptr ds : [ecx+4]
        lea edi, ds:[edi+eax+0x1834]
        mov eax, dword ptr ds : [edi]
        mov eax, dword ptr ds : [eax*4+public_63a0848]
        mov dword ptr ss : [esp+0x20], eax
        xor eax, eax
        test esi, esi
        mov dword ptr ss : [esp+0x24], eax
        jle public_62ee7e6
        public_62ee695 : nop
        mov ecx, dword ptr ss : [esp+0x84]
        mov esi, dword ptr ds : [ecx+eax*4]
        mov al, byte ptr ds : [esi+0x7D]
        test al, al
        jne public_62ee6bc
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+8]
        push eax
        call dword ptr ds : [edx+0x88]
        mov byte ptr ds : [esi+0x7D], 1
        public_62ee6bc : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x20]
        test ecx, edx
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        setne bl
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62ee6e5
        test dword ptr ss : [esp+0x20], 0x30000
        setne bl
        public_62ee6e5 : nop
        test bl, bl
        je public_62ee7c2
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+4]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ee702
        lea ecx, ds:[eax-8]
        jmp public_62ee704
        public_62ee702 : nop
        xor ecx, ecx
        public_62ee704 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x3C], eax
        mov al, byte ptr ds : [esi+0x7E]
        test al, al
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        jne public_62ee73a
        mov ecx, dword ptr ds : [esi+0x84]
        lea eax, ds:[esi+0xC]
        push eax
        lea eax, ds:[esi+0x18]
        mov byte ptr ds : [esi+0x7E], 1
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x2C]
        public_62ee73a : nop
        fld dword ptr ds : [esi+0xC]
        mov edx, 0x5F3759DF
        fsub dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ss : [esp+0x3C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fst dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fcomp dword ptr ds : [edi+4]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62ee7c6
        mov ecx, dword ptr ss : [esp+0x90]
        mov dword ptr ss : [esp+ebp*4+0x40], esi
        mov eax, dword ptr ds : [edi+8]
        inc ebp
        mov dword ptr ss : [esp+0x14], ebp
        mov byte ptr ss : [esp+0x13], 1
        mov dword ptr ds : [ecx], eax
        jmp public_62ee7c6
        public_62ee7c2 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_62ee7c6 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x88]
        inc eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x24], eax
        jl public_62ee695
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        public_62ee7e6 : nop
        cmp byte ptr ss : [esp+0x13], 1
        je public_62ee809
        mov eax, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ss : [esp+0x30]
        inc eax
        add edi, 0xC
        cmp eax, edx
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], edi
        jl public_62ee670
        public_62ee809 : nop
        xor edi, edi
        test ebp, ebp
        mov dword ptr ss : [esp+0x90], 0xFFFFFFFF
        jle public_62ee926
        lea esi, ss:[esp+0x40]
        public_62ee822 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xBC]
        test al, al
        je public_62ee8a5
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62ee8a5
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62ee8a5
        mov ecx, eax
        call public_62b24a0
        mov ebx, eax
        cmp ebx, dword ptr ds : [public_63ec758]
        jle public_62ee89d
        cmp ebp, 1
        jle public_62ee895
        lea edx, ds:[edi+1]
        mov eax, ebp
        sub eax, edx
        shl eax, 2
        push eax
        lea ecx, ds:[esi+4]
        push ecx
        push esi
        call dword ptr ds : [public_6399330]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        dec ebp
        mov byte ptr ds : [edx+0x69], 1
        jmp public_62ee89d
        public_62ee895 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov byte ptr ds : [eax+0x68], 1
        public_62ee89d : nop
        cmp ebx, dword ptr ds : [public_63ec754]
        jl public_62ee8b8
        public_62ee8a5 : nop
        inc edi
        add esi, 4
        cmp edi, ebp
        jl public_62ee822
        mov edi, dword ptr ss : [esp+0x90]
        public_62ee8b8 : nop
        test ebp, ebp
        jle public_62ee926
        call dword ptr ds : [public_6399308]
        imul eax, ebp
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        cmp edi, 0xFFFFFFFF
        je public_62ee8e6
        mov eax, edi
        mov eax, dword ptr ss : [esp+eax*4+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x70
        ret 0x10
        public_62ee8e6 : nop
        mov edx, dword ptr ss : [esp+0x8C]
        test edx, edx
        je public_62ee918
        xor ecx, ecx
        test ebp, ebp
        jle public_62ee918
        public_62ee8f7 : nop
        mov esi, dword ptr ss : [esp+ecx*4+0x40]
        cmp dword ptr ds : [esi+0x84], edx
        je public_62ee916
        inc ecx
        cmp ecx, ebp
        jl public_62ee8f7
        mov eax, dword ptr ss : [esp+eax*4+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x70
        ret 0x10
        public_62ee916 : nop
        mov eax, ecx
        public_62ee918 : nop
        mov eax, dword ptr ss : [esp+eax*4+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x70
        ret 0x10
        public_62ee926 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x70
        ret 0x10
        UNREACHABLE_TRAP(0x62ee600)
    }
}

#undef public_62ee640
#undef public_62ee650
#undef public_62ee670
#undef public_62ee695
#undef public_62ee6bc
#undef public_62ee6e5
#undef public_62ee702
#undef public_62ee704
#undef public_62ee73a
#undef public_62ee7c2
#undef public_62ee7c6
#undef public_62ee7e6
#undef public_62ee809
#undef public_62ee822
#undef public_62ee895
#undef public_62ee89d
#undef public_62ee8a5
#undef public_62ee8b8
#undef public_62ee8e6
#undef public_62ee8f7
#undef public_62ee916
#undef public_62ee918
#undef public_62ee926
