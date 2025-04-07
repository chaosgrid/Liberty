#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628be60);
CLANG_FORWARD_PROC_SYMBOL(public_6344070);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6345460);
CLANG_FORWARD_PROC_SYMBOL(public_6346dd0);
CLANG_FORWARD_PROC_SYMBOL(public_63494f0);
CLANG_FORWARD_PROC_SYMBOL(public_63495c0);
CLANG_FORWARD_PROC_SYMBOL(public_63495e0);
CLANG_FORWARD_PROC_SYMBOL(public_63496a0);
CLANG_FORWARD_PROC_SYMBOL(public_6350bc0);
CLANG_FORWARD_PROC_SYMBOL(public_635a9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63496f0 _public_63496f0
#define public_6349792 _public_6349792
#define public_634987d _public_634987d
#define public_634989e _public_634989e
#define public_63498e7 _public_63498e7
#define public_63498eb _public_63498eb
#define public_63498fa _public_63498fa
#define public_634990f _public_634990f
#define public_634991c _public_634991c
#define public_6349932 _public_6349932
#define public_6349945 _public_6349945
#define public_634995b _public_634995b
#define public_6349964 _public_6349964
#define public_6349973 _public_6349973
#define public_6349981 _public_6349981
#define public_6349984 _public_6349984
#define public_6349992 _public_6349992

PROC_DECLARE(0x63496a0, internal_63496a0, public_63496a0);
extern "C" NAKED register_t __cdecl internal_63496a0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, dword ptr ds : [eax+0xA4]
        inc word ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ecx+0xF8]
        xor eax, eax
        mov ax, word ptr ds : [edi+0x1E]
        xor ebx, ebx
        mov bx, word ptr ds : [edi+0xE]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ecx+0xFC]
        dec ebx
        cmp ebx, 1
        mov dword ptr ss : [esp+0x20], eax
        jl public_6349792
        public_63496f0 : nop
        mov ecx, dword ptr ds : [edi+0x10]
        fld dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [ecx+ebx*4]
        fsub dword ptr ds : [esi+0x68]
        lea edx, ds:[esi+0xF4]
        push edx
        lea ecx, ds:[esi+0xE4]
        fadd dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+0x6C]
        fstp dword ptr ss : [esp+0x18]
        call public_6350bc0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        lea ecx, ds:[esi+0xC4]
        push ecx
        lea edx, ds:[esi+0xB4]
        push edx
        lea ecx, ds:[esi+0x124]
        call public_628be60
        mov ecx, esi
        call public_6346dd0
        fld dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [esi+0x60]
        fld dword ptr ds : [esi+0xA4]
        and eax, 0xFFFF00FF
        fld st(0)
        mov dword ptr ds : [esi+0x60], eax
        fmul st, st(1)
        mov word ptr ds : [esi+0x64], 0
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsubr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fstp st(0)
        or ebp, edx
        dec ebx
        fstp st(0)
        cmp ebx, 1
        fstp st(0)
        jge public_63496f0
        public_6349792 : nop
        mov eax, dword ptr ds : [edi+0x10]
        fld dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x68]
        lea ecx, ds:[esi+0xF4]
        push ecx
        lea ecx, ds:[esi+0xE4]
        fadd dword ptr ss : [esp+0x24]
        fsub dword ptr ds : [esi+0x6C]
        fstp dword ptr ss : [esp+0x18]
        call public_6350bc0
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        lea eax, ds:[esi+0xC4]
        push eax
        lea ecx, ds:[esi+0xB4]
        push ecx
        lea ecx, ds:[esi+0x124]
        call public_628be60
        mov ecx, esi
        call public_6346dd0
        fld dword ptr ds : [esi+0xAC]
        fld dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [esi+0x60]
        fld dword ptr ds : [esi+0xA4]
        and ecx, 0xFFFF00FF
        fld st(0)
        xor ebx, ebx
        fmul st, st(1)
        mov dword ptr ds : [esi+0x60], ecx
        fld st(2)
        mov word ptr ds : [esi+0x64], bx
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsubr dword ptr ds : [public_63a53d0]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        or edx, ebp
        fstp st(0)
        fstp st(0)
        fstp st(0)
        jge public_634987d
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x28]
        and eax, 0xFFFFF7FF
        or eax, 0x400
        mov dword ptr ds : [edi], eax
        mov esi, dword ptr ds : [ecx+8]
        dec word ptr ds : [esi+0x118]
        cmp word ptr ds : [esi+0x118], bx
        jne public_63498e7
        call public_635a9e0
        fmul dword ptr ds : [public_63a549c]
        call public_6391dae
        mov edx, 0xF
        mov dword ptr ss : [esp+0x10], 1
        sub edx, eax
        mov word ptr ds : [esi+0x118], dx
        jmp public_63498eb
        public_634987d : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, ecx
        shl eax, 0x14
        sar eax, 0x12
        xor eax, ecx
        and eax, 0x3000
        xor eax, ecx
        test ah, 0x30
        mov dword ptr ds : [edi], eax
        je public_634989e
        mov ecx, edi
        call public_63494f0
        public_634989e : nop
        mov edx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x28]
        and edx, 0xFFFFF3FF
        mov dword ptr ds : [edi], edx
        mov esi, dword ptr ds : [eax+8]
        dec word ptr ds : [esi+0x118]
        cmp word ptr ds : [esi+0x118], bx
        jne public_63498e7
        call public_635a9e0
        fmul dword ptr ds : [public_63a549c]
        call public_6391dae
        mov ecx, 0xF
        mov dword ptr ss : [esp+0x10], 1
        sub ecx, eax
        mov word ptr ds : [esi+0x118], cx
        jmp public_63498eb
        public_63498e7 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_63498eb : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edx-1]
        cmp esi, ebx
        jl public_634990f
        mov ebx, dword ptr ss : [esp+0x28]
        public_63498fa : nop
        mov eax, dword ptr ds : [edi+0x20]
        mov eax, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx]
        add eax, 4
        push eax
        push ebx
        call dword ptr ds : [edx+0x10]
        dec esi
        jns public_63498fa
        public_634990f : nop
        xor ebx, ebx
        mov bx, word ptr ds : [edi+0xE]
        dec ebx
        js public_6349945
        mov esi, dword ptr ss : [esp+0x2C]
        public_634991c : nop
        mov cx, word ptr ds : [esi+2]
        cmp cx, word ptr ds : [esi]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebp, dword ptr ds : [eax+ebx*4]
        jb public_6349932
        mov ecx, esi
        call public_63441a0
        public_6349932 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edx, edx
        mov dx, word ptr ds : [esi+2]
        mov dword ptr ds : [eax+edx*4], ebp
        inc word ptr ds : [esi+2]
        dec ebx
        jns public_634991c
        public_6349945 : nop
        cmp dword ptr ss : [esp+0x10], 1
        jne public_634995b
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [ecx+8]
        push edx
        mov ecx, edi
        call public_63495e0
        public_634995b : nop
        xor ebp, ebp
        mov bp, word ptr ds : [edi+0xE]
        dec ebp
        js public_6349984
        public_6349964 : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ebx, dword ptr ds : [eax+ebp*4]
        xor esi, esi
        mov si, word ptr ds : [ebx+0x52]
        dec esi
        js public_6349981
        public_6349973 : nop
        mov ecx, dword ptr ds : [ebx+0x54]
        mov ecx, dword ptr ds : [ecx+esi*4]
        call public_6345460
        dec esi
        jns public_6349973
        public_6349981 : nop
        dec ebp
        jns public_6349964
        public_6349984 : nop
        mov eax, dword ptr ds : [edi]
        test ah, 3
        je public_6349992
        mov ecx, edi
        call public_63495c0
        public_6349992 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [eax+0xA4]
        dec word ptr ds : [ecx+0x10]
        call public_6344070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x63496a0)
    }
}

#undef public_63496f0
#undef public_6349792
#undef public_634987d
#undef public_634989e
#undef public_63498e7
#undef public_63498eb
#undef public_63498fa
#undef public_634990f
#undef public_634991c
#undef public_6349932
#undef public_6349945
#undef public_634995b
#undef public_6349964
#undef public_6349973
#undef public_6349981
#undef public_6349984
#undef public_6349992
