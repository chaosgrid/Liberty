#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad07b3);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8801);
CLANG_FORWARD_PROC_SYMBOL(public_6ad94f3);

#define public_6ad8819 _public_6ad8819
#define public_6ad883d _public_6ad883d
#define public_6ad886b _public_6ad886b
#define public_6ad8875 _public_6ad8875

PROC_DECLARE(0x6ad8801, internal_6ad8801, public_6ad8801);
extern "C" NAKED register_t __cdecl internal_6ad8801()
{
    __asm
    {
        push ebx
        push edi
        push 2
        xor ebx, ebx
        call public_6ad237a
        pop ecx
        push 3
        pop edi
        cmp dword ptr ds : [public_6ae2440], edi
        jle public_6ad8875
        push esi
        public_6ad8819 : nop
        mov eax, dword ptr ds : [public_6ae1428]
        mov esi, edi
        shl esi, 2
        mov eax, dword ptr ds : [esi+eax]
        test eax, eax
        je public_6ad886b
        test byte ptr ds : [eax+0xC], 0x83
        je public_6ad883d
        push eax
        call public_6ad94f3
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_6ad883d
        inc ebx
        public_6ad883d : nop
        cmp edi, 0x14
        jl public_6ad886b
        mov eax, dword ptr ds : [public_6ae1428]
        mov eax, dword ptr ds : [esi+eax]
        add eax, 0x20
        push eax
        call dword ptr ds : [public_6ada0f8]
        mov eax, dword ptr ds : [public_6ae1428]
        push dword ptr ds : [esi+eax]
        call public_6ad07b3
        mov eax, dword ptr ds : [public_6ae1428]
        pop ecx
        and dword ptr ds : [esi+eax], 0
        public_6ad886b : nop
        inc edi
        cmp edi, dword ptr ds : [public_6ae2440]
        jl public_6ad8819
        pop esi
        public_6ad8875 : nop
        push 2
        call public_6ad23db
        pop ecx
        mov eax, ebx
        pop edi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad8801)
    }
}

#undef public_6ad8819
#undef public_6ad883d
#undef public_6ad886b
#undef public_6ad8875
