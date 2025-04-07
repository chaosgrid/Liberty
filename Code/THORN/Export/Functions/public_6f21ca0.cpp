#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21000);
CLANG_FORWARD_PROC_SYMBOL(public_6f21ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f22600);
CLANG_FORWARD_PROC_SYMBOL(public_6f22630);
CLANG_FORWARD_PROC_SYMBOL(public_6f23570);
CLANG_FORWARD_PROC_SYMBOL(public_6f23630);
CLANG_FORWARD_PROC_SYMBOL(public_6f236a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f236c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23a00);
CLANG_FORWARD_PROC_SYMBOL(public_6f23a50);
CLANG_FORWARD_PROC_SYMBOL(public_6f23a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f23d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f23e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f240d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24130);
CLANG_FORWARD_PROC_SYMBOL(public_6f24170);
CLANG_FORWARD_PROC_SYMBOL(public_6f24240);
CLANG_FORWARD_PROC_SYMBOL(public_6f24710);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_JUMP_SYMBOL(public_6f583e8);

#define public_6f21cd0 _public_6f21cd0
#define public_6f21d18 _public_6f21d18
#define public_6f21d36 _public_6f21d36
#define public_6f21d6c _public_6f21d6c
#define public_6f21d89 _public_6f21d89
#define public_6f21dcd _public_6f21dcd
#define public_6f21dec _public_6f21dec
#define public_6f21e40 _public_6f21e40
#define public_6f21e5f _public_6f21e5f
#define public_6f21e70 _public_6f21e70
#define public_6f21ec2 _public_6f21ec2
#define public_6f21ed2 _public_6f21ed2
#define public_6f21f1e _public_6f21f1e
#define public_6f21ff7 _public_6f21ff7

