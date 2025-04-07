#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4aae);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4c60);
CLANG_FORWARD_PROC_SYMBOL(public_6ef78c1);

#define public_6ef4c83 _public_6ef4c83
#define public_6ef4cc1 _public_6ef4cc1
#define public_6ef4cd0 _public_6ef4cd0

PROC_DECLARE(0x6ef4c60, internal_6ef4c60, public_6ef4c60);
extern "C" NAKED register_t __cdecl internal_6ef4c60()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cld 
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+4]
        and eax, 0x66
        test eax, eax
        je public_6ef4c83
        mov eax, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+0x24], 1
        push 1
        pop eax
        jmp public_6ef4cd0
        public_6ef4c83 : nop
        push 1
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+8]
        push 0
        push dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0xC]
        push dword ptr ds : [eax+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef78c1
        add esp, 0x20
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [eax+0x24], 0
        jne public_6ef4cc1
        push dword ptr ss : [ebp+8]
        push dword ptr ss : [ebp+0xC]
        call public_6ef4aae
        public_6ef4cc1 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov esp, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ds : [ebx+0x20]
        jmp dword ptr ds : [ebx+0x18]
        push 1
        pop eax
        public_6ef4cd0 : nop
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef4c60)
    }
}

#undef public_6ef4c83
#undef public_6ef4cc1
#undef public_6ef4cd0
