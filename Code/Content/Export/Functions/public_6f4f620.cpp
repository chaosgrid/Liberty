#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f620);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf1c8);

#define public_6f4f655 _public_6f4f655
#define public_6f4f660 _public_6f4f660
#define public_6f4f666 _public_6f4f666
#define public_6f4f690 _public_6f4f690
#define public_6f4f69c _public_6f4f69c
#define public_6f4f6a6 _public_6f4f6a6
#define public_6f4f6c0 _public_6f4f6c0
#define public_6f4f6e8 _public_6f4f6e8
#define public_6f4f6f4 _public_6f4f6f4
#define public_6f4f6fd _public_6f4f6fd
#define public_6f4f704 _public_6f4f704
#define public_6f4f71a _public_6f4f71a
#define public_6f4f723 _public_6f4f723
#define public_6f4f73c _public_6f4f73c
#define public_6f4f750 _public_6f4f750
#define public_6f4f760 _public_6f4f760
#define public_6f4f770 _public_6f4f770
#define public_6f4f79b _public_6f4f79b

PROC_DECLARE(0x6f4f620, internal_6f4f620, public_6f4f620);
extern "C" NAKED register_t __cdecl internal_6f4f620()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf1c8 @0x6f4f622*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf1c8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xC4]
        test ecx, ecx
        mov al, byte ptr ds : [esi+0xC0]
        push edi
        mov byte ptr ss : [esp+0xC], al
        jne public_6f4f655
        xor eax, eax
        jmp public_6f4f660
        public_6f4f655 : nop
        mov eax, dword ptr ds : [esi+0xC8]
        sub eax, ecx
        sar eax, 2
        public_6f4f660 : nop
        test eax, eax
        jge public_6f4f666
        xor eax, eax
        public_6f4f666 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov edi, dword ptr ds : [esi+0xC8]
        mov edx, dword ptr ds : [esi+0xC4]
        add esp, 4
        cmp edx, edi
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, eax
        je public_6f4f6a6
        lea esp, ss:[esp]
        public_6f4f690 : nop
        test ecx, ecx
        je public_6f4f69c
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x10]
        public_6f4f69c : nop
        add edx, 4
        add ecx, 4
        cmp edx, edi
        jne public_6f4f690
        public_6f4f6a6 : nop
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov ebx, dword ptr ss : [esp+0x2C]
        mov edi, dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x24], 0
        public_6f4f6c0 : nop
        test eax, eax
        je public_6f4f79b
        sub ecx, eax
        sar ecx, 2
        test ecx, ecx
        je public_6f4f79b
        lea ecx, ss:[esp+0xC]
        call public_6fa3db0
        test eax, eax
        jne public_6f4f6e8
        mov esi, dword ptr ss : [esp+0x14]
        jmp public_6f4f723
        public_6f4f6e8 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        test ecx, ecx
        jne public_6f4f6f4
        xor esi, esi
        jmp public_6f4f6fd
        public_6f4f6f4 : nop
        mov esi, dword ptr ss : [esp+0x14]
        sub esi, ecx
        sar esi, 2
        public_6f4f6fd : nop
        dec esi
        jne public_6f4f704
        xor eax, eax
        jmp public_6f4f71a
        public_6f4f704 : nop
        call edi
        mov ecx, dword ptr ss : [esp+0x10]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f4f71a : nop
        test eax, eax
        mov esi, ecx
        jbe public_6f4f723
        lea esi, ds:[ecx+eax*4]
        public_6f4f723 : nop
        push esi
        call public_6fa6e50
        add esp, 4
        test eax, eax
        je public_6f4f73c
        push ebx
        mov ecx, eax
        call public_6fa6e30
        test al, al
        jne public_6f4f770
        public_6f4f73c : nop
        mov ecx, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+4]
        cmp eax, ecx
        mov edx, ecx
        je public_6f4f760
        mov ecx, esi
        sub ecx, eax
        lea ecx, ds:[ecx]
        public_6f4f750 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+eax], esi
        add eax, 4
        cmp eax, edx
        jne public_6f4f750
        mov ecx, dword ptr ss : [esp+0x14]
        public_6f4f760 : nop
        mov eax, dword ptr ss : [esp+0x10]
        sub ecx, 4
        mov dword ptr ss : [esp+0x14], ecx
        jmp public_6f4f6c0
        public_6f4f770 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov dword ptr ds : [edx], ecx
        call public_6fa8fe0
        add esp, 4
        pop edi
        pop esi
        mov al, 1
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 8
        public_6f4f79b : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        pop edi
        pop esi
        xor al, al
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 8
        UNREACHABLE_TRAP(0x6f4f620)
    }
}

#undef public_6f4f655
#undef public_6f4f660
#undef public_6f4f666
#undef public_6f4f690
#undef public_6f4f69c
#undef public_6f4f6a6
#undef public_6f4f6c0
#undef public_6f4f6e8
#undef public_6f4f6f4
#undef public_6f4f6fd
#undef public_6f4f704
#undef public_6f4f71a
#undef public_6f4f723
#undef public_6f4f73c
#undef public_6f4f750
#undef public_6f4f760
#undef public_6f4f770
#undef public_6f4f79b
