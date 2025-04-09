#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_561da0);
CLANG_FORWARD_PROC_SYMBOL(public_561f10);
CLANG_FORWARD_PROC_SYMBOL(public_59d560);
CLANG_FORWARD_PROC_SYMBOL(public_59d570);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_561def _public_561def
#define public_561e17 _public_561e17
#define public_561e35 _public_561e35
#define public_561e52 _public_561e52
#define public_561e69 _public_561e69
#define public_561e6d _public_561e6d

PROC_DECLARE(0x561da0, internal_561da0, public_561da0);
extern "C" NAKED register_t __cdecl internal_561da0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        call public_59d570
        fstp dword ptr ss : [esp+4]
        call public_59d560
        mov cl, byte ptr ds : [public_679b7c]
        mov bl, al
        mov al, 1
        test al, cl
        jne public_561def
        mov dl, cl
        or dl, al
        mov al, 0xB9
/*FIXUP push offset _public_561f10 @0x561dc6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_561f10
        mov byte ptr ds : [public_679b7c], dl
        mov byte ptr ds : [public_679b78], al
        mov byte ptr ds : [public_679b79], al
        mov byte ptr ds : [public_679b7a], al
        mov byte ptr ds : [public_679b7b], 0xFF
        call public_5b7e6c
        add esp, 4
        public_561def : nop
        test bl, bl
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        jne public_561e35
        test ah, 5
        jp public_561e17
        fld dword ptr ss : [esp+4]
        mov ebx, dword ptr ds : [public_679bb0]
        mov eax, dword ptr ds : [public_679b78]
        fadd st(0), st
        jmp public_561e69
        public_561e17 : nop
        fld dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_679ba4]
        fsub qword ptr ds : [public_5c75e8]
        mov ebx, dword ptr ds : [public_679b78]
        mov dword ptr ss : [esp+4], ecx
        fadd st(0), st
        jmp public_561e6d
        public_561e35 : nop
        test ah, 5
        jp public_561e52
        fld dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_679b78]
        mov ebx, dword ptr ds : [public_679ba4]
        fadd st(0), st
        mov dword ptr ss : [esp+4], edx
        jmp public_561e6d
        public_561e52 : nop
        fld dword ptr ss : [esp+4]
        mov ebx, dword ptr ds : [public_679b78]
        fsub qword ptr ds : [public_5c75e8]
        mov eax, dword ptr ds : [public_679bb0]
        fadd st(0), st
        public_561e69 : nop
        mov dword ptr ss : [esp+4], eax
        public_561e6d : nop
        movzx edx, byte ptr ss : [esp+4]
        xor ecx, ecx
        mov cl, bl
        mov dword ptr ss : [esp+8], ebx
        sub edx, ecx
        mov dword ptr ss : [esp+0xC], edx
        fild dword ptr ss : [esp+0xC]
        fmul st, st(1)
        call public_5b7ec0
        movzx ecx, byte ptr ss : [esp+5]
        add al, bl
        mov byte ptr ss : [esp+0xC], al
        xor eax, eax
        mov al, bh
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        call public_5b7ec0
        add al, bh
        mov bx, word ptr ss : [esp+0xA]
        xor edx, edx
        mov dl, bl
        mov byte ptr ss : [esp+0xD], al
        movzx eax, byte ptr ss : [esp+6]
        sub eax, edx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        call public_5b7ec0
        movzx edx, byte ptr ss : [esp+7]
        xor ecx, ecx
        mov cl, bh
        add al, bl
        mov byte ptr ss : [esp+0xE], al
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        call public_5b7ec0
        fstp st(0)
        add al, bh
        mov byte ptr ss : [esp+0xF], al
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ecx
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x561da0)
    }
}

#undef public_561def
#undef public_561e17
#undef public_561e35
#undef public_561e52
#undef public_561e69
#undef public_561e6d
