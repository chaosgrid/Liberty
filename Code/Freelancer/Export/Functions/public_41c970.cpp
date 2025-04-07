#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411c50);
CLANG_FORWARD_PROC_SYMBOL(public_41c940);
CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_41d440);
CLANG_FORWARD_PROC_SYMBOL(public_41d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4779a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);

#define public_41c9ab _public_41c9ab
#define public_41c9c0 _public_41c9c0
#define public_41c9f1 _public_41c9f1
#define public_41c9f5 _public_41c9f5
#define public_41ca28 _public_41ca28
#define public_41ca53 _public_41ca53
#define public_41ca63 _public_41ca63
#define public_41ca81 _public_41ca81
#define public_41ca85 _public_41ca85
#define public_41cac1 _public_41cac1
#define public_41cae0 _public_41cae0
#define public_41caf0 _public_41caf0
#define public_41cafb _public_41cafb
#define public_41cb06 _public_41cb06
#define public_41cb12 _public_41cb12
#define public_41cb57 _public_41cb57
#define public_41cb61 _public_41cb61
#define public_41cb8c _public_41cb8c
#define public_41cba0 _public_41cba0
#define public_41cbab _public_41cbab
#define public_41cbb6 _public_41cbb6
#define public_41cc0d _public_41cc0d
#define public_41cc20 _public_41cc20
#define public_41cc2b _public_41cc2b
#define public_41cc36 _public_41cc36
#define public_41cc59 _public_41cc59
#define public_41cc67 _public_41cc67
#define public_41cc72 _public_41cc72
#define public_41cc7d _public_41cc7d
#define public_41cca0 _public_41cca0
#define public_41ccb0 _public_41ccb0
#define public_41ccbb _public_41ccbb
#define public_41ccc6 _public_41ccc6
#define public_41cce0 _public_41cce0
#define public_41ccf0 _public_41ccf0
#define public_41ccfb _public_41ccfb
#define public_41cd06 _public_41cd06
#define public_41cd67 _public_41cd67
#define public_41cd9c _public_41cd9c
#define public_41cdba _public_41cdba
#define public_41cdc8 _public_41cdc8
#define public_41cdd3 _public_41cdd3
#define public_41cdde _public_41cdde
#define public_41cdfe _public_41cdfe
#define public_41ce10 _public_41ce10
#define public_41ce1b _public_41ce1b
#define public_41ce26 _public_41ce26
#define public_41ce39 _public_41ce39
#define public_41ce47 _public_41ce47
#define public_41ce52 _public_41ce52
#define public_41ce5d _public_41ce5d
#define public_41ce87 _public_41ce87
#define public_41cef8 _public_41cef8
#define public_41cf2d _public_41cf2d
#define public_41cf6d _public_41cf6d
#define public_41cfa2 _public_41cfa2
#define public_41cfe0 _public_41cfe0
#define public_41d017 _public_41d017
#define public_41d040 _public_41d040
#define public_41d047 _public_41d047
#define public_41d085 _public_41d085
#define public_41d094 _public_41d094
#define public_41d118 _public_41d118
#define public_41d151 _public_41d151
#define public_41d1a3 _public_41d1a3
#define public_41d1d8 _public_41d1d8
#define public_41d224 _public_41d224
#define public_41d250 _public_41d250
#define public_41d267 _public_41d267
#define public_41d2b3 _public_41d2b3
#define public_41d301 _public_41d301
#define public_41d350 _public_41d350
#define public_41d37c _public_41d37c
#define public_41d391 _public_41d391

