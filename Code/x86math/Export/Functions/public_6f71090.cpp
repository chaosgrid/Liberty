#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71090);
CLANG_FORWARD_PROC_SYMBOL(public_6f7299e);

#define public_6f710c3 _public_6f710c3
#define public_6f71120 _public_6f71120
#define public_6f71132 _public_6f71132
#define public_6f71134 _public_6f71134
#define public_6f71145 _public_6f71145

PROC_DECLARE(0x6f71090, internal_6f71090, public_6f71090);
extern "C" NAKED register_t __cdecl internal_6f71090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6f71145
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6f7300c]
        push 8
        call public_6f7299e
        add esp, 4
        test eax, eax
        je public_6f71120
        mov dword ptr ds : [eax], offset public_6f73090
        mov dword ptr ds : [eax+4], offset public_6f73080
        xor ecx, ecx
        public_6f710c3 : nop
        mov edx, ecx
        or dh, 0xFC
        shl edx, 0xE
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        fsqrt 
        fdivr qword ptr ds : [public_6f73078]
        fstp dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+4]
        add edx, 0x2000
        shr edx, 0xF
        mov byte ptr ds : [ecx+public_6f74030], dl
        inc ecx
        cmp ecx, 0x400
        jl public_6f710c3
        mov byte ptr ds : [public_6f74230], 0xFF
        mov dword ptr ds : [public_6f74438], eax
        call dword ptr ds : [public_6f73004]
        test eax, eax
        je public_6f71145
        mov ecx, dword ptr ds : [public_6f74438]
        test ecx, ecx
        je public_6f71132
        add ecx, 4
        jmp public_6f71134
        public_6f71120 : nop
        mov dword ptr ds : [public_6f74438], 0
        mov eax, 1
        ret 0xC
        public_6f71132 : nop
        xor ecx, ecx
        public_6f71134 : nop
        mov edx, dword ptr ds : [eax]
        push 0x40000000
/*FIXUP push offset public_6f74020 @0x6f7113b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f74020
        push ecx
        push eax
        call dword ptr ds : [edx+0x10]
        public_6f71145 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6f71090)
    }
}

#undef public_6f710c3
#undef public_6f71120
#undef public_6f71132
#undef public_6f71134
#undef public_6f71145