PROC_DECLARE(0x6f21ca0, internal_6f21ca0, public_6f21ca0);
extern "C" NAKED register_t __cdecl internal_6f21ca0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6f583e8 @0x6f21ca8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6f583e8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        push ebx
        xor ebx, ebx
        cmp eax, ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi+0x10], ebx
        mov byte ptr ds : [esi+0x5C], bl
        jne public_6f21cd0
        mov byte ptr ds : [esi+0x5D], bl
        public_6f21cd0 : nop
        mov edi, dword ptr ss : [esp+0x40]
        cmp edi, ebx
        je public_6f21ff7
        push ebp
        lea ebp, ds:[esi+0x14]
        mov dword ptr ds : [esi+0x58], edi
        mov ecx, ebp
        mov dword ptr ds : [esi+0x54], 1
        add edi, 3
        call public_6f236a0
        cmp eax, edi
        mov ecx, ebp
        jae public_6f21d18
        mov ebx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f236a0
        mov ecx, edi
        sub ecx, eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6f236c0
        xor ebx, ebx
        jmp public_6f21d36
        public_6f21d18 : nop
        call public_6f236a0
        cmp edi, eax
        jae public_6f21d36
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        lea edx, ds:[edi+edi*2]
        lea eax, ds:[ecx+edx*4]
        push eax
        mov ecx, ebp
        call public_6f23a00
        public_6f21d36 : nop
        lea ebp, ds:[esi+0x34]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x44], 0
        call public_6f23630
        cmp eax, edi
        jae public_6f21d6c
        mov ebx, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, ebp
        call public_6f23630
        mov edx, edi
        sub edx, eax
        push edx
        push ebx
        mov ecx, ebp
        call public_6f23e30
        xor ebx, ebx
        jmp public_6f21d89
        public_6f21d6c : nop
        mov ecx, ebp
        call public_6f23630
        cmp edi, eax
        jae public_6f21d89
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        lea eax, ds:[ecx+edi*4]
        push eax
        mov ecx, ebp
        call public_6f240d0
        public_6f21d89 : nop
        mov cl, byte ptr ss : [esp+0x40]
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        lea ebp, ds:[esi+0x44]
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], ebx
        call public_6f24170
        cmp eax, edi
        mov ecx, ebp
        jae public_6f21dcd
        mov ebx, dword ptr ss : [ebp+8]
        lea edx, ss:[esp+0x1C]
        push edx
        call public_6f24170
        mov ecx, edi
        sub ecx, eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6f24240
        jmp public_6f21dec
        public_6f21dcd : nop
        call public_6f24170
        cmp edi, eax
        jae public_6f21dec
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ss : [ebp+8]
        mov edx, edi
        shl edx, 4
        add edx, ecx
        push eax
        push edx
        mov ecx, ebp
        call public_6f24710
        public_6f21dec : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x20]
        push eax
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        call public_6f24130
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_6f57e26
        lea ebp, ds:[esi+0x24]
        add esp, 4
        mov ecx, ebp
        call public_6f23a50
        cmp eax, edi
        mov ecx, ebp
        jae public_6f21e40
        mov ebx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6f23a50
        mov ecx, edi
        sub ecx, eax
        push ecx
        push ebx
        mov ecx, ebp
        call public_6f23a70
        jmp public_6f21e5f
        public_6f21e40 : nop
        call public_6f23a50
        cmp edi, eax
        jae public_6f21e5f
        mov edx, dword ptr ss : [ebp+8]
        push edx
        mov edx, dword ptr ss : [ebp+4]
        mov eax, edi
        shl eax, 4
        add eax, edx
        push eax
        mov ecx, ebp
        call public_6f23d90
        public_6f21e5f : nop
        mov eax, dword ptr ds : [esi+0x54]
        cmp eax, dword ptr ds : [esi+0x58]
        mov dword ptr ds : [esi+0x10], eax
        pop ebp
        ja public_6f21ed2
        mov ecx, dword ptr ss : [esp+0x38]
        nop 
        public_6f21e70 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [esi+0x18]
        lea eax, ds:[eax+eax*2]
        shl eax, 2
        add ebx, eax
        lea edx, ds:[eax+ecx-0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], edx
        mov al, byte ptr ds : [esi+0x5D]
        test al, al
        je public_6f21ec2
        mov eax, dword ptr ds : [esi+0x10]
        mov ebx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0x3C]
        shl eax, 4
        add ebx, eax
        lea edx, ds:[eax+edx-0x10]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+8], eax
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        public_6f21ec2 : nop
        mov ebx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x58]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi+0x10], ebx
        jbe public_6f21e70
        public_6f21ed2 : nop
        mov al, byte ptr ds : [esi+0x5D]
        test al, al
        je public_6f21f1e
        mov eax, dword ptr ds : [esi+0x28]
        lea ecx, ds:[eax+0x10]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, eax
        shl edx, 4
        add edx, ecx
        inc eax
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [eax+0xC], edx
        public_6f21f1e : nop
        mov eax, dword ptr ds : [esi+0x18]
        push eax
        push 0x3DCCCCCD
        lea ecx, ds:[eax+0x18]
        push ecx
        push ecx
        lea edx, ds:[eax+0xC]
        push edx
        push edx
        mov ecx, esi
        call public_6f21000
        mov eax, dword ptr ds : [esi+0x18]
        lea ecx, ds:[eax+0xC]
        push ecx
        push eax
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f23570
        mov ecx, dword ptr ds : [esi+0x18]
        lea eax, ss:[esp+0x24]
        push eax
        add ecx, 0xC
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        call public_6f23570
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x18]
        add esp, 0x18
        lea ecx, ds:[eax+eax*2]
        lea ecx, ds:[edx+ecx*4]
        lea eax, ds:[eax+eax*2+3]
        lea edx, ds:[edx+eax*4]
        push edx
        push 0x3F666666
        push ecx
        lea ebx, ds:[ecx-0xC]
        push ecx
        push ebx
        push ebx
        mov ecx, esi
        call public_6f21000
        mov ecx, dword ptr ds : [esi+0x58]
        mov edx, dword ptr ds : [esi+0x18]
        lea eax, ds:[ecx+ecx*2+3]
        lea eax, ds:[edx+eax*4]
        lea ecx, ds:[ecx+ecx*2]
        fld dword ptr ds : [edx+ecx*4]
        lea ecx, ds:[edx+ecx*4]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fadd dword ptr ds : [ecx]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ecx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], edx
        public_6f21ff7 : nop
        mov ecx, esi
        mov dword ptr ds : [esi+8], 0x10
        mov dword ptr ds : [esi+0xC], 0x3D800000
        mov dword ptr ds : [esi+0x10], edi
        call public_6f22630
        fstp st(0)
        mov ecx, esi
        call public_6f22600
        mov ecx, dword ptr ss : [esp+0x28]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6f21ca0)
    }
}

#undef public_6f21cd0
#undef public_6f21d18
#undef public_6f21d36
#undef public_6f21d6c
#undef public_6f21d89
#undef public_6f21dcd
#undef public_6f21dec
#undef public_6f21e40
#undef public_6f21e5f
#undef public_6f21e70
#undef public_6f21ec2
#undef public_6f21ed2
#undef public_6f21f1e
#undef public_6f21ff7
