#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206c40);
CLANG_FORWARD_PROC_SYMBOL(public_6225470);
CLANG_FORWARD_PROC_SYMBOL(public_62257f0);
CLANG_FORWARD_PROC_SYMBOL(public_6225890);
CLANG_FORWARD_PROC_SYMBOL(public_62258b0);
CLANG_FORWARD_PROC_SYMBOL(public_6226600);
CLANG_FORWARD_JUMP_SYMBOL(public_6248ea0);

#define public_62254bc _public_62254bc
#define public_62254e1 _public_62254e1
#define public_622550d _public_622550d
#define public_6225552 _public_6225552
#define public_6225577 _public_6225577
#define public_6225595 _public_6225595
#define public_62255a1 _public_62255a1
#define public_62255e2 _public_62255e2
#define public_622561c _public_622561c
#define public_6225666 _public_6225666
#define public_6225676 _public_6225676

PROC_DECLARE(0x6225470, internal_6225470, public_6225470);
extern "C" NAKED register_t __cdecl internal_6225470()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6248ea0 @0x6225478*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248ea0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        fld dword ptr ss : [esp+0x48]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x54]
        fadd dword ptr ds : [edi+0x84]
        mov eax, dword ptr ds : [edi+0xB0]
        test eax, eax
        fstp dword ptr ds : [edi+0x84]
        jne public_62254bc
        mov eax, dword ptr ds : [edi+0xB4]
        test eax, eax
        jne public_62254bc
        mov eax, dword ptr ds : [edi+4]
        or al, 1
        mov dword ptr ds : [edi+4], eax
        public_62254bc : nop
        mov ebx, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        mov eax, dword ptr ds : [edi+0x18]
        cmp esi, ebx
        lea ebp, ds:[edi+0xB4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x18], ebx
        je public_62255a1
        public_62254e1 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        test al, al
        je public_622550d
        mov edx, dword ptr ss : [esp+0x54]
        push esi
        lea edi, ds:[edx+0x98]
        mov ecx, edi
        call public_6226600
        mov ebx, dword ptr ds : [edi+8]
        mov esi, eax
        mov dword ptr ss : [esp+0x18], ebx
        jmp public_6225595
        public_622550d : nop
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x9C]
        lea eax, ss:[esp+0x20]
        mov ecx, ebp
        push eax
        call public_62258b0
        mov edi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], edi
        lea ecx, ss:[esp+0x14]
        xor eax, eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x50], eax
        mov dword ptr ss : [esp+0x24], eax
        call public_6225890
        mov eax, dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x4C], 1
        cmp eax, edi
        je public_6225577
        public_6225552 : nop
        mov ecx, dword ptr ds : [esi]
        lea ebx, ds:[eax+0x24]
        add eax, 0xC
        push ebx
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0xA4]
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, edi
        mov dword ptr ss : [esp+0x14], eax
        jne public_6225552
        mov ebx, dword ptr ss : [esp+0x18]
        public_6225577 : nop
        mov eax, dword ptr ds : [esi]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xA0]
        add esi, 4
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        public_6225595 : nop
        cmp esi, ebx
        jne public_62254e1
        mov edi, dword ptr ss : [esp+0x54]
        public_62255a1 : nop
        lea edx, ss:[esp+0x54]
        mov ecx, ebp
        push edx
        call public_62258b0
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x20], esi
        lea eax, ss:[esp+0x10]
        xor ebx, ebx
        push eax
        mov ecx, ebp
        mov dword ptr ss : [esp+0x50], 2
        mov dword ptr ss : [esp+0x58], ebx
        call public_6225890
        mov eax, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x4C], 3
        cmp eax, esi
        je public_6225676
        mov esi, dword ptr ss : [esp+0x58]
        public_62255e2 : nop
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx+0x24]
        fcomp dword ptr ds : [ecx+0x28]
        fnstsw ax
        and eax, 0x4100
        jne public_622561c
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+0x28], esp
        mov dword ptr ds : [eax], ecx
        lea ecx, ss:[esp+0x58]
        push ecx
        mov ecx, ebp
        call public_62257f0
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x54], ebx
        jmp public_6225666
        public_622561c : nop
        add ecx, 0x18
        push esi
        lea edx, ss:[esp+0x2C]
        push ecx
        push edx
        call public_6206c40
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+0xC]
        add eax, 0xC
        push esi
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x30]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [eax]
        public_6225666 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        cmp eax, ecx
        jne public_62255e2
        public_6225676 : nop
        mov ecx, dword ptr ds : [edi]
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        call dword ptr ds : [ecx+0x34]
        pop edi
        pop esi
        mov ecx, dword ptr ss : [esp+0x3C]
        pop ebp
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6225470)
    }
}

#undef public_62254bc
#undef public_62254e1
#undef public_622550d
#undef public_6225552
#undef public_6225577
#undef public_6225595
#undef public_62255a1
#undef public_62255e2
#undef public_622561c
#undef public_6225666
#undef public_6225676
