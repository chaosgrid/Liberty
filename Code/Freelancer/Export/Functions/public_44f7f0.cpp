#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_412070);
CLANG_FORWARD_PROC_SYMBOL(public_44f500);
CLANG_FORWARD_PROC_SYMBOL(public_44f7f0);

#define public_44f849 _public_44f849
#define public_44f8bd _public_44f8bd
#define public_44f8d0 _public_44f8d0
#define public_44f8fd _public_44f8fd
#define public_44f905 _public_44f905
#define public_44f939 _public_44f939
#define public_44f93d _public_44f93d

PROC_DECLARE(0x44f7f0, internal_44f7f0, public_44f7f0);
extern "C" NAKED register_t __cdecl internal_44f7f0()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x3C]
        test eax, eax
        je public_44f939
        mov cl, byte ptr ds : [esi+0x5F]
        test cl, cl
        jne public_44f905
        mov cl, byte ptr ds : [esi+0x44]
        test cl, cl
        jne public_44f8d0
        push edi
        mov ecx, esi
        call public_44f500
        mov edi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [ecx]
        add eax, edi
        push eax
        push ecx
        call dword ptr ds : [edx+0x68]
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov cl, byte ptr ds : [esi+0x54]
        test cl, cl
        pop edi
        jne public_44f849
        cmp eax, dword ptr ds : [esi+0x40]
        jb public_44f849
        mov byte ptr ds : [esi+0x5F], 1
        public_44f849 : nop
        mov cl, byte ptr ds : [esi+0x5D]
        test cl, cl
        je public_44f905
        mov cl, byte ptr ds : [esi+0x5E]
        test cl, cl
        jne public_44f905
        mov edx, dword ptr ds : [esi+0x40]
        sub edx, eax
        mov dword ptr ss : [esp+4], edx
        mov dword ptr ss : [esp+8], 0
        fild qword ptr ss : [esp+4]
        fmul qword ptr ds : [public_5c75f8]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_61650c]
        fnstsw ax
        test ah, 0x41
        jp public_44f905
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_44f8bd
        fld dword ptr ss : [esp+0x10]
        push ecx
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp]
        push 0x3F800000
        call public_412050
        add esp, 8
        mov byte ptr ds : [esi+0x5E], 1
        jmp public_44f905
        public_44f8bd : nop
        push 0x3F800000
        call public_412070
        add esp, 4
        mov byte ptr ds : [esi+0x5E], 1
        jmp public_44f905
        public_44f8d0 : nop
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ds : [esi+0x40]
        sub ecx, eax
        mov eax, dword ptr ds : [esi+0x3C]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x68]
        mov al, byte ptr ds : [esi+0x5D]
        test al, al
        je public_44f8fd
        push 0x3F800000
        call public_412070
        add esp, 4
        mov byte ptr ds : [esi+0x5E], 1
        public_44f8fd : nop
        mov byte ptr ds : [esi+0x5F], 1
        mov byte ptr ds : [esi+0x44], 0
        public_44f905 : nop
        mov al, byte ptr ds : [esi+0x5F]
        test al, al
        je public_44f93d
        mov eax, dword ptr ds : [esi+0x3C]
        mov ecx, dword ptr ds : [eax]
        push 0x64
        push eax
        call dword ptr ds : [ecx+0x68]
        mov al, byte ptr ds : [esi+0x5D]
        test al, al
        je public_44f93d
        push 0x3F800000
        call public_412070
        mov al, byte ptr ds : [esi+0x5F]
        add esp, 4
        mov byte ptr ds : [esi+0x5E], 1
        pop esi
        add esp, 8
        ret 4
        public_44f939 : nop
        mov byte ptr ds : [esi+0x5F], 1
        public_44f93d : nop
        mov al, byte ptr ds : [esi+0x5F]
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x44f7f0)
    }
}

#undef public_44f849
#undef public_44f8bd
#undef public_44f8d0
#undef public_44f8fd
#undef public_44f905
#undef public_44f939
#undef public_44f93d
