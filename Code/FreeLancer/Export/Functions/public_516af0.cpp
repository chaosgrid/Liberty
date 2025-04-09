#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_516af0);

#define public_516b23 _public_516b23
#define public_516b42 _public_516b42
#define public_516b5c _public_516b5c
#define public_516b74 _public_516b74
#define public_516b80 _public_516b80
#define public_516ba0 _public_516ba0

PROC_DECLARE(0x516af0, internal_516af0, public_516af0);
extern "C" NAKED register_t __cdecl internal_516af0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ds : [public_5c6d90]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0xFFFFFFFF
        push 0
        push esi
        push eax
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [ecx+0xD8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_516ba0
        public_516b23 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        jne public_516b42
        mov eax, offset public_5c865c
        public_516b42 : nop
        mov edi, offset public_5db8f4
        mov esi, eax
        mov ecx, 0xA
        xor edx, edx
        repe cmpsb
        jne public_516b5c
        lea eax, ss:[ebp+0x1C]
        lea ecx, ss:[ebp+0x10]
        jmp public_516b74
        public_516b5c : nop
        mov esi, eax
        mov edi, offset public_5db8e8
        mov ecx, 9
        xor eax, eax
        repe cmpsb
        jne public_516b80
        lea eax, ss:[ebp+0x10]
        lea ecx, ss:[ebp+0x1C]
        public_516b74 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebp
        cmp dword ptr ds : [ecx+4], 0xFFFFFFFF
        jne public_516ba0
        public_516b80 : nop
        mov ecx, dword ptr ds : [public_5c6d90]
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push 0
        push esi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_516b23
        public_516ba0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x516af0)
    }
}

#undef public_516b23
#undef public_516b42
#undef public_516b5c
#undef public_516b74
#undef public_516b80
#undef public_516ba0
