#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d520);
CLANG_FORWARD_PROC_SYMBOL(public_6f3aa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f3af50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b400);
CLANG_FORWARD_PROC_SYMBOL(public_6f3ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bc60);
CLANG_FORWARD_PROC_SYMBOL(public_6f3bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cc90);
CLANG_FORWARD_PROC_SYMBOL(public_6f3cef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d090);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d550);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d760);
CLANG_FORWARD_PROC_SYMBOL(public_6f3d810);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);
CLANG_FORWARD_JUMP_SYMBOL(public_6f58e3b);

#define public_6f3afb0 _public_6f3afb0
#define public_6f3affa _public_6f3affa
#define public_6f3b000 _public_6f3b000
#define public_6f3b083 _public_6f3b083
#define public_6f3b0c8 _public_6f3b0c8
#define public_6f3b146 _public_6f3b146
#define public_6f3b179 _public_6f3b179
#define public_6f3b17f _public_6f3b17f
#define public_6f3b183 _public_6f3b183
#define public_6f3b1ae _public_6f3b1ae
#define public_6f3b1e9 _public_6f3b1e9
#define public_6f3b1eb _public_6f3b1eb
#define public_6f3b1f2 _public_6f3b1f2
#define public_6f3b207 _public_6f3b207

PROC_DECLARE(0x6f3af50, internal_6f3af50, public_6f3af50);
extern "C" NAKED register_t __cdecl internal_6f3af50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f58e3b @0x6f3af58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f58e3b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x2064
        mov dword ptr fs : [0], esp
        call public_6f57ee0
        push ebx
        push ebp
        push edi
        lea eax, ss:[esp+0x1B]
        push eax
        mov ebx, ecx
        xor edi, edi
        push edi
        lea ecx, ss:[esp+0x22]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x28], edi
        call public_6f3d4d0
        mov edx, dword ptr ss : [esp+0x2080]
        mov eax, dword ptr ss : [esp+0x2084]
        mov ebp, dword ptr ds : [edx]
        cmp ebp, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2078], edi
        je public_6f3b207
        push esi
        mov edi, edi
        public_6f3afb0 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0x14
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x70]
        mov dword ptr ss : [esp+0x48], ecx
        push eax
        lea ecx, ds:[ebx+0xA4]
        mov dword ptr ss : [esp+0x50], edi
        call public_6f3ba50
        mov eax, dword ptr ds : [eax]
        cmp dword ptr ds : [eax+0x10], edi
        je public_6f3b1f2
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ebx+0xEC]
        mov dword ptr ss : [esp+0x10], ecx
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f3b083
        jmp public_6f3b000
        public_6f3affa : nop
        xor edi, edi
        lea esp, ss:[esp]
        public_6f3b000 : nop
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], edi
        fild qword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_6f3b083
        fld dword ptr ds : [esi+8]
        call public_6f57f16
        push eax
        mov ecx, ebx
        call public_6f3b400
        fld dword ptr ds : [esi+8]
        call public_6f57f16
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x68]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f3d550
        mov eax, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        push esi
        mov dword ptr ds : [eax+4], ecx
        call public_6f57e26
        mov ecx, dword ptr ds : [ebx+0xF0]
        add esp, 4
        dec ecx
        mov dword ptr ds : [ebx+0xF0], ecx
        cmp edi, dword ptr ds : [ebx+0xEC]
        mov esi, edi
        jne public_6f3affa
        xor edi, edi
        public_6f3b083 : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+8]
        push eax
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_6f3d810
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, dword ptr ss : [esp+0x38]
        jne public_6f3b0c8
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+8]
        push eax
        mov ecx, ebx
        call public_6f3b400
        mov ecx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ecx+8]
        push eax
        lea edx, ss:[esp+0x60]
        push edx
        lea ecx, ss:[esp+0x2C]
        call public_6f3d550
        public_6f3b0c8 : nop
        mov eax, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [eax+0x10]
        cmp eax, edi
        jle public_6f3b1ae
        cmp eax, 0x13
        jg public_6f3b1ae
        mov eax, dword ptr ds : [ebx+0x28]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        lea eax, ds:[ebx+0xA4]
        push eax
        call dword ptr ds : [edx+0xC]
        test al, al
        je public_6f3b1eb
        mov eax, dword ptr ds : [ebx+0xE0]
        lea edx, ss:[esp+0x10]
        push edx
        lea ecx, ds:[ebx+0xD8]
        push 1
        push eax
        call public_6f3cc90
        mov eax, dword ptr ss : [esp+0x10]
        fild dword ptr ds : [eax+0x1C]
        fcom dword ptr ds : [public_6f5a1d4]
        fnstsw ax
        test ah, 1
        jne public_6f3b1e9
        mov edi, dword ptr ds : [ebx+0xEC]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edi]
        cmp ecx, edi
        lea esi, ds:[ebx+0xE8]
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f3b183
        public_6f3b146 : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x44
        jp public_6f3b179
        push 0
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6f3d090
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        mov ecx, esi
        call public_6f3bc60
        mov ecx, dword ptr ss : [esp+0x18]
        jmp public_6f3b17f
        public_6f3b179 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], ecx
        public_6f3b17f : nop
        cmp ecx, edi
        jne public_6f3b146
        public_6f3b183 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        fild dword ptr ds : [ecx+0x1C]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x48]
        lea eax, ss:[esp+0x44]
        push eax
        mov ecx, esi
        call public_6f3cef0
        mov ecx, esi
        call public_6f3bca0
        xor edi, edi
        jmp public_6f3b1eb
        public_6f3b1ae : nop
        push eax
        lea ecx, ss:[esp+0x78]
/*FIXUP push offset public_6f6008c @0x6f3b1b3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6008c
        push ecx
        call public_6f2d520
        mov edx, dword ptr ds : [public_6f5a004]
        push eax
        push 0x5CF
/*FIXUP push offset public_6f6004c @0x6f3b1ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f6004c
        mov ecx, 0x100002
/*FIXUP push offset public_6f5eb0c @0x6f3b1d4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f5eb0c
        push ecx
        call dword ptr ds : [edx]
        add esp, 0x20
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        jmp public_6f3b1eb
        public_6f3b1e9 : nop
        fstp st(0)
        public_6f3b1eb : nop
        mov ecx, ebx
        call public_6f3aa00
        public_6f3b1f2 : nop
        mov eax, dword ptr ss : [esp+0x2088]
        mov ecx, dword ptr ds : [eax]
        add ebp, 4
        cmp ebp, ecx
        jne public_6f3afb0
        pop esi
        public_6f3b207 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea ecx, ss:[esp+0x40]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x2084], 0xFFFFFFFF
        call public_6f3d760
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x38], edi
        call public_6f57e26
        mov ecx, dword ptr ss : [esp+0x2078]
        mov eax, dword ptr ss : [esp+0x24]
        add esp, 8
        pop edi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2070
        ret 8
        UNREACHABLE_TRAP(0x6f3af50)
    }
}

#undef public_6f3afb0
#undef public_6f3affa
#undef public_6f3b000
#undef public_6f3b083
#undef public_6f3b0c8
#undef public_6f3b146
#undef public_6f3b179
#undef public_6f3b17f
#undef public_6f3b183
#undef public_6f3b1ae
#undef public_6f3b1e9
#undef public_6f3b1eb
#undef public_6f3b1f2
#undef public_6f3b207
