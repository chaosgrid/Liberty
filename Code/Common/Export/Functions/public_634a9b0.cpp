#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634a9b0);
CLANG_FORWARD_PROC_SYMBOL(public_635bb40);
CLANG_FORWARD_PROC_SYMBOL(public_635d3e0);

#define public_634a9c7 _public_634a9c7
#define public_634aab2 _public_634aab2
#define public_634aad2 _public_634aad2
#define public_634aae0 _public_634aae0
#define public_634aafa _public_634aafa
#define public_634ab25 _public_634ab25
#define public_634ab33 _public_634ab33
#define public_634ab4d _public_634ab4d
#define public_634ab4f _public_634ab4f

PROC_DECLARE(0x634a9b0, internal_634a9b0, public_634a9b0);
extern "C" NAKED register_t __cdecl internal_634a9b0()
{
    __asm
    {
        sub esp, 0x24
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push ebp
        mov ebp, dword ptr ss : [esp+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        push edi
        mov dword ptr ss : [esp+0x10], ecx
        public_634a9c7 : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x28], eax
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x2C], ecx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [esi+0x14]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_634ab4d
        fld dword ptr ds : [esi+0x14]
        xor edx, edx
        fmul dword ptr ds : [public_63a54b4]
        mov dl, byte ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x3C]
        fabs 
        mov dword ptr ss : [esp+0x44], edx
        fild dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x40]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634ab4f
        fld dword ptr ss : [esp+0x18]
        xor eax, eax
        mov al, byte ptr ds : [esi+0x19]
        fabs 
        mov dword ptr ss : [esp+0x44], eax
        fild dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x40]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634ab4f
        fld dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0x1A]
        fabs 
        mov dword ptr ss : [esp+0x44], ecx
        fild dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x40]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_634ab4f
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_634aab2
        lea edi, ds:[eax+esi]
        test edi, edi
        jne public_634aad2
        public_634aab2 : nop
        cmp dword ptr ds : [esi], 0
        je public_634aafa
        mov edx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push edx
        push ebp
        lea eax, ds:[esi+0x1C]
        push eax
        call public_634a9b0
        add esi, dword ptr ds : [esi]
        jmp public_634a9c7
        public_634aad2 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp ecx, dword ptr ds : [ebx]
        jl public_634aae0
        mov ecx, ebx
        call public_635d3e0
        public_634aae0 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+edx*4], edi
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0x24
        ret 0x10
        public_634aafa : nop
        mov edi, dword ptr ds : [esi+4]
        add edi, esi
        cmp word ptr ds : [edi+0xC], 2
        jne public_634ab25
        push ebp
        lea ecx, ds:[edi+0x10]
        push ecx
        push edi
        call public_635bb40
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        add esp, 0xC
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_634ab4f
        public_634ab25 : nop
        mov edx, dword ptr ds : [ebx+4]
        cmp edx, dword ptr ds : [ebx]
        jl public_634ab33
        mov ecx, ebx
        call public_635d3e0
        public_634ab33 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [ecx+eax*4], edi
        mov eax, dword ptr ds : [ebx+4]
        pop edi
        pop esi
        inc eax
        pop ebp
        mov dword ptr ds : [ebx+4], eax
        pop ebx
        add esp, 0x24
        ret 0x10
        public_634ab4d : nop
        fstp st(0)
        public_634ab4f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x24
        ret 0x10
        UNREACHABLE_TRAP(0x634a9b0)
    }
}

#undef public_634a9c7
#undef public_634aab2
#undef public_634aad2
#undef public_634aae0
#undef public_634aafa
#undef public_634ab25
#undef public_634ab33
#undef public_634ab4d
#undef public_634ab4f
