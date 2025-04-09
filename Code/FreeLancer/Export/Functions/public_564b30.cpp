#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417c50);
CLANG_FORWARD_PROC_SYMBOL(public_564b30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1eff);

#define public_564bc2 _public_564bc2
#define public_564bf1 _public_564bf1
#define public_564c21 _public_564c21
#define public_564c3b _public_564c3b
#define public_564c64 _public_564c64
#define public_564c7e _public_564c7e
#define public_564ca7 _public_564ca7
#define public_564cc1 _public_564cc1
#define public_564cea _public_564cea
#define public_564d04 _public_564d04
#define public_564d2d _public_564d2d
#define public_564d47 _public_564d47
#define public_564d70 _public_564d70
#define public_564d8a _public_564d8a
#define public_564db3 _public_564db3
#define public_564dca _public_564dca
#define public_564df0 _public_564df0
#define public_564e07 _public_564e07
#define public_564e27 _public_564e27
#define public_564e32 _public_564e32
#define public_564e47 _public_564e47
#define public_564e5c _public_564e5c
#define public_564e77 _public_564e77
#define public_564eb8 _public_564eb8
#define public_564f01 _public_564f01
#define public_564f0a _public_564f0a
#define public_564f69 _public_564f69
#define public_564f72 _public_564f72

PROC_DECLARE(0x564b30, internal_564b30, public_564b30);
extern "C" NAKED register_t __cdecl internal_564b30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c1eff @0x564b38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1eff
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1670
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        lea ecx, ss:[esp+0x10C]
        call dword ptr ds : [public_5c605c]
        mov eax, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x1684]
        push ecx
        push edx
        lea eax, ss:[esp+0x10]
        xor ebx, ebx
        push eax
        mov dword ptr ss : [esp+0x1688], ebx
        call dword ptr ds : [public_5c6068]
        add esp, 0xC
        push ebx
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_564eb8
        push esi
        push edi
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_564e5c
        mov edi, dword ptr ds : [public_5c6cf4]
        mov esi, dword ptr ds : [public_5c6698]
/*FIXUP public_564bc2 : nop
        push offset public_5e26fc @0x564bc2*/
  FIXUP public_564bc2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26fc
        lea ecx, ss:[esp+0x118]
        call dword ptr ds : [public_5c6050]
        test al, al
        je public_564e47
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_564e47
/*FIXUP public_564bf1 : nop
        push offset public_5e26f4 @0x564bf1*/
  FIXUP public_564bf1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26f4
        lea ecx, ss:[esp+0x118]
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564c3b
        call esi
        cmp eax, ebx
        jne public_564c21
        mov dword ptr ds : [public_67c188], ebx
        mov byte ptr ds : [public_67c18c], bl
        jmp public_564e32
        public_564c21 : nop
        push eax
        push 0x40
/*FIXUP push offset public_67c18c @0x564c24*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c18c
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67c188], eax
        jmp public_564e32
/*FIXUP public_564c3b : nop
        push offset public_5e26e8 @0x564c3b*/
  FIXUP public_564c3b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26e8
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564c7e
        call esi
        cmp eax, ebx
        jne public_564c64
        mov dword ptr ds : [public_67c140], ebx
        mov byte ptr ds : [public_67c144], bl
        jmp public_564e32
        public_564c64 : nop
        push eax
        push 0x40
/*FIXUP push offset public_67c144 @0x564c67*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c144
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67c140], eax
        jmp public_564e32
/*FIXUP public_564c7e : nop
        push offset public_5e26dc @0x564c7e*/
  FIXUP public_564c7e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26dc
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564cc1
        call esi
        cmp eax, ebx
        jne public_564ca7
        mov dword ptr ds : [public_67c0f8], ebx
        mov byte ptr ds : [public_67c0fc], bl
        jmp public_564e32
        public_564ca7 : nop
        push eax
        push 0x40
/*FIXUP push offset public_67c0fc @0x564caa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c0fc
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67c0f8], eax
        jmp public_564e32
/*FIXUP public_564cc1 : nop
        push offset public_5e26d0 @0x564cc1*/
  FIXUP public_564cc1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26d0
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564d04
        call esi
        cmp eax, ebx
        jne public_564cea
        mov dword ptr ds : [public_67c0b0], ebx
        mov byte ptr ds : [public_67c0b4], bl
        jmp public_564e32
        public_564cea : nop
        push eax
        push 0x40
/*FIXUP push offset public_67c0b4 @0x564ced*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c0b4
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67c0b0], eax
        jmp public_564e32
/*FIXUP public_564d04 : nop
        push offset public_5e26c8 @0x564d04*/
  FIXUP public_564d04 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26c8
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564d47
        call esi
        cmp eax, ebx
        jne public_564d2d
        mov dword ptr ds : [public_67c068], ebx
        mov byte ptr ds : [public_67c06c], bl
        jmp public_564e32
        public_564d2d : nop
        push eax
        push 0x40
