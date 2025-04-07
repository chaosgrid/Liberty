#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_537260);
CLANG_FORWARD_PROC_SYMBOL(public_585b10);
CLANG_FORWARD_PROC_SYMBOL(public_586560);
CLANG_FORWARD_PROC_SYMBOL(public_586b70);
CLANG_FORWARD_PROC_SYMBOL(public_587200);
CLANG_FORWARD_PROC_SYMBOL(public_5873a0);
CLANG_FORWARD_PROC_SYMBOL(public_587470);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4404);

#define public_586bf0 _public_586bf0
#define public_586c46 _public_586c46
#define public_586c60 _public_586c60
#define public_586c6d _public_586c6d
#define public_586c76 _public_586c76
#define public_586c9a _public_586c9a
#define public_586c9e _public_586c9e
#define public_586ca5 _public_586ca5
#define public_586caa _public_586caa
#define public_586d65 _public_586d65
#define public_586d6d _public_586d6d
#define public_586d77 _public_586d77
#define public_586d7f _public_586d7f
#define public_586da5 _public_586da5
#define public_586dac _public_586dac
#define public_586db4 _public_586db4
#define public_586dde _public_586dde
#define public_586de3 _public_586de3
#define public_586df7 _public_586df7
#define public_586e24 _public_586e24
#define public_586e2d _public_586e2d
#define public_586e44 _public_586e44
#define public_586e64 _public_586e64
#define public_586e7d _public_586e7d
#define public_586e91 _public_586e91
#define public_586e95 _public_586e95
#define public_586f1d _public_586f1d
#define public_586f26 _public_586f26
#define public_586f71 _public_586f71
#define public_586f7a _public_586f7a
#define public_586f9b _public_586f9b
#define public_586fc7 _public_586fc7
#define public_586fdd _public_586fdd
#define public_586fe8 _public_586fe8

PROC_DECLARE(0x586b70, internal_586b70, public_586b70);
extern "C" NAKED register_t __cdecl internal_586b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5c4404 @0x586b72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4404
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebx
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x568]
        mov edx, dword ptr ds : [edi+0x564]
        lea ecx, ds:[edi+0x560]
        push eax
        push edx
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x28], ecx
        call public_5873a0
        mov eax, dword ptr ds : [edi+0x4D4]
        xor ebx, ebx
        cmp eax, ebx
        je public_586fe8
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x3C], al
        xor ebp, ebp
        xor eax, eax
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x40], ebp
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x48], ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x84], ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_586d7f
        public_586bf0 : nop
        mov ecx, esi
        call dword ptr ds : [public_5c6294]
        cmp ebx, eax
        jge public_586d77
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c6214]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_5c620c]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], eax
        call public_586560
        mov eax, dword ptr ds : [edi+0x550]
        test eax, eax
        je public_586d6d
        mov ebp, dword ptr ds : [edi+0x554]
        sub ebp, eax
        sar ebp, 2
        test ebp, ebp
        je public_586d6d
        or ebx, 0xFFFFFFFF
        xor esi, esi
        xor edx, edx
        public_586c46 : nop
        mov eax, dword ptr ds : [edx*8+public_615240]
        xor ecx, ecx
        test ebp, ebp
        jle public_586c76
        mov edi, dword ptr ds : [edi+0x550]
        lea esp, ss:[esp]
        public_586c60 : nop
        cmp eax, dword ptr ds : [edi+ecx*4]
        jne public_586c6d
        cmp eax, esi
        jle public_586c6d
        mov esi, eax
        mov ebx, edx
        public_586c6d : nop
        inc ecx
        cmp ecx, ebp
        jl public_586c60
        mov edi, dword ptr ss : [esp+0x1C]
        public_586c76 : nop
        inc edx
        cmp edx, 0x3C
        jl public_586c46
        test ebx, ebx
        jl public_586d65
        lea eax, ds:[esi-4]
        cmp eax, 0x3E
        ja public_586ca5
