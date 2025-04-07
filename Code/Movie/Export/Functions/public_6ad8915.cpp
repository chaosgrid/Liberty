#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad23db);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5cb5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5d07);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8882);
CLANG_FORWARD_PROC_SYMBOL(public_6ad8915);

#define public_6ad892e _public_6ad892e
#define public_6ad896f _public_6ad896f
#define public_6ad8989 _public_6ad8989
#define public_6ad8999 _public_6ad8999
#define public_6ad89a2 _public_6ad89a2
#define public_6ad89b5 _public_6ad89b5

PROC_DECLARE(0x6ad8915, internal_6ad8915, public_6ad8915);
extern "C" NAKED register_t __cdecl internal_6ad8915()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 2
        xor ebx, ebx
        xor edi, edi
        call public_6ad237a
        xor esi, esi
        pop ecx
        cmp dword ptr ds : [public_6ae2440], esi
        jle public_6ad89a2
        public_6ad892e : nop
        mov eax, dword ptr ds : [public_6ae1428]
        mov eax, dword ptr ds : [eax+esi*4]
        test eax, eax
        je public_6ad8999
        test byte ptr ds : [eax+0xC], 0x83
        je public_6ad8999
        push eax
        push esi
        call public_6ad5cb5
        mov eax, dword ptr ds : [public_6ae1428]
        pop ecx
        pop ecx
        mov eax, dword ptr ds : [eax+esi*4]
        mov ecx, dword ptr ds : [eax+0xC]
        test cl, 0x83
        je public_6ad8989
        cmp dword ptr ss : [esp+0x10], 1
        jne public_6ad896f
        push eax
        call public_6ad8882
        cmp eax, 0xFFFFFFFF
        pop ecx
        je public_6ad8989
        inc ebx
        jmp public_6ad8989
        public_6ad896f : nop
        cmp dword ptr ss : [esp+0x10], 0
        jne public_6ad8989
        test cl, 2
        je public_6ad8989
        push eax
        call public_6ad8882
        cmp eax, 0xFFFFFFFF
        pop ecx
        jne public_6ad8989
        or edi, eax
        public_6ad8989 : nop
        mov eax, dword ptr ds : [public_6ae1428]
        push dword ptr ds : [eax+esi*4]
        push esi
        call public_6ad5d07
        pop ecx
        pop ecx
        public_6ad8999 : nop
        inc esi
        cmp esi, dword ptr ds : [public_6ae2440]
        jl public_6ad892e
        public_6ad89a2 : nop
        push 2
        call public_6ad23db
        cmp dword ptr ss : [esp+0x14], 1
        pop ecx
        mov eax, ebx
        je public_6ad89b5
        mov eax, edi
        public_6ad89b5 : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6ad8915)
    }
}

#undef public_6ad892e
#undef public_6ad896f
#undef public_6ad8989
#undef public_6ad8999
#undef public_6ad89a2
#undef public_6ad89b5
