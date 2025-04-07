#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);

#define public_6d3ea86 _public_6d3ea86
#define public_6d3ea96 _public_6d3ea96
#define public_6d3eab1 _public_6d3eab1
#define public_6d3eac0 _public_6d3eac0
#define public_6d3ead3 _public_6d3ead3
#define public_6d3ead7 _public_6d3ead7
#define public_6d3eae6 _public_6d3eae6

PROC_DECLARE(0x6d3ea70, internal_6d3ea70, public_6d3ea70);
extern "C" NAKED register_t __cdecl internal_6d3ea70()
{
    __asm
    {
        push ecx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+5]
        test al, al
        mov dword ptr ss : [esp+4], ebp
        je public_6d3ea86
        xor al, al
        pop ebp
        pop ecx
        ret 4
        public_6d3ea86 : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x40]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d3eab1
        public_6d3ea96 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+8]
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3eab1
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d3ea96
        public_6d3eab1 : nop
        cmp dword ptr ss : [ebp+0x40], esi
        jne public_6d3eae6
        mov edi, dword ptr ss : [ebp+0x4C]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d3ead7
        nop 
        public_6d3eac0 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        call public_6d3e580
        test al, al
        jne public_6d3ead3
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d3eac0
        public_6d3ead3 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3ead7 : nop
        cmp dword ptr ss : [ebp+0x4C], esi
        jne public_6d3eae6
        pop edi
        pop esi
        pop ebx
        xor eax, eax
        pop ebp
        pop ecx
        ret 4
        public_6d3eae6 : nop
        pop edi
        pop esi
        pop ebx
        mov eax, 1
        pop ebp
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d3ea70)
    }
}

#undef public_6d3ea86
#undef public_6d3ea96
#undef public_6d3eab1
#undef public_6d3eac0
#undef public_6d3ead3
#undef public_6d3ead7
#undef public_6d3eae6
