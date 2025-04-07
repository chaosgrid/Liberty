#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6623140);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6623180 _public_6623180
#define public_662318a _public_662318a
#define public_66231c9 _public_66231c9
#define public_66231d3 _public_66231d3

PROC_DECLARE(0x6623140, internal_6623140, public_6623140);
extern "C" NAKED register_t __cdecl internal_6623140()
{
    __asm
    {
        mov edx, dword ptr ds : [public_662b1a0]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        inc edx
        push esi
        mov esi, ecx
        mov dword ptr ds : [public_662b1a0], edx
        mov cl, byte ptr ds : [eax]
        xor ebx, ebx
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], bl
        mov eax, dword ptr ds : [public_662b19c]
        cmp eax, ebx
        push edi
        je public_6623180
        mov ecx, dword ptr ds : [public_662b1a8]
        mov edx, dword ptr ds : [eax]
        dec ecx
        mov dword ptr ds : [public_662b19c], edx
        mov dword ptr ds : [public_662b1a8], ecx
        jmp public_662318a
        public_6623180 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        public_662318a : nop
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], cl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov eax, dword ptr ds : [public_662b19c]
        mov edi, dword ptr ds : [esi+8]
        cmp eax, ebx
        je public_66231c9
        mov ecx, dword ptr ds : [public_662b1a8]
        mov edx, dword ptr ds : [eax]
        dec ecx
        mov dword ptr ds : [public_662b19c], edx
        mov dword ptr ds : [public_662b1a8], ecx
        jmp public_66231d3
        public_66231c9 : nop
        push 0x18
        call public_66281dc
        add esp, 4
        public_66231d3 : nop
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], bl
        mov byte ptr ds : [eax+0x15], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6623140)
    }
}

#undef public_6623180
#undef public_662318a
#undef public_66231c9
#undef public_66231d3
