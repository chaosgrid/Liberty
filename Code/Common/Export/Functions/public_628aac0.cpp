#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_628b070);
CLANG_FORWARD_PROC_SYMBOL(public_6301640);
CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6344210);
CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6345f10);
CLANG_FORWARD_PROC_SYMBOL(public_63486c0);
CLANG_FORWARD_PROC_SYMBOL(public_6348710);
CLANG_FORWARD_PROC_SYMBOL(public_6348720);
CLANG_FORWARD_PROC_SYMBOL(public_634cd80);
CLANG_FORWARD_PROC_SYMBOL(public_6352140);
CLANG_FORWARD_PROC_SYMBOL(public_6369e70);
CLANG_FORWARD_PROC_SYMBOL(public_6369f20);
CLANG_FORWARD_PROC_SYMBOL(public_636a050);
CLANG_FORWARD_PROC_SYMBOL(public_636a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_636c9a0);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6393451);

#define public_628ab50 _public_628ab50
#define public_628ab52 _public_628ab52
#define public_628ac08 _public_628ac08
#define public_628ac4a _public_628ac4a
#define public_628acbd _public_628acbd
#define public_628ad05 _public_628ad05
#define public_628ad8d _public_628ad8d
#define public_628addb _public_628addb
#define public_628aef7 _public_628aef7
#define public_628aef9 _public_628aef9
#define public_628af61 _public_628af61
#define public_628afdf _public_628afdf
#define public_628afed _public_628afed

