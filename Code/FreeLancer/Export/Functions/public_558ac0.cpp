#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412030);
CLANG_FORWARD_PROC_SYMBOL(public_412040);
CLANG_FORWARD_PROC_SYMBOL(public_412360);
CLANG_FORWARD_PROC_SYMBOL(public_41a140);
CLANG_FORWARD_PROC_SYMBOL(public_41a400);
CLANG_FORWARD_PROC_SYMBOL(public_41a410);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_438c00);
CLANG_FORWARD_PROC_SYMBOL(public_438c90);
CLANG_FORWARD_PROC_SYMBOL(public_439540);
CLANG_FORWARD_PROC_SYMBOL(public_44c4a0);
CLANG_FORWARD_PROC_SYMBOL(public_456650);
CLANG_FORWARD_PROC_SYMBOL(public_558ac0);
CLANG_FORWARD_PROC_SYMBOL(public_558f80);
CLANG_FORWARD_PROC_SYMBOL(public_5593c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_558b40 _public_558b40
#define public_558b54 _public_558b54
#define public_558b5f _public_558b5f
#define public_558be9 _public_558be9

PROC_DECLARE(0x558ac0, internal_558ac0, public_558ac0);
extern "C" NAKED register_t __cdecl internal_558ac0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push ecx
        fld dword ptr ds : [public_6799e0]
        push ebx
        fadd qword ptr ss : [ebp+8]
        push esi
        push edi
        sub esp, 8
        fst dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_5d3f50]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fld dword ptr ss : [esp+0x14]
        add esp, 8
        fld st(1)
        fmul qword ptr ds : [public_5c75f8]
        fsubp 
        fstp dword ptr ds : [public_6799e0]
        call public_5b7ec0
        push eax
        mov ecx, offset public_66d2d0
        call public_456650
        fld qword ptr ss : [ebp+8]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, offset public_668708
        mov ebx, dword ptr ss : [esp+0xC]
        push ebx
        call public_439540
        call public_5593c0
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_558b5f
        mov ebx, dword ptr ss : [ebp+0xC]
        lea esp, ss:[esp]
        public_558b40 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [ecx+4]
        test al, al
        jne public_558b54
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        call dword ptr ds : [eax+0x14]
        public_558b54 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_558b40
        mov ebx, dword ptr ss : [esp+0xC]
        public_558b5f : nop
        push ebx
        call public_438c90
        push eax
        call public_41a140
        push ebx
        call public_412360
        push ebx
        call public_558f80
        add esp, 0x10
        call public_41a410
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_558be9
        call public_41a400
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_558be9
        call public_412040
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_558be9
        call public_412030
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x44
        jp public_558be9
        call public_438c00
        test eax, eax
        je public_558be9
        mov ecx, eax
        call public_44c4a0
        test al, al
        jne public_558be9
        call public_41dd90
        test al, al
        jne public_558be9
        push 1
        call public_41dda0
        add esp, 4
        public_558be9 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x558ac0)
    }
}

#undef public_558b40
#undef public_558b54
#undef public_558b5f
#undef public_558be9
