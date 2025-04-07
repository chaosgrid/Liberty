#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef78c1);
CLANG_FORWARD_PROC_SYMBOL(public_6ef795c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7c08);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8162);

#define public_6ef78d7 _public_6ef78d7
#define public_6ef78ff _public_6ef78ff
#define public_6ef7939 _public_6ef7939
#define public_6ef7955 _public_6ef7955
#define public_6ef7958 _public_6ef7958

PROC_DECLARE(0x6ef78c1, internal_6ef78c1, public_6ef78c1);
extern "C" NAKED register_t __cdecl internal_6ef78c1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr ss : [ebp+0x18]
        push edi
        mov edi, 0x19930520
        cmp dword ptr ds : [esi], edi
        je public_6ef78d7
        call public_6ef8162
        public_6ef78d7 : nop
        mov eax, dword ptr ss : [ebp+8]
        test byte ptr ds : [eax+4], 0x66
        je public_6ef78ff
        cmp dword ptr ds : [esi+4], 0
        je public_6ef7955
        cmp dword ptr ss : [ebp+0x1C], 0
        jne public_6ef7955
        push 0xFFFFFFFF
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        call public_6ef7c08
        add esp, 0x10
        jmp public_6ef7955
        public_6ef78ff : nop
        cmp dword ptr ds : [esi+0xC], 0
        je public_6ef7955
        cmp dword ptr ds : [eax], 0xE06D7363
        jne public_6ef7939
        cmp dword ptr ds : [eax+0x14], edi
        jbe public_6ef7939
        mov ecx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [ecx+8]
        test ecx, ecx
        je public_6ef7939
        movzx edx, byte ptr ss : [ebp+0x24]
        push edx
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call ecx
        add esp, 0x20
        jmp public_6ef7958
        public_6ef7939 : nop
        push dword ptr ss : [ebp+0x20]
        push dword ptr ss : [ebp+0x1C]
        push dword ptr ss : [ebp+0x24]
        push esi
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6ef795c
        add esp, 0x20
        public_6ef7955 : nop
        push 1
        pop eax
        public_6ef7958 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef78c1)
    }
}

#undef public_6ef78d7
#undef public_6ef78ff
#undef public_6ef7939
#undef public_6ef7955
#undef public_6ef7958
