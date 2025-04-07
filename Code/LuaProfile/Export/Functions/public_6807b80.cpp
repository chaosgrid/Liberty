#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807120);
CLANG_FORWARD_PROC_SYMBOL(public_6807390);
CLANG_FORWARD_PROC_SYMBOL(public_6807630);
CLANG_FORWARD_PROC_SYMBOL(public_6807b80);
CLANG_FORWARD_PROC_SYMBOL(public_6807c00);

#define public_6807b96 _public_6807b96
#define public_6807ba7 _public_6807ba7
#define public_6807bef _public_6807bef

PROC_DECLARE(0x6807b80, internal_6807b80, public_6807b80);
extern "C" NAKED register_t __cdecl internal_6807b80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        push edi
        push esi
        call public_6807c00
        add esp, 8
        public_6807b96 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0x104
        je public_6807ba7
        cmp eax, 0x10E
        jne public_6807bef
        public_6807ba7 : nop
        xor ebx, ebx
        cmp eax, 0x104
        setne bl
        push edi
        push esi
        dec ebx
        and ebx, 2
        add ebx, 0x2E
        call public_6807630
        push esi
        call public_6806a20
        push esi
        call public_6807390
        push edi
        push esi
        mov ebp, eax
        call public_6807c00
        push edi
        push esi
        call public_6807630
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+8]
        push ecx
        push ebx
        push ebp
        push esi
        call public_6807120
        add esp, 0x30
        jmp public_6807b96
        public_6807bef : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807b80)
    }
}

#undef public_6807b96
#undef public_6807ba7
#undef public_6807bef