/*FIXUP push offset public_67c06c @0x564d30*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c06c
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67c068], eax
        jmp public_564e32
/*FIXUP public_564d47 : nop
        push offset public_5e26c0 @0x564d47*/
  FIXUP public_564d47 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26c0
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564d8a
        call esi
        cmp eax, ebx
        jne public_564d70
        mov dword ptr ds : [public_67c020], ebx
        mov byte ptr ds : [public_67c024], bl
        jmp public_564e32
        public_564d70 : nop
        push eax
        push 0x40
/*FIXUP push offset public_67c024 @0x564d73*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67c024
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67c020], eax
        jmp public_564e32
/*FIXUP public_564d8a : nop
        push offset public_5e26b8 @0x564d8a*/
  FIXUP public_564d8a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26b8
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564dca
        call esi
        cmp eax, ebx
        jne public_564db3
        mov dword ptr ds : [public_67bfd8], ebx
        mov byte ptr ds : [public_67bfdc], bl
        jmp public_564e32
        public_564db3 : nop
        push eax
        push 0x40
/*FIXUP push offset public_67bfdc @0x564db6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bfdc
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67bfd8], eax
        jmp public_564e32
/*FIXUP public_564dca : nop
        push offset public_5e26b0 @0x564dca*/
  FIXUP public_564dca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26b0
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564e07
        call esi
        cmp eax, ebx
        jne public_564df0
        mov dword ptr ds : [public_67bf90], ebx
        mov byte ptr ds : [public_67bf94], bl
        jmp public_564e32
        public_564df0 : nop
        push eax
        push 0x40
/*FIXUP push offset public_67bf94 @0x564df3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67bf94
        call public_417c50
        add esp, 0xC
        mov dword ptr ds : [public_67bf90], eax
        jmp public_564e32
/*FIXUP public_564e07 : nop
        push offset public_5e26a0 @0x564e07*/
  FIXUP public_564e07 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e26a0
        call edi
        test al, al
        lea ecx, ss:[esp+0x114]
        je public_564e27
        push ebx
        call dword ptr ds : [public_5c6034]
        mov byte ptr ds : [public_614a9c], al
        jmp public_564e32
/*FIXUP public_564e27 : nop
        push offset public_5e2688 @0x564e27*/
  FIXUP public_564e27 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e2688
        call dword ptr ds : [public_5c6038]
        public_564e32 : nop
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_564bf1
        public_564e47 : nop
        lea ecx, ss:[esp+0x114]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_564bc2
        public_564e5c : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_5e266c
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        jb public_564e77
        mov eax, 0x3F
        public_564e77 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_5e266c
        mov edi, offset public_67bf4c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+public_67bf4c], bl
        mov dword ptr ds : [public_67bf48], eax
        call dword ptr ds : [public_5c71dc]
        lea eax, ds:[eax+eax*2]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        pop edi
        mov dword ptr ds : [public_67bf40], eax
        pop esi
        public_564eb8 : nop
        lea eax, ss:[esp+0x1534]
        mov dword ptr ss : [esp+0x167C], 1
        mov dword ptr ss : [esp+4], eax
        lea ecx, ss:[esp+0x1534]
        mov byte ptr ss : [esp+0x167C], 2
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x1538]
        cmp eax, ebx
        je public_564f0a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_564f01
        cmp cl, 0xFF
        je public_564f01
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_564f0a
        public_564f01 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_564f0a : nop
        mov dword ptr ss : [esp+0x1538], ebx
        mov dword ptr ss : [esp+0x153C], ebx
        mov dword ptr ss : [esp+0x1540], ebx
        lea ecx, ss:[esp+0x10C]
        mov dword ptr ss : [esp+0x167C], 3
        call dword ptr ds : [public_5c604c]
        mov eax, dword ptr ss : [esp+0x110]
        cmp eax, ebx
        je public_564f72
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_564f69
        cmp cl, 0xFF
        je public_564f69
        dec cl
        mov byte ptr ds : [eax], cl
        pop ebx
        mov ecx, dword ptr ss : [esp+0x1670]
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 
        public_564f69 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_564f72 : nop
        mov ecx, dword ptr ss : [esp+0x1674]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x167C
        ret 
        UNREACHABLE_TRAP(0x564b30)
    }
}

#undef public_564bc2
#undef public_564bf1
#undef public_564c21
#undef public_564c3b
#undef public_564c64
#undef public_564c7e
#undef public_564ca7
#undef public_564cc1
#undef public_564cea
#undef public_564d04
#undef public_564d2d
#undef public_564d47
#undef public_564d70
#undef public_564d8a
#undef public_564db3
#undef public_564dca
#undef public_564df0
#undef public_564e07
#undef public_564e27
#undef public_564e32
#undef public_564e47
#undef public_564e5c
#undef public_564e77
#undef public_564eb8
#undef public_564f01
#undef public_564f0a
#undef public_564f69
#undef public_564f72
