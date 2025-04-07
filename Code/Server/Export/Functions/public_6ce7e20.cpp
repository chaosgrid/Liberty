#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7930);
CLANG_FORWARD_PROC_SYMBOL(public_6ce7e20);
CLANG_FORWARD_PROC_SYMBOL(public_6cee9e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60529);

#define public_6ce7e68 _public_6ce7e68
#define public_6ce7e82 _public_6ce7e82
#define public_6ce7e84 _public_6ce7e84
#define public_6ce7edc _public_6ce7edc
#define public_6ce7ede _public_6ce7ede
#define public_6ce7f1f _public_6ce7f1f
#define public_6ce7f21 _public_6ce7f21
#define public_6ce7f43 _public_6ce7f43
#define public_6ce7f50 _public_6ce7f50
#define public_6ce7fa6 _public_6ce7fa6
#define public_6ce7faa _public_6ce7faa
#define public_6ce7fb1 _public_6ce7fb1
#define public_6ce7fc8 _public_6ce7fc8
#define public_6ce7fdd _public_6ce7fdd
#define public_6ce7ff0 _public_6ce7ff0
#define public_6ce8000 _public_6ce8000
#define public_6ce8030 _public_6ce8030
#define public_6ce8040 _public_6ce8040
#define public_6ce8053 _public_6ce8053

PROC_DECLARE(0x6ce7e20, internal_6ce7e20, public_6ce7e20);
extern "C" NAKED register_t __cdecl internal_6ce7e20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        push 0xFFFFFFFF
/*FIXUP push public_6d60529 @0x6ce7e28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60529
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        mov ebx, ecx
        push edi
        mov dword ptr ss : [esp+0x18], ebx
        call public_6cee9e0
        test al, al
        jne public_6ce7e68
        mov ecx, dword ptr ss : [esp+0x44]
        mov dword ptr fs : [0], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        public_6ce7e68 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        xor esi, esi
        cmp eax, esi
        je public_6ce7e82
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce7e84
        public_6ce7e82 : nop
        xor eax, eax
        public_6ce7e84 : nop
        mov cl, byte ptr ds : [eax+0x15C]
        test cl, cl
        je public_6ce7fdd
        call dword ptr ds : [public_6d64228]
        fstp qword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x28]
        call dword ptr ds : [public_6d64224]
        mov byte ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, esi
        mov dword ptr ss : [esp+0x4C], esi
        mov dword ptr ss : [esp+0x34], 0x1A
        je public_6ce7edc
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce7ede
        public_6ce7edc : nop
        xor eax, eax
        public_6ce7ede : nop
        mov ecx, eax
        call dword ptr ds : [public_6d641f8]
        fcomp qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 0x41
        jp public_6ce7f43
        fld qword ptr ss : [esp+0x18]
        fsub qword ptr ds : [ebx+0x20]
        fcomp qword ptr ds : [public_6d65530]
        fnstsw ax
        test ah, 0x41
        jne public_6ce7f43
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, esi
        je public_6ce7f1f
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        je public_6ce7f21
        public_6ce7f1f : nop
        xor eax, eax
        public_6ce7f21 : nop
        push esi
        mov ecx, eax
        call dword ptr ds : [public_6d641f0]
        mov eax, dword ptr ds : [public_6d6401c]
        push ecx
        xor ecx, ecx
        fstp dword ptr ss : [esp]
        mov cx, word ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d641ec]
        public_6ce7f43 : nop
        mov eax, dword ptr ds : [ebx+0x74]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6ce7fb1
        lea esp, ss:[esp]
        public_6ce7f50 : nop
        mov edx, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [edx+4]
        push esi
        call dword ptr ds : [public_6d641ac]
        add esp, 4
        test eax, eax
        je public_6ce7faa
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        test al, al
        je public_6ce7fa6
        mov eax, dword ptr ds : [edi+8]
        fld qword ptr ds : [eax+0x10]
        fld qword ptr ss : [esp+0x18]
        fsub st, st(1)
        fcomp qword ptr ds : [public_6d65530]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6ce7fa6
        mov edx, dword ptr ds : [esi]
        mov bx, word ptr ds : [esi+8]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_6d641ec]
        public_6ce7fa6 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        public_6ce7faa : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+0x74]
        jne public_6ce7f50
        public_6ce7fb1 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        test eax, eax
        je public_6ce7fc8
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x24]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x188]
        public_6ce7fc8 : nop
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call dword ptr ds : [public_6d64220]
        mov edi, dword ptr ss : [ebp+8]
        public_6ce7fdd : nop
        push edi
        mov ecx, ebx
        call public_6ce7930
        mov eax, dword ptr ds : [ebx+0x74]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ce8000
        mov edi, edi
        public_6ce7ff0 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+8]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x74]
        jne public_6ce7ff0
        public_6ce8000 : nop
        fld dword ptr ss : [ebp+8]
        fadd dword ptr ds : [ebx+0x6C]
        fst dword ptr ss : [esp+0x14]
        fst dword ptr ds : [ebx+0x6C]
        fcomp dword ptr ds : [public_6d651a4]
        fnstsw ax
        test ah, 0x41
        jne public_6ce8030
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x24C]
        mov dword ptr ds : [ebx+0x6C], 0
        public_6ce8030 : nop
        mov edi, dword ptr ds : [ebx+0x80]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6ce8053
        lea esp, ss:[esp]
        public_6ce8040 : nop
        mov edx, dword ptr ss : [ebp+8]
        push edx
        lea ecx, ds:[esi+8]
        call dword ptr ds : [public_6d6421c]
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6ce8040
        public_6ce8053 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x160]
        mov ecx, dword ptr ss : [esp+0x44]
        neg al
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        sbb eax, eax
        inc eax
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6ce7e20)
    }
}

#undef public_6ce7e68
#undef public_6ce7e82
#undef public_6ce7e84
#undef public_6ce7edc
#undef public_6ce7ede
#undef public_6ce7f1f
#undef public_6ce7f21
#undef public_6ce7f43
#undef public_6ce7f50
#undef public_6ce7fa6
#undef public_6ce7faa
#undef public_6ce7fb1
#undef public_6ce7fc8
#undef public_6ce7fdd
#undef public_6ce7ff0
#undef public_6ce8000
#undef public_6ce8030
#undef public_6ce8040
#undef public_6ce8053
