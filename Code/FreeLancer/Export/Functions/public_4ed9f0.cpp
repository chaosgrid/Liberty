#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_4ceeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4cef30);
CLANG_FORWARD_PROC_SYMBOL(public_4ed180);
CLANG_FORWARD_PROC_SYMBOL(public_4ed9f0);
CLANG_FORWARD_PROC_SYMBOL(public_4edeb0);
CLANG_FORWARD_PROC_SYMBOL(public_4ee100);
CLANG_FORWARD_PROC_SYMBOL(public_4f1c20);
CLANG_FORWARD_PROC_SYMBOL(public_51dd20);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_4eda7e _public_4eda7e
#define public_4edaa4 _public_4edaa4
#define public_4edac1 _public_4edac1
#define public_4edb43 _public_4edb43
#define public_4edb45 _public_4edb45
#define public_4edbc9 _public_4edbc9
#define public_4edbe7 _public_4edbe7
#define public_4edbfe _public_4edbfe
#define public_4edc09 _public_4edc09
#define public_4edc0c _public_4edc0c
#define public_4edc32 _public_4edc32
#define public_4edc34 _public_4edc34
#define public_4edc6b _public_4edc6b
#define public_4edc6d _public_4edc6d
#define public_4edcfd _public_4edcfd
#define public_4edd59 _public_4edd59
#define public_4eddad _public_4eddad
#define public_4ede28 _public_4ede28
#define public_4ede3c _public_4ede3c
#define public_4ede6d _public_4ede6d
#define public_4ede9e _public_4ede9e

