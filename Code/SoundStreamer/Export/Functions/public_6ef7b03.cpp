#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4bac);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4cd5);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7b03);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7cbc);

#define public_6ef7b34 _public_6ef7b34
#define public_6ef7b50 _public_6ef7b50
#define public_6ef7b79 _public_6ef7b79
#define public_6ef7b9f _public_6ef7b9f
#define public_6ef7ba7 _public_6ef7ba7

PROC_DECLARE(0x6ef7b03, internal_6ef7b03, public_6ef7b03);
extern "C" NAKED register_t __cdecl internal_6ef7b03()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr ds : [public_6f010e8], 0
        push esi
        push edi
        je public_6ef7b34
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef4bac
        add esp, 0x1C
        test eax, eax
        jne public_6ef7ba7
        public_6ef7b34 : nop
        mov edi, dword ptr ss : [ebp+0x1C]
        lea eax, ss:[ebp-8]
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push edi
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x18]
        call public_6ef4cd5
        add esp, 0x14
        mov esi, eax
        public_6ef7b50 : nop
        mov eax, dword ptr ss : [ebp-4]
        cmp eax, dword ptr ss : [ebp-8]
        jae public_6ef7ba7
        cmp edi, dword ptr ds : [esi]
        jl public_6ef7b9f
        cmp edi, dword ptr ds : [esi+4]
        jg public_6ef7b9f
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x10]
        shl eax, 4
        add eax, ecx
        mov ecx, dword ptr ds : [eax-0xC]
        test ecx, ecx
        je public_6ef7b79
        cmp byte ptr ds : [ecx+8], 0
        jne public_6ef7b9f
        public_6ef7b79 : nop
        push 1
        add eax, 0xFFFFFFF0
        push dword ptr ss : [ebp+0x24]
        push dword ptr ss : [ebp+0x20]
        push esi
        push 0
        push eax
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef7cbc
        add esp, 0x2C
        public_6ef7b9f : nop
        inc dword ptr ss : [ebp-4]
        add esi, 0x14
        jmp public_6ef7b50
        public_6ef7ba7 : nop
        pop edi
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef7b03)
    }
}

#undef public_6ef7b34
#undef public_6ef7b50
#undef public_6ef7b79
#undef public_6ef7b9f
#undef public_6ef7ba7
