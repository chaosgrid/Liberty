#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);

#define public_65f9abd _public_65f9abd
#define public_65f9ac5 _public_65f9ac5
#define public_65f9acb _public_65f9acb
#define public_65f9af0 _public_65f9af0
#define public_65f9af8 _public_65f9af8
#define public_65f9b02 _public_65f9b02
#define public_65f9b09 _public_65f9b09

PROC_DECLARE(0x65f9aa0, internal_65f9aa0, public_65f9aa0);
extern "C" NAKED register_t __cdecl internal_65f9aa0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_65f9b09
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_65f9abd
        xor eax, eax
        jmp public_65f9ac5
        public_65f9abd : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_65f9ac5 : nop
        test eax, eax
        jge public_65f9acb
        xor eax, eax
        public_65f9acb : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6600bb6
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_65f9b02
        lea ebx, ds:[ebx]
        public_65f9af0 : nop
        test ecx, ecx
        je public_65f9af8
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_65f9af8 : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_65f9af0
        public_65f9b02 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        pop esi
        public_65f9b09 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x65f9aa0)
    }
}

#undef public_65f9abd
#undef public_65f9ac5
#undef public_65f9acb
#undef public_65f9af0
#undef public_65f9af8
#undef public_65f9b02
#undef public_65f9b09