PROC_DECLARE(0x41c970, internal_41c970, public_41c970);
extern "C" NAKED register_t __cdecl internal_41c970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x20E8
        call public_5b7e90
        mov edx, dword ptr ss : [esp+0x20F0]
        mov eax, dword ptr ss : [esp+0x20EC]
        add edx, edx
        mov dword ptr ss : [esp+0x14], edx
        add edx, eax
        cmp edx, eax
        mov dword ptr ss : [esp+4], ecx
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0xC], edx
        jne public_41c9ab
        xor eax, eax
        add esp, 0x20E8
        ret 8
        public_41c9ab : nop
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_41c9c0
        add esp, 0x20E8
        ret 8
        public_41c9c0 : nop
        mov edx, dword ptr ds : [public_67eca8]
        push ebx
        push ebp
        push esi
        push edi
        push 0x1000
        lea ecx, ss:[esp+0xFC]
        push ecx
        push eax
        push edx
        mov byte ptr ss : [esp+0x23], 0
        call public_4347e0
        lea eax, ss:[esp+0x108]
        add esp, 0x10
        mov dword ptr ss : [esp+0x18], eax
        public_41c9f1 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_41c9f5 : nop
        mov eax, dword ptr ss : [esp+0x20FC]
        cmp eax, ebp
        jae public_41d350
        mov edi, dword ptr ss : [esp+0x18]
        mov bx, word ptr ds : [edi]
        test bx, bx
        je public_41d37c
        add edi, 2
        cmp bx, 0x25
        mov dword ptr ss : [esp+0x18], edi
        jne public_41ca28
        mov byte ptr ss : [esp+0x13], 1
        jmp public_41c9f5
        public_41ca28 : nop
        mov cl, byte ptr ss : [esp+0x13]
        test cl, cl
        jne public_41ca53
        mov word ptr ds : [eax], bx
        mov eax, dword ptr ss : [esp+0x20FC]
        add eax, 2
        cmp eax, ebp
        mov dword ptr ss : [esp+0x20FC], eax
        je public_41d37c
        mov word ptr ds : [eax], 0
        jmp public_41c9f5
        public_41ca53 : nop
        mov ax, word ptr ds : [edi]
        xor ecx, ecx
        cmp ax, 0x30
        mov byte ptr ss : [esp+0x13], 0
        jb public_41ca85
        public_41ca63 : nop
        cmp ax, 0x39
        ja public_41ca81
        mov word ptr ss : [esp+ecx*2+0x78], ax
        inc ecx
        cmp ecx, 0x3F
        jae public_41ca81
        mov ax, word ptr ds : [edi+2]
        add edi, 2
        cmp ax, 0x30
        jae public_41ca63
        public_41ca81 : nop
        mov dword ptr ss : [esp+0x18], edi
        public_41ca85 : nop
        mov word ptr ss : [esp+ecx*2+0x78], 0
        lea ecx, ss:[esp+0x78]
        push ecx
        call dword ptr ds : [public_5c70b0]
        add esp, 4
        or esi, 0xFFFFFFFF
        cmp word ptr ds : [edi], 0x76
        mov byte ptr ss : [esp+0x20], al
        jne public_41cac1
        mov cl, byte ptr ds : [edi+2]
        cmp cl, 0x30
        jl public_41cac1
        cmp cl, 0x39
        jg public_41cac1
        movsx esi, cl
        add edi, 4
        mov dword ptr ss : [esp+0x18], edi
        sub esi, 0x30
        public_41cac1 : nop
        xor ecx, ecx
        mov cx, bx
        add ecx, 0xFFFFFFDF
        cmp ecx, 0x52
        ja public_41c9f5
