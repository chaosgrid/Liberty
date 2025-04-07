#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5a4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5afd0);

#define public_6d5a4d7 _public_6d5a4d7
#define public_6d5a4e6 _public_6d5a4e6
#define public_6d5a4ff _public_6d5a4ff
#define public_6d5a502 _public_6d5a502
#define public_6d5a508 _public_6d5a508

PROC_DECLARE(0x6d5a4c0, internal_6d5a4c0, public_6d5a4c0);
extern "C" NAKED register_t __cdecl internal_6d5a4c0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov ebp, eax
        cmp esi, dword ptr ds : [ebx+8]
        je public_6d5a508
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6d5a4d7 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x14]
        jne public_6d5a4e6
        mov eax, offset public_6d64efc
        public_6d5a4e6 : nop
        push ecx
        push eax
        mov eax, dword ptr ds : [edi+8]
        push eax
        push 0
        mov ecx, edi
        call public_6d5afd0
        test eax, eax
        jge public_6d5a4ff
        mov ebp, esi
        mov esi, dword ptr ds : [esi]
        jmp public_6d5a502
        public_6d5a4ff : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d5a502 : nop
        cmp esi, dword ptr ds : [ebx+8]
        jne public_6d5a4d7
        pop edi
        public_6d5a508 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d5a4c0)
    }
}

#undef public_6d5a4d7
#undef public_6d5a4e6
#undef public_6d5a4ff
#undef public_6d5a502
#undef public_6d5a508
