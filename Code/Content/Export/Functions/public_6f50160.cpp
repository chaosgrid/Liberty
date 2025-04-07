#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6f50173 _public_6f50173
#define public_6f50180 _public_6f50180
#define public_6f50184 _public_6f50184
#define public_6f501b0 _public_6f501b0
#define public_6f501bb _public_6f501bb

PROC_DECLARE(0x6f50160, internal_6f50160, public_6f50160);
extern "C" NAKED register_t __cdecl internal_6f50160()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6fd0ce0]
        mov ecx, dword ptr ds : [public_6fd0ce4]
        cmp eax, ecx
        je public_6f50184
        mov edx, dword ptr ss : [esp+4]
        public_6f50173 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f50180
        add eax, 4
        cmp eax, ecx
        jne public_6f50173
        jmp public_6f50184
        public_6f50180 : nop
        cmp eax, ecx
        jne public_6f501bb
        public_6f50184 : nop
        lea eax, ss:[esp+4]
        push eax
        push 1
        push ecx
        mov ecx, offset public_6fd0cdc
        call public_6f937c0
        mov eax, dword ptr ds : [public_6fd0ce0]
        mov ecx, dword ptr ds : [public_6fd0ce4]
        cmp eax, ecx
        je public_6f501bb
        mov edx, dword ptr ss : [esp+4]
        lea esp, ss:[esp]
        public_6f501b0 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f501bb
        add eax, 4
        cmp eax, ecx
        jne public_6f501b0
        public_6f501bb : nop
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x6f50160)
    }
}

#undef public_6f50173
#undef public_6f50180
#undef public_6f50184
#undef public_6f501b0
#undef public_6f501bb
