#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6282030 _public_6282030
#define public_6282057 _public_6282057
#define public_6282066 _public_6282066
#define public_628207b _public_628207b
#define public_628209e _public_628209e
#define public_62820af _public_62820af

PROC_DECLARE(0x6282020, internal_6282020, public_6282020);
extern "C" NAKED register_t __cdecl internal_6282020()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6282057
        nop 
        public_6282030 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [ebp+8], ecx
        jne public_6282030
        public_6282057 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax]
        mov ebx, dword ptr ss : [esp+0x14]
        cmp ebx, dword ptr ss : [esp+0x18]
        je public_62820af
        public_6282066 : nop
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_628207b
        mov edi, eax
        public_628207b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_628209e
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [eax+8], edx
        public_628209e : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x18]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6282066
        public_62820af : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6282020)
    }
}

#undef public_6282030
#undef public_6282057
#undef public_6282066
#undef public_628207b
#undef public_628209e
#undef public_62820af
