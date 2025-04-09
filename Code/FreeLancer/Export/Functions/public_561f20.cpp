#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_561f20);
CLANG_FORWARD_PROC_SYMBOL(public_59d560);
CLANG_FORWARD_PROC_SYMBOL(public_59d570);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_56200e _public_56200e
#define public_562025 _public_562025
#define public_562044 _public_562044
#define public_562054 _public_562054
#define public_56205c _public_56205c
#define public_562060 _public_562060

PROC_DECLARE(0x561f20, internal_561f20, public_561f20);
extern "C" NAKED register_t __cdecl internal_561f20()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        call public_59d570
        fstp dword ptr ss : [esp+8]
        call public_59d560
        mov ebx, dword ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov cl, bl
        mov byte ptr ss : [esp+7], al
        movzx eax, byte ptr ds : [public_679ba4]
        sub eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_5cef60]
        call public_5b7ec0
        movzx edx, byte ptr ds : [public_679ba5]
        mov cl, bl
        sub cl, al
        xor eax, eax
        mov al, bh
        mov byte ptr ss : [esp+0xC], cl
        sub edx, eax
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5cef60]
        call public_5b7ec0
        movzx edx, byte ptr ss : [esp+0x1E]
        mov cl, bh
        sub cl, al
        mov byte ptr ss : [esp+0xD], cl
        movzx ecx, byte ptr ds : [public_679ba6]
        sub ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5cef60]
        call public_5b7ec0
        fld dword ptr ss : [esp+8]
        mov cl, byte ptr ss : [esp+0x1E]
        fcomp qword ptr ds : [public_5c75e8]
        movzx edx, byte ptr ss : [esp+0xC]
        sub cl, al
        movzx eax, byte ptr ss : [esp+0xD]
        movzx ecx, cl
        add ecx, eax
        add ecx, edx
        mov eax, 0x55555556
        imul ecx
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov al, byte ptr ss : [esp+7]
        test al, al
        mov byte ptr ss : [esp+0x1C], dl
        mov byte ptr ss : [esp+0x1D], dl
        fnstsw ax
        mov byte ptr ss : [esp+0x1E], dl
        mov byte ptr ss : [esp+0x1F], 0xFF
        jne public_562025
        test ah, 5
        jp public_56200e
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x1C]
        fadd st(0), st
        mov dword ptr ss : [esp+8], ebx
        mov dword ptr ss : [esp+0x1C], ecx
        jmp public_562060
        public_56200e : nop
        mov edx, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [public_679ba4]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_562054
        public_562025 : nop
        test ah, 5
        jp public_562044
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [public_679ba4]
        mov edx, dword ptr ss : [esp+0x1C]
        fadd st(0), st
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0x1C], edx
        jmp public_56205c
        public_562044 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0x1C], ebx
        public_562054 : nop
        fsub qword ptr ds : [public_5c75e8]
        fadd st(0), st
        public_56205c : nop
        mov ebx, dword ptr ss : [esp+8]
        public_562060 : nop
        movzx edx, byte ptr ss : [esp+0x1C]
        xor ecx, ecx
        mov cl, bl
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        call public_5b7ec0
        movzx ecx, byte ptr ss : [esp+0x1D]
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
        movzx eax, byte ptr ss : [esp+0x1E]
        sub eax, edx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul st, st(1)
        call public_5b7ec0
        movzx edx, byte ptr ss : [esp+0x1F]
        xor ecx, ecx
        mov cl, bh
        add al, bl
        mov byte ptr ss : [esp+0xE], al
        sub edx, ecx
        mov dword ptr ss : [esp+0x1C], edx
        fild dword ptr ss : [esp+0x1C]
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
        UNREACHABLE_TRAP(0x561f20)
    }
}

#undef public_56200e
#undef public_562025
#undef public_562044
#undef public_562054
#undef public_56205c
#undef public_562060
