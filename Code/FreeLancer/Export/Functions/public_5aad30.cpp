#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aad30);

#define public_5aad42 _public_5aad42
#define public_5aad4e _public_5aad4e
#define public_5aad50 _public_5aad50
#define public_5aad64 _public_5aad64

PROC_DECLARE(0x5aad30, internal_5aad30, public_5aad30);
extern "C" NAKED register_t __cdecl internal_5aad30()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_5c71d4]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        xor esi, esi
        public_5aad42 : nop
        test esi, esi
        jne public_5aad4e
        mov esi, dword ptr ss : [ebp+0x1B8]
        jmp public_5aad50
        public_5aad4e : nop
        mov esi, dword ptr ds : [esi]
        public_5aad50 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x204
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        jne public_5aad64
        mov eax, dword ptr ds : [public_5c700c]
        public_5aad64 : nop
        push edi
        push eax
        call ebx
        add esp, 8
        test eax, eax
        jne public_5aad42
        mov eax, dword ptr ds : [esi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5aad30)
    }
}

#undef public_5aad42
#undef public_5aad4e
#undef public_5aad50
#undef public_5aad64
