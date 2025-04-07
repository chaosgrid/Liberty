#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6343fc0);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_63522a0);
CLANG_FORWARD_PROC_SYMBOL(public_63523d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352580);
CLANG_FORWARD_PROC_SYMBOL(public_636cfa0);
CLANG_FORWARD_PROC_SYMBOL(public_636db00);
CLANG_FORWARD_PROC_SYMBOL(public_637a140);
CLANG_FORWARD_PROC_SYMBOL(public_637a2e0);
CLANG_FORWARD_PROC_SYMBOL(public_637a330);
CLANG_FORWARD_PROC_SYMBOL(public_637a6a0);
CLANG_FORWARD_PROC_SYMBOL(public_637a750);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6398913);

#define public_636db51 _public_636db51
#define public_636db53 _public_636db53
#define public_636dba8 _public_636dba8
#define public_636dbac _public_636dbac
#define public_636dc08 _public_636dc08
#define public_636dc0a _public_636dc0a
#define public_636dc41 _public_636dc41
#define public_636dca2 _public_636dca2
#define public_636dcd2 _public_636dcd2
#define public_636dcfd _public_636dcfd
#define public_636dd7b _public_636dd7b
#define public_636dd8c _public_636dd8c
#define public_636dd8f _public_636dd8f
#define public_636dd9c _public_636dd9c
#define public_636ddb3 _public_636ddb3
#define public_636ddd0 _public_636ddd0
#define public_636dddb _public_636dddb
#define public_636ddf9 _public_636ddf9
#define public_636de04 _public_636de04
#define public_636de2f _public_636de2f
#define public_636de38 _public_636de38
#define public_636de5a _public_636de5a

