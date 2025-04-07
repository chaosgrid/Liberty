#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d160d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d49830);
CLANG_FORWARD_PROC_SYMBOL(public_6d58e50);
CLANG_FORWARD_PROC_SYMBOL(public_6d59320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d49860 _public_6d49860
#define public_6d4987f _public_6d4987f
#define public_6d498a4 _public_6d498a4
#define public_6d498a8 _public_6d498a8
#define public_6d498c8 _public_6d498c8

PROC_DECLARE(0x6d49830, internal_6d49830, public_6d49830);
extern "C" NAKED register_t __cdecl internal_6d49830()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6d498a4
        mov ecx, eax
        cmp eax, ecx
        jne public_6d498a4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d4987f
        nop 
        lea esp, ss:[esp]
        public_6d49860 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d59320
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d49860
        public_6d4987f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6d5c540
        jmp public_6d498c8
        public_6d498a4 : nop
        cmp eax, edi
        je public_6d498c8
        public_6d498a8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d160d0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d58e50
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d498a8
        public_6d498c8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6d5ffb0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d49830)
    }
}

#undef public_6d49860
#undef public_6d4987f
#undef public_6d498a4
#undef public_6d498a8
#undef public_6d498c8