PROC_DECLARE(0x628aac0, internal_628aac0, public_628aac0);
extern "C" NAKED register_t __cdecl internal_628aac0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393451 @0x628aac2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393451
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C0
        push ebx
        push ebp
        push esi
        push edi
        lea ecx, ss:[esp+0xE4]
        call public_63486c0
        mov ebp, dword ptr ss : [esp+0x1E0]
        lea eax, ss:[ebp+6]
        xor ebx, ebx
        push eax
        lea ecx, ss:[esp+0xE8]
        mov dword ptr ss : [esp+0x1DC], ebx
        call public_6348720
        movzx ecx, byte ptr ss : [ebp+4]
        push ebp
        lea edx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0xF4], ecx
        push edx
        mov ecx, offset public_63fc098
        call public_6301640
        push 0x1C
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_628ab50
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], ebx
        mov dword ptr ds : [eax+0x18], ebx
        mov dword ptr ds : [eax], offset public_639c30c
        mov esi, eax
        jmp public_628ab52
        public_628ab50 : nop
        xor esi, esi
        public_628ab52 : nop
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x13C]
        mov dword ptr ds : [esi+0x18], eax
        call public_6369e70
        mov word ptr ss : [esp+0x10], bx
        mov word ptr ss : [esp+0x12], bx
        mov dword ptr ss : [esp+0x14], ebx
        mov edi, dword ptr ss : [esp+0x1E4]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x3C], ecx
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x1D8], 2
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        call public_63441a0
        movzx ecx, word ptr ss : [esp+0x12]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x3C]
        mov dword ptr ds : [eax+ecx*4], edx
        mov ax, word ptr ss : [esp+0x12]
        fld dword ptr ss : [esp+0x44]
        inc ax
        cmp ax, word ptr ss : [esp+0x10]
        fchs 
        fld dword ptr ss : [esp+0x40]
        mov word ptr ss : [esp+0x12], ax
        fchs 
        fld dword ptr ss : [esp+0x3C]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x4C], ecx
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x58], edx
        jb public_628ac08
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_628ac08 : nop
        movzx eax, word ptr ss : [esp+0x12]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ds : [edx+eax*4], ecx
        mov ax, word ptr ss : [esp+0x12]
        fld dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        fchs 
        inc ax
        fstp dword ptr ss : [esp+0x5C]
        cmp ax, word ptr ss : [esp+0x10]
        mov word ptr ss : [esp+0x12], ax
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x64], edx
        jb public_628ac4a
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_628ac4a : nop
        movzx eax, word ptr ss : [esp+0x12]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x5C]
        mov dword ptr ds : [edx+eax*4], ecx
        inc word ptr ss : [esp+0x12]
        fld dword ptr ss : [esp+0x64]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x6C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x68]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x70], ecx
        mov cx, word ptr ss : [esp+0x12]
        cmp cx, word ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x74], edx
        mov dword ptr ss : [esp+0x78], eax
        jb public_628acbd
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_628acbd : nop
        movzx edx, word ptr ss : [esp+0x12]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x6C]
        mov dword ptr ds : [ecx+edx*4], eax
        mov ax, word ptr ss : [esp+0x12]
        fld dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+8]
        fchs 
        inc ax
        fstp dword ptr ss : [esp+0x80]
        cmp ax, word ptr ss : [esp+0x10]
        mov word ptr ss : [esp+0x12], ax
        mov dword ptr ss : [esp+0x7C], edx
        mov dword ptr ss : [esp+0x84], ecx
        jb public_628ad05
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_628ad05 : nop
        movzx edx, word ptr ss : [esp+0x12]
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ss:[esp+0x7C]
        mov dword ptr ds : [ecx+edx*4], eax
        inc word ptr ss : [esp+0x12]
        fld dword ptr ss : [esp+0x84]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x8C]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x88]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x90], eax
        mov ax, word ptr ss : [esp+0x12]
        cmp ax, word ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x8C], edx
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x94], ecx
        mov dword ptr ss : [esp+0x98], edx
        jb public_628ad8d
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_628ad8d : nop
        movzx ecx, word ptr ss : [esp+0x12]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x8C]
        mov dword ptr ds : [eax+ecx*4], edx
        mov ax, word ptr ss : [esp+0x12]
        fld dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [edi+4]
        fchs 
        inc ax
        fstp dword ptr ss : [esp+0xA4]
        cmp ax, word ptr ss : [esp+0x10]
        mov word ptr ss : [esp+0x12], ax
        mov dword ptr ss : [esp+0x9C], ecx
        mov dword ptr ss : [esp+0xA0], edx
        jb public_628addb
        lea ecx, ss:[esp+0x10]
        call public_63441a0
        public_628addb : nop
        movzx eax, word ptr ss : [esp+0x12]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x9C]
        mov dword ptr ds : [edx+eax*4], ecx
        inc word ptr ss : [esp+0x12]
        fld dword ptr ss : [esp+0xA4]
        sub esp, 0xC
        fchs 
        lea ecx, ss:[esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xAC]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xA8]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0xAC], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0xB0], ecx
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0xB4], edx
        mov dword ptr ss : [esp+0xB8], eax
        call public_6352140
        movzx ecx, word ptr ss : [esp+0x12]
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0xAC]
        mov dword ptr ds : [eax+ecx*4], edx
        inc word ptr ss : [esp+0x12]
        lea ecx, ss:[esp+0x10]
        push ecx
        call public_636c9a0
        add esp, 4
        push eax
        lea ecx, ss:[esp+0x140]
        call public_636a050
        mov eax, 1
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x140]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], eax
        call public_636a0b0
        lea ecx, ss:[esp+0x10]
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ss : [esp+0x1D8], 1
        call public_63449d0
        lea ecx, ss:[esp+0x13C]
        mov byte ptr ss : [esp+0x1D8], bl
        call public_6369f20
        push 8
        call public_6391d9c
        add esp, 4
        cmp eax, ebx
        je public_628aef7
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], offset public_639c2dc
        mov dword ptr ds : [eax+4], ecx
        mov edi, eax
        jmp public_628aef9
        public_628aef7 : nop
        xor edi, edi
        public_628aef9 : nop
        mov dword ptr ds : [esi+0xC], edi
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        add eax, 0x10
        push ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x10]
        push edx
        push eax
        lea ecx, ss:[esp+0xE0]
        call public_636cf40
        lea ecx, ss:[ebp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x2C]
        call public_628b070
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x1C], eax
        cmp dword ptr ss : [esp+0xFC], ebx
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        jne public_628af61
        mov eax, dword ptr ds : [public_63fc0bc]
        mov dword ptr ss : [esp+0xFC], eax
        public_628af61 : nop
        lea ecx, ss:[esp+0xD4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x18]
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0xEC]
        push eax
        push edi
        call public_634cd80
        lea ecx, ss:[esp+0xBC]
        mov dword ptr ds : [esi+4], eax
        call public_6344210
        movzx edx, byte ptr ss : [ebp+5]
        lea eax, ss:[esp+0xBC]
        mov dword ptr ss : [esp+0xBC], 1
        mov dword ptr ss : [esp+0xD0], edx
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6345f10
        mov ebp, dword ptr ss : [ebp+0x40]
        cmp ebp, ebx
        je public_628afed
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov eax, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [eax+0x28]
        mov dx, word ptr ds : [eax+0x12]
        cmp dx, word ptr ds : [eax+0x10]
        lea edi, ds:[eax+0x10]
        jb public_628afdf
        mov ecx, edi
        call public_63441a0
        public_628afdf : nop
        movzx eax, word ptr ds : [edi+2]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx+eax*4], esi
        inc word ptr ds : [edi+2]
        public_628afed : nop
        mov edx, dword ptr ss : [esp+0x1E8]
        lea ecx, ss:[esp+0xE4]
        mov dword ptr ds : [edx], esi
        mov dword ptr ss : [esp+0x1D8], 0xFFFFFFFF
        call public_6348710
        mov ecx, dword ptr ss : [esp+0x1D0]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1CC
        ret 
        UNREACHABLE_TRAP(0x628aac0)
    }
}

#undef public_628ab50
#undef public_628ab52
#undef public_628ac08
#undef public_628ac4a
#undef public_628acbd
#undef public_628ad05
#undef public_628ad8d
#undef public_628addb
#undef public_628aef7
#undef public_628aef9
#undef public_628af61
#undef public_628afdf
#undef public_628afed
