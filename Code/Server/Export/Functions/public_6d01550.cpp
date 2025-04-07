#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01550);
CLANG_FORWARD_PROC_SYMBOL(public_6d01860);
CLANG_FORWARD_PROC_SYMBOL(public_6d08a40);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d015b0 _public_6d015b0
#define public_6d015ce _public_6d015ce
#define public_6d015df _public_6d015df
#define public_6d0160a _public_6d0160a
#define public_6d016c9 _public_6d016c9
#define public_6d016d1 _public_6d016d1
#define public_6d01840 _public_6d01840
#define public_6d01850 _public_6d01850

PROC_DECLARE(0x6d01550, internal_6d01550, public_6d01550);
extern "C" NAKED register_t __cdecl internal_6d01550()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [esi+0xA8]
        fcomp dword ptr ds : [public_6d65188]
        xor ebx, ebx
        cmp eax, ebx
        fnstsw ax
        jne public_6d015df
        test ah, 0x44
        jnp public_6d01850
        fld dword ptr ds : [esi+0xAC]
        fsub dword ptr ss : [esp+0xA0]
        fst dword ptr ds : [esi+0xAC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6d01850
        cmp dword ptr ds : [esi+0xB0], ebx
        jle public_6d015ce
        lea esp, ss:[esp]
        public_6d015b0 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        call dword ptr ds : [public_6d645b0]
        fstp st(0)
        mov ecx, dword ptr ds : [esi+0xB0]
        dec ecx
        mov eax, ecx
        cmp eax, ebx
        mov dword ptr ds : [esi+0xB0], ecx
        jg public_6d015b0
        public_6d015ce : nop
        mov dword ptr ds : [esi+0xAC], ebx
        pop esi
        pop ebx
        add esp, 0x94
        ret 4
        public_6d015df : nop
        test ah, 0x44
        jnp public_6d0160a
        fld dword ptr ds : [esi+0xAC]
        fsub dword ptr ss : [esp+0xA0]
        fst dword ptr ds : [esi+0xAC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jp public_6d0160a
        mov dword ptr ds : [esi+0xAC], ebx
        public_6d0160a : nop
        fld dword ptr ds : [esi+0xAC]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jp public_6d01850
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [eax+0x2AC], 2
        jne public_6d01850
        mov ecx, dword ptr ds : [esi+0xA4]
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx]
        add edi, 8
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov byte ptr ss : [esp+0x94], 1
        mov byte ptr ss : [esp+0x95], bl
        call dword ptr ds : [public_6d642ec]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, edx
        and ecx, 0x3FFFFFFF
        inc edx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x2C], ecx
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_6d642fc]
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ds : [edi+0x10]
        fmul dword ptr ds : [eax+0x1C]
        add esp, 4
        mov ecx, eax
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x1C]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x30], eax
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ds : [edx+8]
        je public_6d016c9
        mov eax, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x34], eax
        jmp public_6d016d1
        public_6d016c9 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x34], ecx
        public_6d016d1 : nop
        mov ebp, dword ptr ds : [edi+0x14]
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x68]
        push eax
        lea ecx, ss:[esp+0x60]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x4C], ebp
        call public_6d01860
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul qword ptr ds : [public_6d656b0]
        fsub qword ptr ds : [public_6d656a8]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_6d64c7c]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_6d656b8]
        fld dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x78]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fmul qword ptr ds : [public_6d656b0]
        fsub qword ptr ds : [public_6d656a8]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0xA0]
        fxch 
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x88], edx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0xA0]
        mov eax, dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x8C], eax
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x90], ecx
        mov eax, dword ptr ds : [esi]
        push 1
        lea edx, ss:[esp+0x30]
        push edx
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [esi+0x28]
        push eax
        call public_6d08a40
        sub ebp, dword ptr ss : [esp+0x40]
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_6d645ac]
        cmp dword ptr ds : [edi+0x14], ebx
        jne public_6d01840
        inc dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0xA4]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+0xA8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0xA8], eax
        public_6d01840 : nop
        mov edx, dword ptr ds : [public_6d645a8]
        mov eax, dword ptr ds : [edx]
        pop edi
        mov dword ptr ds : [esi+0xAC], eax
        pop ebp
        public_6d01850 : nop
        pop esi
        pop ebx
        add esp, 0x94
        ret 4
        UNREACHABLE_TRAP(0x6d01550)
    }
}

#undef public_6d015b0
#undef public_6d015ce
#undef public_6d015df
#undef public_6d0160a
#undef public_6d016c9
#undef public_6d016d1
#undef public_6d01840
#undef public_6d01850