PROC_DECLARE(0x636db00, internal_636db00, public_636db00);
extern "C" NAKED register_t __cdecl internal_636db00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398913 @0x636db02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398913
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x5C
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        push 0x10
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        call public_6391d9c
        mov edi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], edi
        cmp edi, ebx
        mov dword ptr ss : [esp+0x70], ebx
        je public_636db51
        push 8
        mov ecx, edi
        call public_63522a0
        mov dword ptr ds : [edi], offset public_63a5918
        jmp public_636db53
        public_636db51 : nop
        xor edi, edi
        public_636db53 : nop
        mov eax, dword ptr ss : [esp+0x78]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        mov dword ptr ds : [esi+8], edi
        je public_636de5a
        mov edi, dword ptr ds : [eax+8]
        push ebp
        mov word ptr ss : [esp+0x20], bx
        mov word ptr ss : [esp+0x22], bx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x74], 1
        mov word ptr ss : [esp+0x28], bx
        mov word ptr ss : [esp+0x2A], bx
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x74], 2
        lea ebp, ss:[esp+0x30]
        add edi, 8
        mov dword ptr ss : [esp+0x7C], 3
        jmp public_636dbac
        public_636dba8 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_636dbac : nop
        mov eax, dword ptr ds : [edi-4]
        fld dword ptr ds : [edi-8]
        mov ecx, dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ds : [esi+8]
        mov edx, eax
        mov dword ptr ss : [esp+0x14], eax
        mov eax, ecx
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        call public_636cfa0
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        mov ecx, esi
        call public_6352580
        cmp eax, ebx
        mov dword ptr ss : [ebp], eax
        jne public_636dc41
        push 0x18
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_636dc08
        mov dword ptr ds : [eax+0x14], ebx
        mov esi, eax
        jmp public_636dc0a
        public_636dc08 : nop
        xor esi, esi
        public_636dc0a : nop
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [esi]
        mov ecx, eax
        mov dword ptr ds : [esi+8], ecx
        fstp dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edx+8]
        push esi
        mov ecx, ebx
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [esp+0x20], eax
        call public_636cfa0
        push eax
        push esi
        mov ecx, ebx
        call public_63523d0
        xor ebx, ebx
        public_636dc41 : nop
        mov eax, dword ptr ss : [esp+0x7C]
        add edi, 0x10
        add ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x7C], eax
        jne public_636dba8
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        push ecx
        push edx
        call public_637a140
        mov esi, eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x10], eax
        push 0xC
        mov dword ptr ds : [eax+0x10], esi
        call public_6391d9c
        mov edi, eax
        mov dword ptr ds : [edi+4], ebx
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [esi+0x18], edi
        mov dword ptr ds : [eax+0x18], edi
        mov cx, word ptr ss : [esp+0x32]
        add esp, 0x10
        cmp cx, word ptr ss : [esp+0x20]
        jb public_636dca2
        lea ecx, ss:[esp+0x20]
        call public_63441a0
        public_636dca2 : nop
        mov edx, dword ptr ss : [esp+0x22]
        mov eax, dword ptr ss : [esp+0x24]
        and edx, 0xFFFF
        mov dword ptr ds : [eax+edx*4], esi
        mov ax, word ptr ss : [esp+0x22]
        inc ax
        cmp ax, word ptr ss : [esp+0x20]
        mov word ptr ss : [esp+0x22], ax
        mov esi, dword ptr ds : [esi+0xC]
        jb public_636dcd2
        lea ecx, ss:[esp+0x20]
        call public_63441a0
        public_636dcd2 : nop
        mov ecx, dword ptr ss : [esp+0x22]
        mov edx, dword ptr ss : [esp+0x24]
        and ecx, 0xFFFF
        mov dword ptr ds : [edx+ecx*4], esi
        mov ax, word ptr ss : [esp+0x2A]
        inc word ptr ss : [esp+0x22]
        cmp ax, word ptr ss : [esp+0x28]
        jb public_636dcfd
        lea ecx, ss:[esp+0x28]
        call public_63441a0
        public_636dcfd : nop
        mov ecx, dword ptr ss : [esp+0x2A]
        mov edx, dword ptr ss : [esp+0x2C]
        and ecx, 0xFFFF
        mov dword ptr ds : [edx+ecx*4], edi
        inc word ptr ss : [esp+0x2A]
        lea ecx, ss:[esp+0x3C]
        call public_637a2e0
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x78], 3
        call public_637a330
        mov esi, eax
        push 0x10
        push esi
        call public_6343fc0
        mov ebp, eax
        mov ecx, esi
        mov edx, ecx
        shr ecx, 2
        xor eax, eax
        mov edi, ebp
        rep stosd
        mov ecx, edx
        and ecx, 3
        add esp, 8
        rep stosb
        push ebp
        lea ecx, ss:[esp+0x40]
        call public_637a6a0
        lea ecx, ss:[esp+0x3C]
        mov byte ptr ss : [esp+0x74], 2
        call public_637a750
        mov esi, dword ptr ss : [esp+0x22]
        mov eax, dword ptr ss : [esp+0x24]
        and esi, 0xFFFF
        dec esi
        js public_636dd8f
        public_636dd7b : nop
        mov ecx, dword ptr ds : [eax+esi*4]
        cmp ecx, ebx
        je public_636dd8c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x24]
        public_636dd8c : nop
        dec esi
        jns public_636dd7b
        public_636dd8f : nop
        mov esi, dword ptr ss : [esp+0x2A]
        and esi, 0xFFFF
        dec esi
        js public_636ddb3
        public_636dd9c : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx+esi*4]
        push eax
        call public_6391d5a
        add esp, 4
        dec esi
        jns public_636dd9c
        mov eax, dword ptr ss : [esp+0x24]
        public_636ddb3 : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        lea edx, ss:[esp+0x30]
        cmp ecx, edx
        je public_636dddb
        cmp ecx, ebx
        je public_636ddd0
        push ecx
        call public_6343fb0
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        public_636ddd0 : nop
        xor ecx, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov word ptr ss : [esp+0x28], bx
        public_636dddb : nop
        lea edx, ss:[esp+0x28]
        cmp eax, edx
        mov word ptr ss : [esp+0x2A], bx
        je public_636de04
        cmp eax, ebx
        je public_636ddf9
        push eax
        call public_6343fb0
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 4
        public_636ddf9 : nop
        xor eax, eax
        mov dword ptr ss : [esp+0x24], eax
        mov word ptr ss : [esp+0x20], bx
        public_636de04 : nop
        mov esi, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x30]
        cmp ecx, edx
        mov dword ptr ds : [esi+4], ebp
        mov word ptr ss : [esp+0x22], bx
        mov byte ptr ss : [esp+0x74], 1
        pop ebp
        je public_636de38
        cmp ecx, ebx
        je public_636de2f
        push ecx
        call public_6343fb0
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 4
        public_636de2f : nop
        mov dword ptr ss : [esp+0x28], ebx
        mov word ptr ss : [esp+0x24], bx
        public_636de38 : nop
        lea ecx, ss:[esp+0x24]
        cmp eax, ecx
        mov word ptr ss : [esp+0x26], bx
        mov dword ptr ss : [esp+0x70], 0xFFFFFFFF
        je public_636de5a
        cmp eax, ebx
        je public_636de5a
        push eax
        call public_6343fb0
        add esp, 4
        public_636de5a : nop
        mov ecx, dword ptr ss : [esp+0x68]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x68
        ret 4
        UNREACHABLE_TRAP(0x636db00)
    }
}

#undef public_636db51
#undef public_636db53
#undef public_636dba8
#undef public_636dbac
#undef public_636dc08
#undef public_636dc0a
#undef public_636dc41
#undef public_636dca2
#undef public_636dcd2
#undef public_636dcfd
#undef public_636dd7b
#undef public_636dd8c
#undef public_636dd8f
#undef public_636dd9c
#undef public_636ddb3
#undef public_636ddd0
#undef public_636dddb
#undef public_636ddf9
#undef public_636de04
#undef public_636de2f
#undef public_636de38
#undef public_636de5a