/*FIXUP movzx edx, byte ptr ds : [ecx+public_41d3e8] @0x41cad2*/
/*FIXUP jmp dword ptr ds : [edx*4+public_41d3b4] @0x41cad9*/
  JMPTB cmp ecx, 0
  JMPTB mov edx, 0
  JMPTB je public_41d267
  JMPTB cmp ecx, 1
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 2
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 3
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 4
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 5
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 6
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 7
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 8
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 9
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0xA
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0xB
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0xC
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0xD
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0xE
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0xF
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x10
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x11
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x12
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x13
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x14
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x15
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x16
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x17
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x18
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x19
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x1A
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x1B
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x1C
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x1D
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x1E
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x1F
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x20
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x21
  JMPTB mov edx, 1
  JMPTB je public_41cc59
  JMPTB cmp ecx, 0x22
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x23
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x24
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x25
  JMPTB mov edx, 2
  JMPTB je public_41cce0
  JMPTB cmp ecx, 0x26
  JMPTB mov edx, 3
  JMPTB je public_41cdba
  JMPTB cmp ecx, 0x27
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x28
  JMPTB mov edx, 4
  JMPTB je public_41d2b3
  JMPTB cmp ecx, 0x29
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x2A
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x2B
  JMPTB mov edx, 5
  JMPTB je public_41d301
  JMPTB cmp ecx, 0x2C
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x2D
  JMPTB mov edx, 6
  JMPTB je public_41cdfe
  JMPTB cmp ecx, 0x2E
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x2F
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x30
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x31
  JMPTB mov edx, 7
  JMPTB je public_41cca0
  JMPTB cmp ecx, 0x32
  JMPTB mov edx, 8
  JMPTB je public_41cc0d
  JMPTB cmp ecx, 0x33
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x34
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x35
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x36
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x37
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x38
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x39
  JMPTB mov edx, 9
  JMPTB je public_41ce39
  JMPTB cmp ecx, 0x3A
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x3B
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x3C
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x3D
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x3E
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x3F
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x40
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x41
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x42
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x43
  JMPTB mov edx, 0xA
  JMPTB je public_41cb8c
  JMPTB cmp ecx, 0x44
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x45
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x46
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x47
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x48
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x49
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x4A
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x4B
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x4C
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x4D
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x4E
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x4F
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x50
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x51
  JMPTB mov edx, 0xC
  JMPTB je public_41c9f5
  JMPTB cmp ecx, 0x52
  JMPTB mov edx, 0xB
  JMPTB je public_41cae0
  JMPTB int 3
        public_41cae0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_41c9f5
        mov edi, edi
        public_41caf0 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41cafb
        cmp byte ptr ds : [ecx+0xA], al
        je public_41cb06
        public_41cafb : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41caf0
        jmp public_41c9f5
        public_41cb06 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, 2
        je public_41c9f5
        public_41cb12 : nop
        mov eax, dword ptr ss : [esp+0x20FC]
        mov edx, ebp
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push esi
        push eax
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_41cb57
        mov ecx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41cb42*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41cb4c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41cb57 : nop
        mov edx, dword ptr ss : [esp+0x20FC]
        lea edi, ds:[edx+edi*2]
        public_41cb61 : nop
        cmp ebp, edi
        mov dword ptr ss : [esp+0x20FC], edi
        jne public_41c9f5
        sub edi, 2
        mov dword ptr ss : [esp+0x20FC], edi
        mov word ptr ds : [edi], 0
        add dword ptr ss : [esp+0x20FC], 2
        jmp public_41c9f5
        public_41cb8c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_41c9f5
        lea ebx, ds:[ebx]
        public_41cba0 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41cbab
        cmp byte ptr ds : [ecx+0xA], al
        je public_41cbb6
        public_41cbab : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41cba0
        jmp public_41c9f5
        public_41cbb6 : nop
        mov edx, dword ptr ds : [ecx+4]
        push 0x1F
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_4779a0
        lea ecx, ss:[esp+0x44]
        push ecx
        call dword ptr ds : [public_5c71c8]
        lea esi, ds:[eax+eax]
        mov eax, dword ptr ss : [esp+0x210C]
        lea edx, ds:[esi+eax]
        add esp, 0x10
        cmp edx, ebp
        jae public_41c9f5
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [public_5c70ac]
        mov eax, dword ptr ss : [esp+0x2104]
        add esp, 8
        add eax, esi
        mov dword ptr ss : [esp+0x20FC], eax
        jmp public_41c9f5
        public_41cc0d : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_41c9f5
        nop 
        lea esp, ss:[esp]
        public_41cc20 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41cc2b
        cmp byte ptr ds : [ecx+0xA], al
        je public_41cc36
        public_41cc2b : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41cc20
        jmp public_41c9f5
        public_41cc36 : nop
        mov eax, dword ptr ds : [ecx+4]
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_41c9f5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        jmp public_41d040
        public_41cc59 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_41c9f5
        public_41cc67 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41cc72
        cmp byte ptr ds : [ecx+0xA], al
        je public_41cc7d
        public_41cc72 : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41cc67
        jmp public_41c9f5
        public_41cc7d : nop
        mov eax, dword ptr ds : [ecx+4]
        push eax
        call dword ptr ds : [public_5c6090]
        add esp, 4
        test eax, eax
        je public_41c9f5
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+8]
        mov esi, eax
        jmp public_41d040
        public_41cca0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_41c9f5
        mov edi, edi
        public_41ccb0 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41ccbb
        cmp byte ptr ds : [ecx+0xA], al
        je public_41ccc6
        public_41ccbb : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41ccb0
        jmp public_41c9f5
        public_41ccc6 : nop
        mov ecx, dword ptr ds : [ecx+4]
        push ebp
        lea eax, ss:[esp+0x2100]
        push eax
        push ecx
        call public_41d440
        add esp, 0xC
        jmp public_41c9f5
        public_41cce0 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_41c9f5
        mov edi, edi
        public_41ccf0 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41ccfb
        cmp byte ptr ds : [ecx+0xA], al
        je public_41cd06
        public_41ccfb : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41ccf0
        jmp public_41c9f5
        public_41cd06 : nop
        mov eax, dword ptr ds : [ecx+4]
        push eax
        call dword ptr ds : [public_5c608c]
        mov edi, eax
        add esp, 4
        cmp edi, 0xFFFFFFFF
        je public_41c9f5
        test esi, esi
        jge public_41cd9c
        mov eax, dword ptr ss : [esp+0x20FC]
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push edi
        push edx
        call public_4347e0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jne public_41cd67
        push edi
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41cd4d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41cd57*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_41cd67 : nop
        mov ecx, dword ptr ss : [esp+0x20FC]
        lea esi, ds:[ecx+esi*2]
        cmp ebp, esi
        mov dword ptr ss : [esp+0x20FC], esi
        jne public_41c9f5
        sub esi, 2
        mov dword ptr ss : [esp+0x20FC], esi
        mov word ptr ds : [esi], 0
        add dword ptr ss : [esp+0x20FC], 2
        jmp public_41c9f5
        public_41cd9c : nop
        lea eax, ds:[edi-0x300EE]
        cmp eax, 0x64
        jae public_41c9f5
        imul esi, 0x64
        lea esi, ds:[esi+eax+0x503E8]
        jmp public_41cb12
        public_41cdba : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        je public_41c9f5
        public_41cdc8 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41cdd3
        cmp byte ptr ds : [ecx+0xA], al
        je public_41cdde
        public_41cdd3 : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41cdc8
        jmp public_41c9f5
        public_41cdde : nop
        mov edx, dword ptr ds : [ecx+4]
        push edx
        call dword ptr ds : [public_5c6088]
        add esp, 4
        test eax, eax
        je public_41c9f5
        mov esi, dword ptr ds : [eax+0x88]
        jmp public_41d040
        public_41cdfe : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        je public_41c9f5
        lea esp, ss:[esp]
        public_41ce10 : nop
        cmp word ptr ds : [ecx+8], bx
        jne public_41ce1b
        cmp byte ptr ds : [ecx+0xA], al
        je public_41ce26
        public_41ce1b : nop
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        jne public_41ce10
        jmp public_41c9f5
        public_41ce26 : nop
        mov ecx, dword ptr ds : [ecx+4]
        test ecx, ecx
        je public_41c9f5
        mov esi, dword ptr ds : [ecx+4]
        jmp public_41d040
        public_41ce39 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx]
        test edi, edi
        je public_41c9f5
        public_41ce47 : nop
        cmp word ptr ds : [edi+8], bx
        jne public_41ce52
        cmp byte ptr ds : [edi+0xA], al
        je public_41ce5d
        public_41ce52 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        jne public_41ce47
        jmp public_41c9f5
        public_41ce5d : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_5c6084]
        add esp, 4
        test esi, esi
        mov ecx, eax
        jge public_41d017
        test ecx, ecx
        je public_41ce87
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x84]
        mov esi, eax
        jmp public_41d040
        public_41ce87 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 0x3F
        ja public_41c9f5
        mov esi, eax
        and eax, 7
        add eax, 0x514
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x20FC]
        mov edx, ebp
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        shr esi, 3
        push 0x331B
        and esi, 7
        push eax
        add esi, 0x506
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_41cef8
        mov ecx, dword ptr ds : [public_5c6d18]
        push 0x331B
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41cee3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41ceed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41cef8 : nop
        mov edx, dword ptr ss : [esp+0x20FC]
        lea eax, ds:[edx+edi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20FC], eax
        jne public_41cf2d
        sub eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20FC]
        add eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        public_41cf2d : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push 1
        push edx
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_41cf6d
        push 1
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41cf53*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41cf5d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_41cf6d : nop
        mov ecx, dword ptr ss : [esp+0x20FC]
        lea eax, ds:[ecx+edi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20FC], eax
        jne public_41cfa2
        sub eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20FC]
        add eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        public_41cfa2 : nop
        mov edx, ebp
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        push ebx
        push eax
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_41cfe0
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41cfcb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41cfd5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41cfe0 : nop
        mov edx, dword ptr ss : [esp+0x20FC]
        lea eax, ds:[edx+edi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20FC], eax
        jne public_41d047
        sub eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20FC]
        add eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        jmp public_41d047
        public_41d017 : nop
        test ecx, ecx
        je public_41d094
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x84]
        sub eax, 0x3FC58
        cmp eax, 0xC7
        jae public_41c9f5
        imul esi, 0xC8
        lea esi, ds:[esi+eax+0x50FA1]
        public_41d040 : nop
        mov eax, dword ptr ss : [esp+0x20FC]
        public_41d047 : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push esi
        push edx
        call public_4347e0
        mov edi, eax
        add esp, 0x10
        test edi, edi
        jne public_41d085
        push esi
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41d06b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c94a8 @0x41d075*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_41d085 : nop
        mov ecx, dword ptr ss : [esp+0x20FC]
        lea edi, ds:[ecx+edi*2]
        jmp public_41cb61
        public_41d094 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, 0x3F
        ja public_41c9f5
        mov edx, dword ptr ss : [esp+0x1C]
        imul esi, 0xC8
        mov edi, eax
        and eax, 7
        add eax, 0x514
        mov ebx, eax
        mov eax, dword ptr ss : [esp+0x20FC]
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        mov eax, dword ptr ds : [public_67eca8]
        shr edi, 3
        add esi, 0x50FA0
        push esi
        and edi, 7
        push eax
        add edi, 0x506
        call public_4347e0
        mov ebp, eax
        add esp, 0x10
        test ebp, ebp
        jne public_41d118
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x3C]
        call public_411c50
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41d108*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
/*FIXUP push offset public_5c94a8 @0x41d10d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x14
        public_41d118 : nop
        mov eax, dword ptr ss : [esp+0x20FC]
        mov ecx, dword ptr ss : [esp+0x1C]
        lea eax, ds:[eax+ebp*2]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x20FC], eax
        jne public_41d151
        sub eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20FC]
        add eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        public_41d151 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push 1
        push edx
        call public_4347e0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jne public_41d1a3
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x38]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push 1
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41d193*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
/*FIXUP push offset public_5c94a8 @0x41d198*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41d1a3 : nop
        mov edx, dword ptr ss : [esp+0x20FC]
        lea eax, ds:[edx+esi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20FC], eax
        jne public_41d1d8
        sub eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x20FC]
        add eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        public_41d1d8 : nop
        mov edx, dword ptr ds : [public_67eca8]
        mov ecx, ebp
        sub ecx, eax
        sar ecx, 1
        push ecx
        push eax
        push ebx
        push edx
        call public_4347e0
        mov esi, eax
        add esp, 0x10
        test esi, esi
        jne public_41d224
        push 2
        push 0x10000
        lea ecx, ss:[esp+0x34]
        call public_411c50
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_5c6d18]
        push ebx
        push 0x18C
/*FIXUP push offset public_5c93e4 @0x41d214*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
/*FIXUP push offset public_5c94a8 @0x41d219*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c94a8
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_41d224 : nop
        mov edx, dword ptr ss : [esp+0x20FC]
        lea eax, ds:[edx+esi*2]
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20FC], eax
        jne public_41d250
        sub eax, 2
        mov dword ptr ss : [esp+0x20FC], eax
        mov word ptr ds : [eax], 0
        add dword ptr ss : [esp+0x20FC], 2
        public_41d250 : nop
        push edi
        lea eax, ss:[esp+0x2100]
        push ebp
        push eax
        call public_41d5b0
        add esp, 0xC
        jmp public_41c9f1
        public_41d267 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_41c940
        test eax, eax
        je public_41c9f5
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_41c9f5
        mov eax, dword ptr ss : [esp+0x20FC]
        mov edx, ebp
        sub edx, eax
        sar edx, 1
        push edx
        push eax
        call public_41c970
        mov ecx, dword ptr ss : [esp+0x20FC]
        lea edx, ds:[ecx+eax*2]
        mov dword ptr ss : [esp+0x20FC], edx
        jmp public_41c9f5
        public_41d2b3 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x14]
        push ebx
        push eax
        call public_41c940
        test eax, eax
        je public_41c9f5
        mov eax, dword ptr ds : [eax+4]
        cmp eax, 0x64
        jae public_41c9f5
        xor ecx, ecx
        test esi, esi
        setle cl
        dec ecx
        and ecx, esi
        imul ecx, 0x64
        lea edx, ds:[ecx+eax+0x507D0]
        push edx
        lea eax, ss:[esp+0x2100]
        push ebp
        push eax
        call public_41d5b0
        add esp, 0xC
        jmp public_41c9f5
        public_41d301 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ebx
        push ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        call public_41c940
        test eax, eax
        je public_41c9f5
        mov eax, dword ptr ds : [eax+4]
        cmp eax, 0x64
        jae public_41c9f5
        xor edx, edx
        test esi, esi
        setle dl
        lea ecx, ss:[esp+0x20FC]
        dec edx
        and edx, esi
        imul edx, 0x64
        lea eax, ds:[edx+eax+0x50BB8]
        push eax
        push ebp
        push ecx
        call public_41d5b0
        add esp, 0xC
        jmp public_41c9f5
        nop 
        public_41d350 : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ds : [ecx+4]
        push edx
        push 0x1D3
/*FIXUP push offset public_5c93e4 @0x41d362*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c93e4
        mov eax, 0x100002
/*FIXUP push offset public_5c9450 @0x41d36c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9450
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x18
        public_41d37c : nop
        mov eax, dword ptr ss : [esp+0x20FC]
        cmp eax, ebp
        jb public_41d391
        lea eax, ss:[ebp-2]
        mov dword ptr ss : [esp+0x20FC], eax
        public_41d391 : nop
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x20FC]
        pop edi
        sub eax, ebp
        pop esi
        add eax, edx
        pop ebp
        sar eax, 1
        pop ebx
        add esp, 0x20E8
        ret 8
        UNREACHABLE_TRAP(0x41c970)
        ASM_EXPORT_ENTRY_SINGLE(0x41c9f5, public_41c9f5)
    }
}

#undef public_41c9ab
#undef public_41c9c0
#undef public_41c9f1
#undef public_41c9f5
#undef public_41ca28
#undef public_41ca53
#undef public_41ca63
#undef public_41ca81
#undef public_41ca85
#undef public_41cac1
#undef public_41cae0
#undef public_41caf0
#undef public_41cafb
#undef public_41cb06
#undef public_41cb12
#undef public_41cb57
#undef public_41cb61
#undef public_41cb8c
#undef public_41cba0
#undef public_41cbab
#undef public_41cbb6
#undef public_41cc0d
#undef public_41cc20
#undef public_41cc2b
#undef public_41cc36
#undef public_41cc59
#undef public_41cc67
#undef public_41cc72
#undef public_41cc7d
#undef public_41cca0
#undef public_41ccb0
#undef public_41ccbb
#undef public_41ccc6
#undef public_41cce0
#undef public_41ccf0
#undef public_41ccfb
#undef public_41cd06
#undef public_41cd67
#undef public_41cd9c
#undef public_41cdba
#undef public_41cdc8
#undef public_41cdd3
#undef public_41cdde
#undef public_41cdfe
#undef public_41ce10
#undef public_41ce1b
#undef public_41ce26
#undef public_41ce39
#undef public_41ce47
#undef public_41ce52
#undef public_41ce5d
#undef public_41ce87
#undef public_41cef8
#undef public_41cf2d
#undef public_41cf6d
#undef public_41cfa2
#undef public_41cfe0
#undef public_41d017
#undef public_41d040
#undef public_41d047
#undef public_41d085
#undef public_41d094
#undef public_41d118
#undef public_41d151
#undef public_41d1a3
#undef public_41d1d8
#undef public_41d224
#undef public_41d250
#undef public_41d267
#undef public_41d2b3
#undef public_41d301
#undef public_41d350
#undef public_41d37c
#undef public_41d391

#pragma init_seg(compiler)
extern "C" void const* const public_41c9f5 = __AsmFindLabelExport(&internal_41c970, 0x41c9f5);
