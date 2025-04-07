#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f575d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f58080);

#define public_6f57600 _public_6f57600
#define public_6f57608 _public_6f57608
#define public_6f57613 _public_6f57613
#define public_6f57615 _public_6f57615
#define public_6f5762c _public_6f5762c
#define public_6f5762e _public_6f5762e

PROC_DECLARE(0x6f575d0, internal_6f575d0, public_6f575d0);
extern "C" NAKED register_t __cdecl internal_6f575d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov esi, ecx
        xor bl, bl
        call public_6f58080
        add esp, 4
        test eax, eax
        je public_6f5762c
        mov edi, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        cmp edi, ebp
        je public_6f5762c
        mov ebx, dword ptr ds : [esi+0x12C]
        mov ecx, dword ptr ds : [esi+0x130]
        nop 
        public_6f57600 : nop
        mov eax, ebx
        cmp eax, ecx
        je public_6f57613
        mov edx, dword ptr ds : [edi]
        public_6f57608 : nop
        cmp dword ptr ds : [eax], edx
        je public_6f57615
        add eax, 4
        cmp eax, ecx
        jne public_6f57608
        public_6f57613 : nop
        mov eax, ecx
        public_6f57615 : nop
        cmp eax, ecx
        setne al
        test al, al
        jne public_6f5762e
        add edi, 4
        cmp edi, ebp
        jne public_6f57600
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6f5762c : nop
        mov al, bl
        public_6f5762e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f575d0)
    }
}

#undef public_6f57600
#undef public_6f57608
#undef public_6f57613
#undef public_6f57615
#undef public_6f5762c
#undef public_6f5762e
