#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425640);
CLANG_FORWARD_PROC_SYMBOL(public_54de10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_54de27 _public_54de27
#define public_54de68 _public_54de68
#define public_54deb1 _public_54deb1
#define public_54df18 _public_54df18
#define public_54df1a _public_54df1a
#define public_54df42 _public_54df42
#define public_54df44 _public_54df44
#define public_54df6c _public_54df6c
#define public_54df6e _public_54df6e
#define public_54df96 _public_54df96
#define public_54df98 _public_54df98
#define public_54dfc2 _public_54dfc2
#define public_54e004 _public_54e004
#define public_54e037 _public_54e037

PROC_DECLARE(0x54de10, internal_54de10, public_54de10);
extern "C" NAKED register_t __cdecl internal_54de10()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        push edi
        je public_54de27
        push eax
        call public_5b7e1d
        add esp, 4
        public_54de27 : nop
        mov al, byte ptr ds : [esi+0x7C]
        test al, al
        je public_54e037
        fild dword ptr ds : [esi+0x10]
        fmul dword ptr ds : [esi+0x74]
        call public_5b7ec0
        test eax, eax
        mov dword ptr ds : [esi+0x14], eax
        jg public_54de68
/*FIXUP push offset public_5e0b48 @0x54de44*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0b48
        push 0x297
/*FIXUP push offset public_5e0b08 @0x54de4e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0b08
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x54de58*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_54de68 : nop
        mov eax, dword ptr ds : [esi+0x14]
        shl eax, 5
        push ebx
        push eax
        call public_5b7e84
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [esi+0x24]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x18]
        xor ebx, ebx
        fild dword ptr ss : [esp+0x10]
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+0xC], ebx
        fdivr qword ptr ds : [public_5c89b8]
        fstp dword ptr ss : [esp+0x18]
        jle public_54dfc2
        push ebp
        mov ebp, dword ptr ds : [public_5c71dc]
        xor edi, edi
        public_54deb1 : nop
        mov eax, dword ptr ds : [esi+0xC]
        add eax, edi
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        call ebp
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5caeec]
        fadd dword ptr ds : [esi+0x24]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [edi+ecx+0xC]
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+edx+0x10], 0x3F800000
        mov eax, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+eax+0x14], 1
        call ebp
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5caeec]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 0x41
        jne public_54df18
        mov al, 1
        jmp public_54df1a
        public_54df18 : nop
        xor al, al
        public_54df1a : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+ecx+0x15], al
        call ebp
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5caeec]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 0x41
        jne public_54df42
        mov al, 1
        jmp public_54df44
        public_54df42 : nop
        xor al, al
        public_54df44 : nop
        mov edx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+edx+0x16], al
        call ebp
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5caeec]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 0x41
        jne public_54df6c
        mov al, 1
        jmp public_54df6e
        public_54df6c : nop
        xor al, al
        public_54df6e : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+ecx+0x17], al
        call ebp
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5caeec]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 0x41
        jne public_54df96
        mov al, 1
        jmp public_54df98
        public_54df96 : nop
        xor al, al
        public_54df98 : nop
        fild dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0xC]
        mov byte ptr ds : [edi+edx+0x18], al
        mov eax, dword ptr ds : [esi+0xC]
        fmul dword ptr ss : [esp+0x1C]
        inc ebx
        add edi, 0x20
        mov dword ptr ss : [esp+0x10], ebx
        fstp dword ptr ds : [edi+eax-4]
        mov eax, dword ptr ds : [esi+0x14]
        cmp ebx, eax
        jl public_54deb1
        pop ebp
        public_54dfc2 : nop
        fld dword ptr ds : [esi+8]
        pop ebx
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54e004
        fld dword ptr ds : [esi+0x78]
        fmul dword ptr ds : [esi+8]
        fld qword ptr ds : [public_5e0b00]
        fptan 
        fstp st(0)
        fld st(1)
        fmul st, st(1)
        fld qword ptr ds : [public_5c89b8]
        fsub st, st(2)
        fdivp 
        fstp st(1)
        fst dword ptr ds : [esi]
        fld st(0)
        fadd st, st(2)
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+0x30]
        fstp dword ptr ds : [esi+0x2C]
        fstp st(0)
        public_54e004 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test ecx, ecx
        je public_54e037
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edi, dword ptr ds : [eax]
        push 0
        call public_425640
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [edi+0xBC]
        test eax, eax
        je public_54e037
        mov dword ptr ds : [esi+0x20], 0
        public_54e037 : nop
        pop edi
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x54de10)
    }
}

#undef public_54de27
#undef public_54de68
#undef public_54deb1
#undef public_54df18
#undef public_54df1a
#undef public_54df42
#undef public_54df44
#undef public_54df6c
#undef public_54df6e
#undef public_54df96
#undef public_54df98
#undef public_54dfc2
#undef public_54e004
#undef public_54e037
