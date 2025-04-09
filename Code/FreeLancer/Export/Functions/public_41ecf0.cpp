#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_41ecf0);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f80);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_41ed1e _public_41ed1e
#define public_41edb9 _public_41edb9
#define public_41ee39 _public_41ee39
#define public_41ee57 _public_41ee57
#define public_41eeaa _public_41eeaa
#define public_41eefe _public_41eefe
#define public_41ef04 _public_41ef04
#define public_41ef0c _public_41ef0c

PROC_DECLARE(0x41ecf0, internal_41ecf0, public_41ecf0);
extern "C" NAKED register_t __cdecl internal_41ecf0()
{
    __asm
    {
        mov al, byte ptr ds : [public_61682c]
        sub esp, 0x34
        test al, 1
        jne public_41ed1e
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x41ed11*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_41ed1e : nop
        mov al, byte ptr ds : [public_616854]
        push ebx
        xor ebx, ebx
        cmp al, bl
        push esi
        jne public_41ee39
        mov byte ptr ds : [public_616854], 1
        call dword ptr ds : [public_5c72c4]
        push ebx
/*FIXUP push offset public_6167c4 @0x41ed3d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c4
/*FIXUP push offset public_5e752c @0x41ed42*/
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
/*FIXUP push offset public_6167c8 @0x41ed66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c8
/*FIXUP push offset public_5e74ec @0x41ed6b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_6167c8]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x41ed7b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [public_6167cc]
        or al, 0x60
        test al, 0x40
        mov byte ptr ds : [public_6167cc], al
        je public_41ee39
        mov eax, dword ptr ds : [public_6167dc]
        mov esi, 0x80
        cmp eax, esi
        je public_41ee39
        mov eax, dword ptr ds : [public_6167c8]
        cmp eax, ebx
        je public_41edb9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41edb9 : nop
        mov al, byte ptr ds : [public_6167cc]
        and al, 0xF3
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_6167cc], al
        call public_535980
        mov eax, dword ptr ds : [public_6167c8]
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        mov dword ptr ss : [esp+0x1C], 0x14
        mov dword ptr ss : [esp+0x20], 0x10
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], esi
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jl public_41ee39
        mov edx, dword ptr ds : [public_6167e0]
        push edx
        mov dword ptr ds : [public_6167dc], esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6167dc]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [public_6167e0], ebx
        je public_41ee39
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [public_6167e0], eax
        public_41ee39 : nop
        mov dl, byte ptr ds : [public_6167cc]
        mov eax, dword ptr ds : [public_6167c8]
        and dl, 0xFE
        cmp eax, ebx
        mov byte ptr ds : [public_6167cc], dl
        je public_41ee57
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41ee57 : nop
        mov al, byte ptr ds : [public_6167cc]
        lea edx, ss:[esp+8]
        and al, 0xF3
        push edx
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_6167cc], al
        call public_53e430
        mov ecx, dword ptr ds : [public_6167bc]
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6167b8
        call public_4a2f80
        mov eax, dword ptr ds : [public_6167c8]
        cmp eax, ebx
        je public_41eeaa
        mov edx, dword ptr ds : [public_67eca0]
        mov ecx, dword ptr ds : [eax]
        push 6
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        and byte ptr ds : [public_6167cc], 0xF7
        public_41eeaa : nop
        lea eax, ss:[esp+0x28]
        push eax
        mov dword ptr ss : [esp+0x2C], 0x14
        call dword ptr ds : [public_5c72b0]
        test byte ptr ss : [esp+0x2C], 1
        jne public_41ef0c
        mov ecx, dword ptr ds : [public_616840]
        mov edx, dword ptr ds : [public_616844]
        lea eax, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [public_67eca0]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c72b4]
        test eax, eax
        je public_41eefe
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [public_5c72b8]
        public_41eefe : nop
        mov esi, dword ptr ds : [public_5c72c8]
        public_41ef04 : nop
        push 1
        call esi
        test eax, eax
        jle public_41ef04
        public_41ef0c : nop
        pop esi
        mov byte ptr ds : [public_61685c], bl
        pop ebx
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x41ecf0)
    }
}

#undef public_41ed1e
#undef public_41edb9
#undef public_41ee39
#undef public_41ee57
#undef public_41eeaa
#undef public_41eefe
#undef public_41ef04
#undef public_41ef0c
