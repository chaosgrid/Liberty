#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_41e890);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_41e8ce _public_41e8ce
#define public_41e965 _public_41e965
#define public_41e9e5 _public_41e9e5
#define public_41ea60 _public_41ea60
#define public_41ea6b _public_41ea6b
#define public_41ea77 _public_41ea77
#define public_41ea88 _public_41ea88
#define public_41ea94 _public_41ea94
#define public_41eaa3 _public_41eaa3
#define public_41eab0 _public_41eab0
#define public_41eab8 _public_41eab8

PROC_DECLARE(0x41e890, internal_41e890, public_41e890);
extern "C" NAKED register_t __cdecl internal_41e890()
{
    __asm
    {
        mov al, byte ptr ds : [public_61685c]
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        cmp al, bl
        je public_41eab8
        mov al, byte ptr ds : [public_61682c]
        test al, 1
        jne public_41e8ce
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x41e8c1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_41e8ce : nop
        cmp byte ptr ds : [public_616854], bl
        push esi
        jne public_41e9e5
        mov byte ptr ds : [public_616854], 1
        call dword ptr ds : [public_5c72c4]
        push ebx
/*FIXUP push offset public_6167c4 @0x41e8e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c4
/*FIXUP push offset public_5e752c @0x41e8ee*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e752c
        push 0x800
        push ebx
        mov dword ptr ds : [public_6167f8], eax
        call dword ptr ds : [public_5c6f68]
        push eax
        call public_5b82d0
        mov eax, dword ptr ds : [public_6167c4]
        mov ecx, dword ptr ds : [eax]
        push ebx
/*FIXUP push offset public_6167c8 @0x41e912*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c8
/*FIXUP push offset public_5e74ec @0x41e917*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_6167c8]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x41e927*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [public_6167cc]
        or al, 0x60
        test al, 0x40
        mov byte ptr ds : [public_6167cc], al
        je public_41e9e5
        mov eax, dword ptr ds : [public_6167dc]
        mov esi, 0x80
        cmp eax, esi
        je public_41e9e5
        mov eax, dword ptr ds : [public_6167c8]
        cmp eax, ebx
        je public_41e965
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41e965 : nop
        mov al, byte ptr ds : [public_6167cc]
        and al, 0xF3
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_6167cc], al
        call public_535980
        mov eax, dword ptr ds : [public_6167c8]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        mov dword ptr ss : [esp+0x18], 0x14
        mov dword ptr ss : [esp+0x1C], 0x10
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], esi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jl public_41e9e5
        mov edx, dword ptr ds : [public_6167e0]
        push edx
        mov dword ptr ds : [public_6167dc], esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6167dc]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [public_6167e0], ebx
        je public_41e9e5
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [public_6167e0], eax
        public_41e9e5 : nop
        mov cl, byte ptr ds : [public_6167cc]
        mov eax, dword ptr ds : [public_679bc8]
        or cl, 1
        cmp eax, ebx
        mov byte ptr ds : [public_6167cc], cl
        mov dword ptr ds : [public_616820], 0
        mov dword ptr ds : [public_61681c], 0
        jbe public_41ea60
        cmp dword ptr ds : [public_679bcc], ebx
        jbe public_41ea60
        cmp byte ptr ds : [public_679be5], bl
        jne public_41ea60
        lea ecx, ss:[esp+8]
        push ecx
        call dword ptr ds : [public_5c72bc]
        test eax, eax
        je public_41ea60
        mov eax, dword ptr ds : [public_67eca0]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [public_5c72c0]
        test eax, eax
        je public_41ea60
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_616840], eax
        mov dword ptr ds : [public_616844], ecx
        mov dword ptr ds : [public_616848], ebx
        jmp public_41ea6b
        public_41ea60 : nop
        mov eax, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [public_616844]
        public_41ea6b : nop
        cmp eax, ebx
        jge public_41ea77
        mov dword ptr ds : [public_616840], ebx
        jmp public_41ea88
        public_41ea77 : nop
        mov edx, dword ptr ds : [public_610850]
        cmp eax, edx
        jl public_41ea88
        dec edx
        mov dword ptr ds : [public_616840], edx
        public_41ea88 : nop
        cmp ecx, ebx
        jge public_41ea94
        mov dword ptr ds : [public_616844], ebx
        jmp public_41eaa3
        public_41ea94 : nop
        mov eax, dword ptr ds : [public_610854]
        cmp ecx, eax
        jl public_41eaa3
        dec eax
        mov dword ptr ds : [public_616844], eax
        public_41eaa3 : nop
        mov esi, dword ptr ds : [public_5c72c8]
        lea esp, ss:[esp]
        public_41eab0 : nop
        push ebx
        call esi
        test eax, eax
        jge public_41eab0
        pop esi
        public_41eab8 : nop
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x41e890)
    }
}

#undef public_41e8ce
#undef public_41e965
#undef public_41e9e5
#undef public_41ea60
#undef public_41ea6b
#undef public_41ea77
#undef public_41ea88
#undef public_41ea94
#undef public_41eaa3
#undef public_41eab0
#undef public_41eab8
