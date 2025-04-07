#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4a73);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4aae);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7c08);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7cbc);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7d37);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7e6d);

#define public_6ef7cde _public_6ef7cde
#define public_6ef7cea _public_6ef7cea
#define public_6ef7ced _public_6ef7ced
#define public_6ef7d32 _public_6ef7d32

PROC_DECLARE(0x6ef7cbc, internal_6ef7cbc, public_6ef7cbc);
extern "C" NAKED register_t __cdecl internal_6ef7cbc()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0x20], 0
        push ebx
        mov ebx, dword ptr ss : [ebp+0x1C]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0xC]
        je public_6ef7cde
        push dword ptr ss : [ebp+0x20]
        push ebx
        push edi
        push dword ptr ss : [ebp+8]
        call public_6ef7e6d
        add esp, 0x10
        public_6ef7cde : nop
        cmp dword ptr ss : [ebp+0x2C], 0
        push dword ptr ss : [ebp+8]
        jne public_6ef7cea
        push edi
        jmp public_6ef7ced
        public_6ef7cea : nop
        push dword ptr ss : [ebp+0x2C]
        public_6ef7ced : nop
        call public_6ef4aae
        mov esi, dword ptr ss : [ebp+0x24]
        push dword ptr ds : [esi]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push edi
        call public_6ef7c08
        mov eax, dword ptr ds : [esi+4]
        push 0x100
        push dword ptr ss : [ebp+0x28]
        inc eax
        mov dword ptr ds : [edi+8], eax
        push dword ptr ds : [ebx+0xC]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x10]
        push edi
        push dword ptr ss : [ebp+8]
        call public_6ef7d37
        add esp, 0x2C
        test eax, eax
        je public_6ef7d32
        push edi
        push eax
        call public_6ef4a73
        public_6ef7d32 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef7cbc)
    }
}

#undef public_6ef7cde
#undef public_6ef7cea
#undef public_6ef7ced
#undef public_6ef7d32
