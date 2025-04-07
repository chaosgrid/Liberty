#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7e590);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7e5a7 _public_6f7e5a7
#define public_6f7e5af _public_6f7e5af
#define public_6f7e5b5 _public_6f7e5b5
#define public_6f7e5d5 _public_6f7e5d5
#define public_6f7e5dd _public_6f7e5dd
#define public_6f7e5e8 _public_6f7e5e8

PROC_DECLARE(0x6f7e590, internal_6f7e590, public_6f7e590);
extern "C" NAKED register_t __cdecl internal_6f7e590()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6f7e5a7
        xor eax, eax
        jmp public_6f7e5af
        public_6f7e5a7 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f7e5af : nop
        test eax, eax
        jge public_6f7e5b5
        xor eax, eax
        public_6f7e5b5 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f7e5e8
        push ebx
        public_6f7e5d5 : nop
        test ecx, ecx
        je public_6f7e5dd
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f7e5dd : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f7e5d5
        pop ebx
        public_6f7e5e8 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f7e590)
    }
}

#undef public_6f7e5a7
#undef public_6f7e5af
#undef public_6f7e5b5
#undef public_6f7e5d5
#undef public_6f7e5dd
#undef public_6f7e5e8
