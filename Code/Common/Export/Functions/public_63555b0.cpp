#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347c40);
CLANG_FORWARD_PROC_SYMBOL(public_6347c80);
CLANG_FORWARD_PROC_SYMBOL(public_6347d20);
CLANG_FORWARD_PROC_SYMBOL(public_6347d50);
CLANG_FORWARD_PROC_SYMBOL(public_634b850);
CLANG_FORWARD_PROC_SYMBOL(public_634b8d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b900);
CLANG_FORWARD_PROC_SYMBOL(public_634b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_634b9d0);
CLANG_FORWARD_PROC_SYMBOL(public_634ba50);
CLANG_FORWARD_PROC_SYMBOL(public_6355310);
CLANG_FORWARD_PROC_SYMBOL(public_63555b0);
CLANG_FORWARD_PROC_SYMBOL(public_63556b0);

#define public_63555c8 _public_63555c8
#define public_63555f0 _public_63555f0
#define public_6355603 _public_6355603
#define public_6355607 _public_6355607
#define public_635563a _public_635563a
#define public_635565d _public_635565d
#define public_635566b _public_635566b
#define public_635568e _public_635568e
#define public_6355698 _public_6355698
#define public_63556a5 _public_63556a5

PROC_DECLARE(0x63555b0, internal_63555b0, public_63555b0);
extern "C" NAKED register_t __cdecl internal_63555b0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [edi+0x20]
        test esi, esi
        mov ebx, ecx
        mov dword ptr ss : [esp+0x18], ebx
        je public_63555f0
        public_63555c8 : nop
        mov ebp, dword ptr ds : [esi]
        push esi
        mov ecx, edi
        call public_634b8d0
        push esi
        mov ecx, edi
        call public_634b850
        push esi
        mov ecx, ebx
        call public_634b9a0
        push esi
        mov ecx, ebx
        call public_634b900
        test ebp, ebp
        mov esi, ebp
        jne public_63555c8
        public_63555f0 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x26]
        dec eax
        mov dword ptr ss : [esp+0x20], eax
        js public_6355698
        jmp public_6355607
        public_6355603 : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6355607 : nop
        mov ecx, dword ptr ds : [edi+0x28]
        mov esi, dword ptr ds : [ecx+eax*4]
        push edi
        mov ecx, esi
        call public_6347c40
        push ebx
        mov ecx, esi
        mov ebp, eax
        call public_6347c40
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_635566b
        push edi
        mov ecx, esi
        call public_6347c40
        xor ebx, ebx
        mov ebp, eax
        mov bx, word ptr ss : [ebp+2]
        dec ebx
        js public_635565d
        public_635563a : nop
        mov edx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [edx+ebx*4]
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_63556b0
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        mov ecx, ebp
        call public_6355310
        dec ebx
        jns public_635563a
        public_635565d : nop
        push ebp
        mov ecx, esi
        call public_6347d50
        mov ebx, dword ptr ss : [esp+0x18]
        jmp public_635568e
        public_635566b : nop
        push ebp
        mov ecx, esi
        call public_6347d20
        push ebp
        mov ecx, esi
        mov dword ptr ss : [ebp+8], ebx
        call public_6347c80
        push esi
        mov ecx, edi
        call public_634ba50
        push esi
        mov ecx, ebx
        call public_634b9d0
        public_635568e : nop
        dec dword ptr ss : [esp+0x20]
        jns public_6355603
        public_6355698 : nop
        test edi, edi
        je public_63556a5
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx+0x18]
        public_63556a5 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x63555b0)
    }
}

#undef public_63555c8
#undef public_63555f0
#undef public_6355603
#undef public_6355607
#undef public_635563a
#undef public_635565d
#undef public_635566b
#undef public_635568e
#undef public_6355698
#undef public_63556a5
