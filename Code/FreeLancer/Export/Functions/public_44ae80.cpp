#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44ae80);
CLANG_FORWARD_PROC_SYMBOL(public_454700);
CLANG_FORWARD_PROC_SYMBOL(public_556f20);
CLANG_FORWARD_PROC_SYMBOL(public_5572b0);
CLANG_FORWARD_PROC_SYMBOL(public_557350);
CLANG_FORWARD_PROC_SYMBOL(public_559590);

#define public_44ae9f _public_44ae9f
#define public_44aea1 _public_44aea1
#define public_44aee1 _public_44aee1
#define public_44af0b _public_44af0b
#define public_44af11 _public_44af11
#define public_44af50 _public_44af50

PROC_DECLARE(0x44ae80, internal_44ae80, public_44ae80);
extern "C" NAKED register_t __cdecl internal_44ae80()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        call public_454700
        test al, al
        mov esi, dword ptr ss : [esp+0xC]
        je public_44ae9f
        mov al, byte ptr ds : [esi+0x12]
        test al, al
        je public_44ae9f
        mov ecx, 1
        jmp public_44aea1
        public_44ae9f : nop
        xor ecx, ecx
        public_44aea1 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push 0x1C
        push eax
        call dword ptr ds : [edx+0xF0]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        je public_44af0b
        mov ecx, esi
        call public_559590
        test eax, eax
        jne public_44aee1
        mov ecx, dword ptr ds : [edi+0x4F4]
        mov edx, dword ptr ds : [edi+0x4F0]
        mov eax, dword ptr ds : [edi+0x4EC]
        push ecx
        push edx
        push eax
        jmp public_44af11
        public_44aee1 : nop
        fild dword ptr ds : [eax+8]
        sub esp, 0xC
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+8]
        fild dword ptr ds : [eax+4]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [eax]
        fmul qword ptr ds : [public_5c89c8]
        fstp dword ptr ss : [esp]
        jmp public_44af11
        public_44af0b : nop
        push 0
        push 0
        push 0
        public_44af11 : nop
        call public_556f20
        mov al, byte ptr ds : [esi+0x11]
        add esp, 0xC
        test al, al
        je public_44af50
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ds : [edi+0x500]
        xor edx, edx
        mov dl, byte ptr ds : [esi+0x15]
        push ecx
        add edi, 0x2E8
        push edx
        push eax
        mov eax, dword ptr ds : [edi+0x200]
        push eax
        push edi
        call public_5572b0
        add esp, 0x14
        pop edi
        pop esi
        ret 4
        public_44af50 : nop
        call public_557350
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x44ae80)
    }
}

#undef public_44ae9f
#undef public_44aea1
#undef public_44aee1
#undef public_44af0b
#undef public_44af11
#undef public_44af50
