#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_408a70);
CLANG_FORWARD_PROC_SYMBOL(public_409f10);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_539f90);
CLANG_FORWARD_PROC_SYMBOL(public_53a230);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0538);

#define public_52e919 _public_52e919
#define public_52e91b _public_52e91b
#define public_52e936 _public_52e936
#define public_52e938 _public_52e938
#define public_52e961 _public_52e961
#define public_52e963 _public_52e963
#define public_52e99c _public_52e99c
#define public_52e99e _public_52e99e
#define public_52e9e5 _public_52e9e5
#define public_52e9fb _public_52e9fb
#define public_52e9fd _public_52e9fd
#define public_52ea22 _public_52ea22
#define public_52ea24 _public_52ea24
#define public_52ea5d _public_52ea5d
#define public_52ea6f _public_52ea6f
#define public_52ea7d _public_52ea7d

PROC_DECLARE(0x52e8c0, internal_52e8c0, public_52e8c0);
extern "C" NAKED register_t __cdecl internal_52e8c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0538 @0x52e8c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0538
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x24
        mov edx, dword ptr ds : [ecx+4]
        push edi
        xor edi, edi
        cmp edx, edi
        mov dword ptr ss : [esp+4], ecx
        je public_52ea7d
        mov eax, dword ptr ds : [edx+0x70]
        cmp eax, edi
        je public_52ea7d
        cmp dword ptr ds : [eax+4], edi
        je public_52ea7d
        push esi
        mov esi, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, edi
        je public_52e919
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        jne public_52e919
        mov ecx, eax
        jmp public_52e91b
        public_52e919 : nop
        xor ecx, ecx
        public_52e91b : nop
        cmp eax, edi
        mov ecx, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [ecx+0x80]
        je public_52e936
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 7
        cmp cl, 7
        je public_52e938
        public_52e936 : nop
        xor eax, eax
        public_52e938 : nop
        mov eax, dword ptr ds : [eax+0x88]
        fld dword ptr ds : [eax+0x84]
        mov eax, dword ptr ds : [public_5c63c4]
        fxch 
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ds : [edx+0x70]
        cmp eax, edi
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fstp st(0)
        je public_52e961
        mov eax, dword ptr ds : [eax+4]
        jmp public_52e963
        public_52e961 : nop
        xor eax, eax
        public_52e963 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call public_409f10
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x24], edi
        mov dword ptr ss : [esp+0x28], edi
        add esi, 0xC
        cmp esi, edi
        mov dword ptr ss : [esp+0x34], edi
        je public_52e99c
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, edi
        je public_52e99c
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x27
        cmp dl, 0x27
        je public_52e99e
        public_52e99c : nop
        xor ecx, ecx
        public_52e99e : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x40]
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        lea ebp, ds:[ebx+0xC]
        push ebp
        push ebx
        push eax
        mov eax, dword ptr ds : [ecx+0xE4]
        mov ecx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        call public_539f90
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, edi
        je public_52e9e5
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx+4]
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x44]
        push ecx
        mov ecx, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp]
        call dword ptr ds : [edi+0xC]
        xor edi, edi
        public_52e9e5 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ecx+0x10]
        cmp eax, edi
        je public_52e9fb
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 7
        cmp dl, 7
        je public_52e9fd
        public_52e9fb : nop
        xor eax, eax
        public_52e9fd : nop
        mov eax, dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ds : [eax+4]
        call public_408a70
        test esi, esi
        mov edi, eax
        je public_52ea22
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_52ea22
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 1
        cmp al, 1
        je public_52ea24
        public_52ea22 : nop
        xor ecx, ecx
        public_52ea24 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        push eax
        push ebp
        push ebx
        push edi
        call public_53a230
        mov ecx, dword ptr ss : [esp+0x2C]
        xor esi, esi
        cmp ecx, esi
        pop ebp
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        pop ebx
        je public_52ea5d
        call public_4f7a90
        mov dword ptr ss : [esp+0x24], esi
        public_52ea5d : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, esi
        je public_52ea6f
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x20], esi
        public_52ea6f : nop
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, esi
        pop esi
        je public_52ea7d
        call public_537ad0
        public_52ea7d : nop
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x52e8c0)
    }
}

#undef public_52e919
#undef public_52e91b
#undef public_52e936
#undef public_52e938
#undef public_52e961
#undef public_52e963
#undef public_52e99c
#undef public_52e99e
#undef public_52e9e5
#undef public_52e9fb
#undef public_52e9fd
#undef public_52ea22
#undef public_52ea24
#undef public_52ea5d
#undef public_52ea6f
#undef public_52ea7d