PROC_DECLARE(0x4ed9f0, internal_4ed9f0, public_4ed9f0);
extern "C" NAKED register_t __cdecl internal_4ed9f0()
{
    __asm
    {
        sub esp, 0x28
        mov eax, dword ptr ds : [public_5c6368]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov cx, word ptr ds : [eax]
        lea ebx, ds:[esi+0x446]
        lea ebp, ds:[esi+0x448]
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov word ptr ds : [ebx], cx
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [ebp], 0
        call public_54baf0
        test eax, eax
        je public_4ede9e
        add eax, 0xC
        test eax, eax
        je public_4ede9e
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_4ede9e
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        jne public_4ede9e
        mov eax, dword ptr ds : [public_674b74]
        test eax, eax
        je public_4eda7e
        mov dword ptr ss : [ebp], eax
        mov eax, dword ptr ds : [public_5c6368]
        mov cx, word ptr ds : [eax]
        pop edi
        pop esi
        pop ebp
        mov word ptr ds : [ebx], cx
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 4
        public_4eda7e : nop
        mov eax, dword ptr ds : [public_674b78]
        lea ecx, ds:[esi+0x380]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_4ede6d
        test eax, eax
        je public_4edaa4
        mov cl, byte ptr ds : [eax+0x31]
        test cl, cl
        jne public_4ede6d
        public_4edaa4 : nop
        lea edi, ds:[esi+0x3B4]
        cmp eax, edi
        je public_4ede3c
        test eax, eax
        je public_4edac1
        mov cl, byte ptr ds : [eax+0x30]
        test cl, cl
        jne public_4ede3c
        public_4edac1 : nop
        mov ecx, esi
        call public_4ed180
        mov al, byte ptr ds : [esi+0x3AD]
        test al, al
        je public_4edb45
        fild dword ptr ds : [public_616840]
        fld dword ptr ds : [esi+0x384]
        fsub dword ptr ds : [esi+0x3A0]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4edb43
        fld dword ptr ds : [esi+0x3A0]
        fadd dword ptr ds : [esi+0x384]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4edb45
        fild dword ptr ds : [public_616844]
        fld dword ptr ds : [esi+0x388]
        fsub dword ptr ds : [esi+0x3A0]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4edb43
        fld dword ptr ds : [esi+0x3A0]
        fadd dword ptr ds : [esi+0x388]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4edb45
        mov ecx, dword ptr ss : [esp+0x10]
        jmp public_4edbc9
        public_4edb43 : nop
        fstp st(0)
        public_4edb45 : nop
        mov al, byte ptr ds : [esi+0x3E1]
        test al, al
        je public_4edc34
        fild dword ptr ds : [public_616840]
        fld dword ptr ds : [esi+0x3B8]
        fsub dword ptr ds : [esi+0x3D4]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4edc32
        fld dword ptr ds : [esi+0x3D4]
        fadd dword ptr ds : [esi+0x3B8]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4edc34
        fild dword ptr ds : [public_616844]
        fld dword ptr ds : [esi+0x3BC]
        fsub dword ptr ds : [esi+0x3D4]
        fld st(1)
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_4edc32
        fld dword ptr ds : [esi+0x3BC]
        fadd dword ptr ds : [esi+0x3D4]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jp public_4edc34
        mov ecx, edi
        public_4edbc9 : nop
        test ecx, ecx
        je public_4edc34
        mov eax, dword ptr ds : [esi+0x3E8]
        test eax, eax
        jl public_4edbe7
        fld dword ptr ds : [esi+0x3EC]
        fcomp dword ptr ds : [ecx+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_4edc34
        public_4edbe7 : nop
        cmp ecx, dword ptr ss : [esp+0x10]
        mov bl, byte ptr ss : [esp+0x3C]
        jne public_4edbfe
        test bl, bl
        jne public_4edc0c
        push 0
        call public_4ceeb0
        jmp public_4edc09
        public_4edbfe : nop
        test bl, bl
        jne public_4edc0c
        push 0
        call public_4cef30
        public_4edc09 : nop
        add esp, 4
        public_4edc0c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp], 0
        mov edx, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [edx]
        pop edi
        pop esi
        test bl, bl
        pop ebp
        mov word ptr ds : [ecx], ax
        sete al
        pop ebx
        add esp, 0x28
        ret 4
        public_4edc32 : nop
        fstp st(0)
        public_4edc34 : nop
        mov eax, dword ptr ds : [esi+0x3E8]
        test eax, eax
        jl public_4edcfd
        mov edx, dword ptr ds : [esi+0x36C]
        lea ecx, ds:[edx+eax*8]
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_4edcfd
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4edcfd
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_4edc6b
        lea esi, ds:[ecx-8]
        jmp public_4edc6d
        public_4edc6b : nop
        xor esi, esi
        public_4edc6d : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [ebx], dx
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x150]
        mov esi, eax
        test esi, esi
        je public_4ede28
        mov ecx, dword ptr ds : [esi+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_4ede28
        mov edi, dword ptr ds : [public_5c64e0]
        mov ecx, esi
        call edi
        mov ecx, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_4ede28
        mov ecx, esi
        call edi
        mov eax, dword ptr ds : [eax]
        push 2
        push eax
        call public_5416c0
        add esp, 8
        test eax, eax
        je public_4ede28
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ss : [ebp]
        pop edi
        pop esi
        xor eax, eax
        test ecx, ecx
        pop ebp
        setne al
        pop ebx
        add esp, 0x28
        ret 4
        public_4edcfd : nop
        mov dword ptr ss : [esp+0x3C], 0x7F7FFFFF
        call public_40f130
        fild dword ptr ds : [public_616844]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        push 1
        push eax
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        lea ecx, ss:[esp+0x30]
        fild dword ptr ds : [public_616840]
        fstp dword ptr ss : [esp]
        push edi
        push ecx
        call public_51dd20
        add esp, 0x18
        push ebx
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, esi
        call public_4edeb0
        cmp dword ptr ss : [ebp], 0
        je public_4edd59
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x3C]
        jmp public_4eddad
        public_4edd59 : nop
        mov ecx, esi
        call public_4ee100
        mov ebx, eax
        test ebx, ebx
        je public_4eddad
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov ebp, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [ebp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [ebp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_4eddad : nop
        mov ecx, esi
        call public_4f1c20
        mov esi, eax
        test esi, esi
        je public_4ede28
        mov eax, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [edx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [edi+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [edi+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_4ede28
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
/*FIXUP push offset public_5d95f0 @0x4ede00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d95f0
        push 0x9AE
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5d95b0 @0x4ede13*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d95b0
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x4ede1d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4ede28 : nop
        mov ecx, dword ptr ss : [ebp]
        pop edi
        pop esi
        xor eax, eax
        test ecx, ecx
        pop ebp
        setne al
        pop ebx
        add esp, 0x28
        ret 4
        public_4ede3c : nop
        mov dword ptr ss : [ebp], 0
        mov edx, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [edx]
        mov word ptr ds : [ebx], ax
        mov al, byte ptr ss : [esp+0x3C]
        test al, al
        jne public_4ede9e
        push 0
        call public_4cef30
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 4
        public_4ede6d : nop
        mov al, byte ptr ss : [esp+0x3C]
        test al, al
        mov dword ptr ss : [ebp], 0
        mov ecx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [ebx], dx
        jne public_4ede9e
        push 0
        call public_4ceeb0
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x28
        ret 4
        public_4ede9e : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x28
        ret 4
        UNREACHABLE_TRAP(0x4ed9f0)
    }
}

#undef public_4eda7e
#undef public_4edaa4
#undef public_4edac1
#undef public_4edb43
#undef public_4edb45
#undef public_4edbc9
#undef public_4edbe7
#undef public_4edbfe
#undef public_4edc09
#undef public_4edc0c
#undef public_4edc32
#undef public_4edc34
#undef public_4edc6b
#undef public_4edc6d
#undef public_4edcfd
#undef public_4edd59
#undef public_4eddad
#undef public_4ede28
#undef public_4ede3c
#undef public_4ede6d
#undef public_4ede9e
