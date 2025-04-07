#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);
CLANG_FORWARD_PROC_SYMBOL(public_629dc40);
CLANG_FORWARD_PROC_SYMBOL(public_629de50);
CLANG_FORWARD_PROC_SYMBOL(public_629e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_629dc67 _public_629dc67
#define public_629dc69 _public_629dc69
#define public_629dcb5 _public_629dcb5
#define public_629dd07 _public_629dd07
#define public_629dd09 _public_629dd09
#define public_629ddb5 _public_629ddb5
#define public_629de15 _public_629de15
#define public_629de2e _public_629de2e
#define public_629de40 _public_629de40

PROC_DECLARE(0x629dc40, internal_629dc40, public_629dc40);
extern "C" NAKED register_t __cdecl internal_629dc40()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        xor ebp, ebp
        cmp eax, ebp
        push edi
        je public_629de40
        mov eax, dword ptr ds : [esi+8]
        cmp eax, ebp
        lea ebx, ds:[esi+8]
        je public_629dc67
        add eax, 0xFFFFFF64
        jmp public_629dc69
        public_629dc67 : nop
        xor eax, eax
        public_629dc69 : nop
        mov ecx, dword ptr ds : [esi]
        push eax
        call public_629e4a0
        cmp eax, ebp
        jne public_629de15
        mov eax, dword ptr ds : [esi+4]
        dec eax
        je public_629dcb5
        dec eax
        jne public_629de40
        fld dword ptr ds : [esi+0x1C]
        fsub dword ptr ss : [esp+0x68]
        fst dword ptr ds : [esi+0x1C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_629de40
        mov ecx, dword ptr ds : [esi]
        push esi
        push 0x18
        call public_629b010
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        public_629dcb5 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ds:[eax+0x20]
        push ecx
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x38]
        push edx
        add ecx, 8
        call public_629de50
        fld dword ptr ss : [esp+0x60]
        fadd dword ptr ds : [esi+0x18]
        lea edi, ds:[esi+0x10]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ds : [edi]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, ebp
        je public_629dd07
        lea eax, ds:[ebx-0x9C]
        jmp public_629dd09
        public_629dd07 : nop
        xor eax, eax
        public_629dd09 : nop
        add eax, 0x2C
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [ecx+0xC]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        fsub dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [edx+0x74]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld st(1)
        fmul st, st(2)
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_629ddb5
        fsqrt 
        fdivp 
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fxch st(2)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fadd dword ptr ds : [edi]
        fstp dword ptr ds : [edi]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [edi+4]
        fstp dword ptr ds : [edi+4]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [edi+8]
        fstp dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        public_629ddb5 : nop
        fstp st(0)
        push esi
        fstp st(0)
        push 0x17
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x64]
        mov dword ptr ds : [edi], eax
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x68]
        mov dword ptr ds : [edi+4], edx
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi+8], eax
        call public_629b010
        mov dword ptr ds : [esi+4], 2
        mov ecx, dword ptr ds : [public_639d80c]
        pop edi
        mov dword ptr ds : [esi+0x1C], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        public_629de15 : nop
        mov ecx, dword ptr ds : [esi]
        push esi
        push 0x15
        mov dword ptr ds : [esi+0x20], eax
        call public_629b010
        cmp dword ptr ds : [ebx], ebp
        je public_629de2e
        push ebp
        mov ecx, ebx
        call public_6341610
        public_629de2e : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x18], ebp
        mov dword ptr ds : [esi+0x14], ebp
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x1C], ebp
        mov dword ptr ds : [esi+0x20], ebp
        public_629de40 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 4
        UNREACHABLE_TRAP(0x629dc40)
    }
}

#undef public_629dc67
#undef public_629dc69
#undef public_629dcb5
#undef public_629dd07
#undef public_629dd09
#undef public_629ddb5
#undef public_629de15
#undef public_629de2e
#undef public_629de40
