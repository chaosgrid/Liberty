#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_413df0);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_415860);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_58b060);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4640);

#define public_58be00 _public_58be00
#define public_58be7b _public_58be7b
#define public_58be7d _public_58be7d
#define public_58be9f _public_58be9f
#define public_58beb4 _public_58beb4
#define public_58bebc _public_58bebc
#define public_58bf35 _public_58bf35
#define public_58bf7e _public_58bf7e
#define public_58bfd3 _public_58bfd3
#define public_58bffa _public_58bffa
#define public_58c014 _public_58c014
#define public_58c01b _public_58c01b

PROC_DECLARE(0x58bdb0, internal_58bdb0, public_58bdb0);
extern "C" NAKED register_t __cdecl internal_58bdb0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c4640 @0x58bdb8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4640
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x20
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x3AC]
        test al, al
        je public_58c01b
        call public_42d680
        fadd dword ptr ds : [edi+0x3A0]
        fst dword ptr ds : [edi+0x3A0]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 1
        jne public_58c014
        push ebx
        push ebp
        push esi
        mov edi, edi
        public_58be00 : nop
        fld dword ptr ds : [edi+0x3A0]
        mov al, byte ptr ds : [edi+0x3A4]
        test al, al
        fsub dword ptr ds : [public_5c75e0]
        fstp dword ptr ds : [edi+0x3A0]
        jne public_58bf35
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], esi
        mov eax, dword ptr ds : [edi+0x334]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, esi
        mov dword ptr ss : [esp+0x38], esi
        je public_58be7b
        push ebx
        call dword ptr ds : [public_5c71c8]
        mov ebp, eax
        add esp, 4
        lea ecx, ss:[ebp+1]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_4142a0
        mov esi, dword ptr ss : [esp+0x14]
        push ebp
        push ebx
        push esi
        call dword ptr ds : [public_5c71c0]
        add esp, 0xC
        test esi, esi
        mov word ptr ds : [esi+ebp*2], 0
        je public_58be7b
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        mov ebx, eax
        jmp public_58be7d
        public_58be7b : nop
        xor ebx, ebx
        public_58be7d : nop
        mov eax, dword ptr ss : [esp+0x18]
        lea ebp, ds:[ebx+2]
        cmp ebp, eax
        jbe public_58bebc
        test esi, esi
        je public_58be9f
        lea edx, ss:[ebp+ebp]
        push edx
        push esi
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov esi, eax
        jmp public_58beb4
        public_58be9f : nop
        lea eax, ss:[ebp+ebp]
        push eax
        call dword ptr ds : [public_5c71cc]
        mov esi, eax
        add esp, 4
        mov word ptr ds : [esi], 0
        public_58beb4 : nop
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x18], ebp
        public_58bebc : nop
        push 1
        lea ecx, ds:[esi+ebx*2]
/*FIXUP push offset public_5e50d0 @0x58bec1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e50d0
        push ecx
        call dword ptr ds : [public_5c71c0]
        xor ebp, ebp
        mov word ptr ds : [esi+ebx*2+2], bp
        fld dword ptr ds : [edi+0x68]
        fadd dword ptr ds : [edi+0xB0]
        mov eax, dword ptr ds : [edi+0x32C]
        mov ecx, dword ptr ds : [edi+0x334]
        add esp, 0xC
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_4145d0
        mov ecx, dword ptr ds : [edi+0x334]
        push esi
        call public_415860
        cmp esi, ebp
        mov byte ptr ds : [edi+0x3A4], 1
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        je public_58bffa
        push esi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x18], ebp
        jmp public_58bffa
        public_58bf35 : nop
        xor ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov ecx, dword ptr ds : [edi+0x334]
        mov eax, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push eax
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x40], 1
        call public_413df0
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, ebx
        je public_58bfd3
        push esi
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        cmp eax, ebx
        jle public_58bfd3
        mov ecx, dword ptr ss : [esp+0x20]
        dec eax
        cmp ecx, eax
        jbe public_58bf7e
        mov word ptr ds : [esi+eax*2], bx
        public_58bf7e : nop
        fld dword ptr ds : [edi+0x68]
        sub esp, 0xC
        fadd dword ptr ds : [edi+0xB0]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+0x64]
        fadd dword ptr ds : [edi+0xAC]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi+0x60]
        fadd dword ptr ds : [edi+0xA8]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edi+0x32C]
        mov ecx, dword ptr ds : [edi+0x334]
        push edx
        push eax
        call public_4145d0
        mov ecx, dword ptr ds : [edi+0x334]
        push esi
        call public_415860
        public_58bfd3 : nop
        cmp esi, ebx
        mov byte ptr ds : [edi+0x3A4], 0
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        je public_58bffa
        push esi
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        xor eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], eax
        public_58bffa : nop
        fld dword ptr ds : [edi+0x3A0]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 1
        je public_58be00
        pop esi
        pop ebp
        pop ebx
        public_58c014 : nop
        mov ecx, edi
        call public_58b060
        public_58c01b : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        mov dword ptr fs : [0], ecx
        add esp, 0x2C
        ret 
        UNREACHABLE_TRAP(0x58bdb0)
    }
}

#undef public_58be00
#undef public_58be7b
#undef public_58be7d
#undef public_58be9f
#undef public_58beb4
#undef public_58bebc
#undef public_58bf35
#undef public_58bf7e
#undef public_58bfd3
#undef public_58bffa
#undef public_58c014
#undef public_58c01b
