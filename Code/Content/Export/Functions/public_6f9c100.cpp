#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f979b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f98780);
CLANG_FORWARD_PROC_SYMBOL(public_6f9c100);

#define public_6f9c1a2 _public_6f9c1a2
#define public_6f9c23f _public_6f9c23f
#define public_6f9c2a3 _public_6f9c2a3
#define public_6f9c2a7 _public_6f9c2a7
#define public_6f9c2d5 _public_6f9c2d5
#define public_6f9c32e _public_6f9c32e
#define public_6f9c33f _public_6f9c33f
#define public_6f9c34d _public_6f9c34d
#define public_6f9c390 _public_6f9c390
#define public_6f9c3a2 _public_6f9c3a2
#define public_6f9c3a6 _public_6f9c3a6
#define public_6f9c3d7 _public_6f9c3d7
#define public_6f9c3ef _public_6f9c3ef

PROC_DECLARE(0x6f9c100, internal_6f9c100, public_6f9c100);
extern "C" NAKED register_t __cdecl internal_6f9c100()
{
    __asm
    {
        sub esp, 0x40
        fld dword ptr ds : [public_6fbcbcc]
        mov eax, dword ptr ds : [public_6fbcbcc]
        fsub dword ptr ds : [public_6fbd3e8]
        push ebx
        push ebp
        push esi
        push edi
        push 0x43960000
        push ecx
        fstp dword ptr ss : [esp]
        mov edi, ecx
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        mov bl, 1
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3234]
        mov esi, dword ptr ss : [esp+0x64]
        fld dword ptr ds : [esi+0x20]
        mov ebp, dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [eax]
        lea edx, ss:[ebp+0x44]
        add esp, 0x10
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x24]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx+8], eax
        mov al, byte ptr ds : [edi+0x1F]
        test al, al
        je public_6f9c23f
        mov al, byte ptr ds : [edi+0x16]
        test al, al
        je public_6f9c1a2
        mov dword ptr ss : [esp+0x10], 2
        mov dword ptr ss : [esp+0x14], 1
        public_6f9c1a2 : nop
        mov ecx, dword ptr ds : [public_6fbcbc0]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x5C]
        xor ebx, ebx
        push edx
        mov dword ptr ss : [esp+0x3C], ecx
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x3C], 1
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], 1
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov dword ptr ss : [esp+0x54], ebx
        call public_6f98780
        push ebx
        push ebx
        lea edx, ss:[esp+0x2C]
        push edx
        lea eax, ss:[esp+0x48]
        push eax
        push ebp
        push esi
        call public_6f979b0
        mov bl, al
        mov al, byte ptr ds : [edi+0x21]
        add esp, 0x24
        and bl, 1
        test al, al
        je public_6f9c3ef
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        mov dword ptr ss : [esp+0x54], 3
        mov dword ptr ss : [esp+0x58], 1
        call public_6f98780
        push 0
        jmp public_6f9c3d7
        public_6f9c23f : nop
        mov al, byte ptr ds : [edi+0x15]
        test al, al
        je public_6f9c2d5
        mov eax, dword ptr ds : [public_6fbcbc0]
        xor ebx, ebx
        mov dword ptr ss : [esp+0x38], eax
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x30], 1
        mov byte ptr ss : [esp+0x31], bl
        mov byte ptr ss : [esp+0x32], 1
        mov byte ptr ss : [esp+0x33], bl
        mov byte ptr ss : [esp+0x34], bl
        mov dword ptr ss : [esp+0x48], ebx
        jne public_6f9c2a7
        mov al, byte ptr ds : [edi+0x16]
        test al, al
        je public_6f9c2a3
        mov dword ptr ss : [esp+0x10], 2
        mov dword ptr ss : [esp+0x14], 1
        jmp public_6f9c2a7
        public_6f9c2a3 : nop
        mov dword ptr ss : [esp+0x10], ebx
        public_6f9c2a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call public_6f98780
        push ebx
        push ebx
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        push ebp
        push esi
        call public_6f979b0
        mov bl, al
        add esp, 0x24
        and bl, 1
        public_6f9c2d5 : nop
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        je public_6f9c3ef
        mov eax, dword ptr ds : [public_6fbcbc0]
        xor ecx, ecx
        mov dword ptr ss : [esp+0x38], eax
        mov al, byte ptr ds : [edi+0xE]
        test al, al
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x40], ecx
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        mov byte ptr ss : [esp+0x30], 1
        mov byte ptr ss : [esp+0x31], 1
        mov byte ptr ss : [esp+0x32], cl
        mov byte ptr ss : [esp+0x33], 1
        mov byte ptr ss : [esp+0x34], al
        je public_6f9c34d
        mov al, byte ptr ds : [edi+0xF]
        test al, al
        je public_6f9c32e
        mov dword ptr ss : [esp+0x44], 3
        jmp public_6f9c34d
        public_6f9c32e : nop
        mov al, byte ptr ds : [edi+0x10]
        test al, al
        je public_6f9c33f
        mov dword ptr ss : [esp+0x44], 2
        jmp public_6f9c34d
        public_6f9c33f : nop
        mov al, byte ptr ds : [edi+0x11]
        xor edx, edx
        test al, al
        setne dl
        mov dword ptr ss : [esp+0x44], edx
        public_6f9c34d : nop
        mov al, byte ptr ds : [edi+0x15]
        test al, al
        je public_6f9c3a2
        mov eax, dword ptr ss : [ebp+0x3C]
        mov edx, dword ptr ds : [eax-0x10]
        sub eax, 0x14
        cmp edx, ecx
        je public_6f9c390
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jbe public_6f9c390
        mov dword ptr ss : [esp+0x48], 3
        mov dword ptr ss : [esp+0x4C], 1
        jmp public_6f9c3a6
        public_6f9c390 : nop
        mov dword ptr ss : [esp+0x48], 2
        mov dword ptr ss : [esp+0x4C], 8
        jmp public_6f9c3a6
        public_6f9c3a2 : nop
        mov dword ptr ss : [esp+0x48], ecx
        public_6f9c3a6 : nop
        mov ecx, dword ptr ds : [esi+4]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [public_6fb6058]
        push ecx
        push ecx
        lea edx, ss:[esp+0x40]
        fstp dword ptr ss : [esp]
        push edx
        mov dword ptr ss : [esp+0x1C], 3
        mov dword ptr ss : [esp+0x20], 0x63
        call public_6f98780
        mov eax, dword ptr ss : [esp+0x6C]
        push eax
        public_6f9c3d7 : nop
        push 0
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x48]
        push edx
        push ebp
        push esi
        call public_6f979b0
        add esp, 0x24
        and bl, al
        public_6f9c3ef : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x50], eax
        mov dword ptr ss : [ebp+0x54], ecx
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x40
        ret 0x10
        UNREACHABLE_TRAP(0x6f9c100)
    }
}

#undef public_6f9c1a2
#undef public_6f9c23f
#undef public_6f9c2a3
#undef public_6f9c2a7
#undef public_6f9c2d5
#undef public_6f9c32e
#undef public_6f9c33f
#undef public_6f9c34d
#undef public_6f9c390
#undef public_6f9c3a2
#undef public_6f9c3a6
#undef public_6f9c3d7
#undef public_6f9c3ef
