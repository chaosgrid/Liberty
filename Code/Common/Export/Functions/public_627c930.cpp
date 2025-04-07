#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_627c944 _public_627c944
#define public_627c957 _public_627c957
#define public_627c960 _public_627c960
#define public_627c964 _public_627c964
#define public_627c971 _public_627c971
#define public_627c982 _public_627c982

PROC_DECLARE(0x627c930, internal_627c930, public_627c930);
extern "C" NAKED register_t __cdecl internal_627c930()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        xor ebx, ebx
        cmp edi, ebx
        mov dword ptr ds : [esi], offset public_639b59c
        je public_627c964
        public_627c944 : nop
        cmp byte ptr ds : [esi+0xC], bl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_627c957
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_627c960
        public_627c957 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627c960 : nop
        cmp edi, ebx
        jne public_627c944
        public_627c964 : nop
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        je public_627c982
        public_627c971 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6391d5a
        add esp, 4
        cmp edi, ebx
        jne public_627c971
        public_627c982 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x627c930)
    }
}

#undef public_627c944
#undef public_627c957
#undef public_627c960
#undef public_627c964
#undef public_627c971
#undef public_627c982