/*FIXUP movzx ecx, byte ptr ds : [eax+public_587008] @0x586c8c*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_586ffc] @0x586c93*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 1
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 2
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 3
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 4
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 5
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 6
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 7
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 8
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 9
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 2
  JMPTB je public_586ca5
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 0
  JMPTB je public_586c9a
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 1
  JMPTB je public_586c9e
  JMPTB int 3
        public_586c9a : nop
        xor ebp, ebp
        jmp public_586caa
        public_586c9e : nop
        mov ebp, 1
        jmp public_586caa
        public_586ca5 : nop
        mov ebp, 2
        public_586caa : nop
        push esi
        call public_585b10
        add esp, 4
        lea edx, ss:[esp+0x13]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x24]
        push edx
        push eax
        lea ecx, ss:[esp+0x54]
        call dword ptr ds : [public_5c7044]
        mov edi, dword ptr ds : [ebx*8+public_615244]
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x60], cl
        push 0
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x88], 1
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov dword ptr ss : [esp+0x5C], edi
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x90], 2
        call dword ptr ds : [public_5c6f9c]
        push 1
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x78], ebp
        mov dword ptr ss : [esp+0x7C], esi
        mov dword ptr ss : [esp+0x74], ebx
        mov byte ptr ss : [esp+0x88], 0
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ss : [esp+0x44]
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x8C], 3
        call public_587200
        push 1
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x88], 0
        call dword ptr ds : [public_5c7084]
        mov edi, dword ptr ss : [esp+0x1C]
        public_586d65 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x20]
        public_586d6d : nop
        inc ebx
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_586bf0
        public_586d77 : nop
        mov eax, dword ptr ss : [esp+0x44]
        mov ebp, dword ptr ss : [esp+0x40]
        public_586d7f : nop
        mov cl, byte ptr ss : [esp+0x13]
        xor edx, edx
        mov byte ptr ss : [esp+0x2C], cl
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], edx
        cmp ebp, edx
        mov byte ptr ss : [esp+0x84], 4
        jne public_586da5
        xor esi, esi
        jmp public_586dac
        public_586da5 : nop
        sub eax, ebp
        sar eax, 5
        mov esi, eax
        public_586dac : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], edx
        jle public_586dde
        public_586db4 : nop
        mov eax, dword ptr ss : [esp+0x34]
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push eax
        lea ecx, ss:[esp+0x38]
        call public_537260
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        jl public_586db4
        mov edx, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x40]
        public_586dde : nop
        dec esi
        mov dword ptr ss : [esp+0x18], esi
        public_586de3 : nop
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        test eax, eax
        mov bl, 1
        mov dword ptr ss : [esp+0x14], ecx
        jle public_586e7d
        public_586df7 : nop
        mov esi, dword ptr ds : [edx+ecx*4]
        mov eax, dword ptr ds : [edx+ecx*4+4]
        shl esi, 5
        mov edi, dword ptr ds : [esi+ebp+0x14]
        shl eax, 5
        add esi, ebp
        add eax, ebp
        mov ebp, dword ptr ds : [eax+0x14]
        cmp edi, ebp
        jl public_586e44
        jne public_586e64
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        mov ecx, dword ptr ds : [public_5c7078]
        jne public_586e24
        mov eax, ecx
        public_586e24 : nop
        mov esi, dword ptr ds : [esi+8]
        test esi, esi
        jne public_586e2d
        mov esi, ecx
        public_586e2d : nop
        push eax
        push esi
        call dword ptr ds : [public_5c6d24]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x38]
        add esp, 8
        test eax, eax
        jge public_586e64
        public_586e44 : nop
        mov esi, dword ptr ds : [edx+ecx*4+4]
        mov eax, dword ptr ds : [edx+ecx*4]
        mov dword ptr ds : [edx+ecx*4], esi
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+edx*4+4], eax
        mov edx, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x14]
        xor bl, bl
        public_586e64 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x40]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        jl public_586df7
        test bl, bl
        je public_586de3
        public_586e7d : nop
        mov eax, dword ptr ss : [esp+0x18]
        xor esi, esi
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        jl public_586f9b
        jmp public_586e95
        public_586e91 : nop
        mov ebp, dword ptr ss : [esp+0x40]
        public_586e95 : nop
        mov esi, dword ptr ds : [edx+eax*4]
        shl esi, 5
        mov edi, dword ptr ds : [esi+ebp+0x1C]
        add esi, ebp
        mov ebp, dword ptr ds : [esi+0x18]
        lea eax, ds:[esi+4]
        push eax
        lea ecx, ss:[esp+0x50]
        call dword ptr ds : [public_5c6fa0]
        mov esi, dword ptr ds : [esi]
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x60], cl
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x64]
        mov byte ptr ss : [esp+0x88], 5
        call dword ptr ds : [public_5c7084]
        mov edx, dword ptr ds : [public_5c7080]
        mov dword ptr ss : [esp+0x5C], esi
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x6C]
        mov byte ptr ss : [esp+0x90], 6
        call dword ptr ds : [public_5c6f9c]
        mov eax, dword ptr ss : [esp+0x50]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x74], ebp
        mov dword ptr ss : [esp+0x78], edi
        mov dword ptr ss : [esp+0x70], ebx
        je public_586f26
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_586f1d
        cmp cl, 0xFF
        je public_586f1d
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_586f26
        public_586f1d : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_586f26 : nop
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x54], ebx
        mov dword ptr ss : [esp+0x58], ebx
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x5C]
        push edx
        push 1
        push eax
        mov byte ptr ss : [esp+0x90], 7
        call public_587470
        mov eax, dword ptr ss : [esp+0x64]
        cmp eax, ebx
        mov byte ptr ss : [esp+0x84], 4
        je public_586f7a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_586f71
        cmp cl, 0xFF
        je public_586f71
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_586f7a
        public_586f71 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_586f7a : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x30]
        dec eax
        mov dword ptr ss : [esp+0x64], ebx
        mov dword ptr ss : [esp+0x68], ebx
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x14], eax
        jns public_586e91
        xor esi, esi
        public_586f9b : nop
        push edx
        call public_5b7e1d
        mov edi, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x34], esi
        mov dword ptr ss : [esp+0x38], esi
        mov dword ptr ss : [esp+0x3C], esi
        mov esi, dword ptr ss : [esp+0x44]
        add esp, 4
        cmp esi, edi
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        je public_586fdd
        public_586fc7 : nop
        push 1
        lea ecx, ds:[esi+4]
        call dword ptr ds : [public_5c7084]
        add esi, 0x20
        cmp esi, edi
        jne public_586fc7
        mov esi, dword ptr ss : [esp+0x40]
        public_586fdd : nop
        push esi
        call public_5b7e1d
        add esp, 4
        pop esi
        pop ebp
        public_586fe8 : nop
        mov ecx, dword ptr ss : [esp+0x74]
        pop edi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x586b70)
        ASM_EXPORT_ENTRY_SINGLE(0x586ca5, public_586ca5)
    }
}

#undef public_586bf0
#undef public_586c46
#undef public_586c60
#undef public_586c6d
#undef public_586c76
#undef public_586c9a
#undef public_586c9e
#undef public_586ca5
#undef public_586caa
#undef public_586d65
#undef public_586d6d
#undef public_586d77
#undef public_586d7f
#undef public_586da5
#undef public_586dac
#undef public_586db4
#undef public_586dde
#undef public_586de3
#undef public_586df7
#undef public_586e24
#undef public_586e2d
#undef public_586e44
#undef public_586e64
#undef public_586e7d
#undef public_586e91
#undef public_586e95
#undef public_586f1d
#undef public_586f26
#undef public_586f71
#undef public_586f7a
#undef public_586f9b
#undef public_586fc7
#undef public_586fdd
#undef public_586fe8

#pragma init_seg(compiler)
extern "C" void const* const public_586ca5 = __AsmFindLabelExport(&internal_586b70, 0x586ca5);
