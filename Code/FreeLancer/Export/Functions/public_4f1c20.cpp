#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_4f1c20);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4f1c3e _public_4f1c3e
#define public_4f1cb1 _public_4f1cb1
#define public_4f1cf7 _public_4f1cf7
#define public_4f1cf9 _public_4f1cf9
#define public_4f1d73 _public_4f1d73
#define public_4f1d95 _public_4f1d95

PROC_DECLARE(0x4f1c20, internal_4f1c20, public_4f1c20);
extern "C" NAKED register_t __cdecl internal_4f1c20()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        push edi
        mov ebp, ecx
        call public_54baf0
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], eax
        jne public_4f1c3e
        pop edi
        xor eax, eax
        pop ebp
        add esp, 0x20
        ret 
        public_4f1c3e : nop
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], 0x7F7FFFFF
        call public_40f130
        fild dword ptr ds : [public_610850]
        fld dword ptr ds : [public_5c75e0]
        mov eax, dword ptr ss : [ebp+0x36C]
        mov ecx, dword ptr ds : [eax+0x800]
        cmp ecx, edi
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fild dword ptr ds : [public_616840]
        fsub dword ptr ss : [esp+0xC]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fild dword ptr ds : [public_610854]
        fld dword ptr ds : [public_5c75e0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fild dword ptr ds : [public_616844]
        fsub dword ptr ss : [esp+0x10]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        jle public_4f1d95
        push ebx
        push esi
        mov dword ptr ss : [esp+0x10], edi
        public_4f1cb1 : nop
        mov ecx, dword ptr ds : [eax+edi*8]
        test ecx, ecx
        je public_4f1d73
        lea ebx, ds:[ecx-8]
        test ebx, ebx
        je public_4f1d73
        mov esi, dword ptr ss : [ebp+0x374]
        mov edx, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+edx+0x2D]
        add esi, edx
        test cl, cl
        je public_4f1d73
        test dword ptr ds : [esi], 0x10000
        je public_4f1d73
        mov eax, dword ptr ds : [eax+edi*8]
        test eax, eax
        je public_4f1cf7
        add eax, 0xFFFFFFF8
        jmp public_4f1cf9
        public_4f1cf7 : nop
        xor eax, eax
        public_4f1cf9 : nop
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_4f1d73
        fild dword ptr ds : [public_610850]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ss : [esp+0x14]
        fdiv st, st(1)
        fsubr dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [esp+0x18]
        fidiv dword ptr ds : [public_610854]
        fsubr dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x20]
        fdiv st, st(3)
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fadd dword ptr ds : [public_5d8f20]
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_4f1d73
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_4f1d73
        mov ecx, dword ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        public_4f1d73 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x36C]
        mov ecx, dword ptr ds : [eax+0x800]
        inc edi
        add edx, 0x34
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], edx
        jl public_4f1cb1
        pop esi
        pop ebx
        public_4f1d95 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop ebp
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x4f1c20)
    }
}

#undef public_4f1c3e
#undef public_4f1cb1
#undef public_4f1cf7
#undef public_4f1cf9
#undef public_4f1d73
#undef public_4f1d95
