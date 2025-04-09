#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41e740);
CLANG_FORWARD_PROC_SYMBOL(public_41e880);
CLANG_FORWARD_PROC_SYMBOL(public_41eac0);
CLANG_FORWARD_PROC_SYMBOL(public_535980);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b82d0);

#define public_41eaee _public_41eaee
#define public_41eb89 _public_41eb89
#define public_41ec09 _public_41ec09
#define public_41ec84 _public_41ec84
#define public_41ec8f _public_41ec8f
#define public_41ec9b _public_41ec9b
#define public_41ecac _public_41ecac
#define public_41ecb8 _public_41ecb8
#define public_41ecc7 _public_41ecc7
#define public_41ecd0 _public_41ecd0

PROC_DECLARE(0x41eac0, internal_41eac0, public_41eac0);
extern "C" NAKED register_t __cdecl internal_41eac0()
{
    __asm
    {
        mov al, byte ptr ds : [public_61682c]
        sub esp, 0x1C
        test al, 1
        jne public_41eaee
        mov dl, al
        or dl, 1
        mov ecx, offset public_6167b8
        mov byte ptr ds : [public_61682c], dl
        call public_41e740
/*FIXUP push offset _public_41e880 @0x41eae1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_41e880
        call public_5b7e6c
        add esp, 4
        public_41eaee : nop
        mov al, byte ptr ds : [public_616854]
        push ebx
        xor ebx, ebx
        cmp al, bl
        push esi
        jne public_41ec09
        mov byte ptr ds : [public_616854], 1
        call dword ptr ds : [public_5c72c4]
        push ebx
/*FIXUP push offset public_6167c4 @0x41eb0d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c4
/*FIXUP push offset public_5e752c @0x41eb12*/
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
/*FIXUP push offset public_6167c8 @0x41eb36*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6167c8
/*FIXUP push offset public_5e74ec @0x41eb3b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e74ec
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [public_6167c8]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_5e772c @0x41eb4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e772c
        push eax
        call dword ptr ds : [edx+0x2C]
        mov al, byte ptr ds : [public_6167cc]
        or al, 0x60
        test al, 0x40
        mov byte ptr ds : [public_6167cc], al
        je public_41ec09
        mov eax, dword ptr ds : [public_6167dc]
        mov esi, 0x80
        cmp eax, esi
        je public_41ec09
        mov eax, dword ptr ds : [public_6167c8]
        cmp eax, ebx
        je public_41eb89
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        public_41eb89 : nop
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
        jl public_41ec09
        mov edx, dword ptr ds : [public_6167e0]
        push edx
        mov dword ptr ds : [public_6167dc], esi
        call public_5b7e1d
        mov eax, dword ptr ds : [public_6167dc]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ds : [public_6167e0], ebx
        je public_41ec09
        lea eax, ds:[eax+eax*4]
        shl eax, 2
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [public_6167e0], eax
        public_41ec09 : nop
        mov cl, byte ptr ds : [public_6167cc]
        mov eax, dword ptr ds : [public_679bc8]
        or cl, 1
        cmp eax, ebx
        mov byte ptr ds : [public_6167cc], cl
        mov dword ptr ds : [public_616820], 0
        mov dword ptr ds : [public_61681c], 0
        jbe public_41ec84
        cmp dword ptr ds : [public_679bcc], ebx
        jbe public_41ec84
        cmp byte ptr ds : [public_679be5], bl
        jne public_41ec84
        lea ecx, ss:[esp+8]
        push ecx
        call dword ptr ds : [public_5c72bc]
        test eax, eax
        je public_41ec84
        mov eax, dword ptr ds : [public_67eca0]
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [public_5c72c0]
        test eax, eax
        je public_41ec84
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [public_616840], eax
        mov dword ptr ds : [public_616844], ecx
        mov dword ptr ds : [public_616848], ebx
        jmp public_41ec8f
        public_41ec84 : nop
        mov eax, dword ptr ds : [public_616840]
        mov ecx, dword ptr ds : [public_616844]
        public_41ec8f : nop
        cmp eax, ebx
        jge public_41ec9b
        mov dword ptr ds : [public_616840], ebx
        jmp public_41ecac
        public_41ec9b : nop
        mov edx, dword ptr ds : [public_610850]
        cmp eax, edx
        jl public_41ecac
        dec edx
        mov dword ptr ds : [public_616840], edx
        public_41ecac : nop
        cmp ecx, ebx
        jge public_41ecb8
        mov dword ptr ds : [public_616844], ebx
        jmp public_41ecc7
        public_41ecb8 : nop
        mov eax, dword ptr ds : [public_610854]
        cmp ecx, eax
        jl public_41ecc7
        dec eax
        mov dword ptr ds : [public_616844], eax
        public_41ecc7 : nop
        mov esi, dword ptr ds : [public_5c72c8]
        lea ecx, ds:[ecx]
        public_41ecd0 : nop
        push ebx
        call esi
        test eax, eax
        jge public_41ecd0
        pop esi
        mov byte ptr ds : [public_61685c], 1
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x41eac0)
    }
}

#undef public_41eaee
#undef public_41eb89
#undef public_41ec09
#undef public_41ec84
#undef public_41ec8f
#undef public_41ec9b
#undef public_41ecac
#undef public_41ecb8
#undef public_41ecc7
#undef public_41ecd0
