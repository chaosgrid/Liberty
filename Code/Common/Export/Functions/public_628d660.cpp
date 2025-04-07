#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628d660);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_628d677 _public_628d677
#define public_628d67f _public_628d67f
#define public_628d685 _public_628d685
#define public_628d6a4 _public_628d6a4
#define public_628d6ac _public_628d6ac
#define public_628d6b6 _public_628d6b6

PROC_DECLARE(0x628d660, internal_628d660, public_628d660);
extern "C" NAKED register_t __cdecl internal_628d660()
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
        jne public_628d677
        xor eax, eax
        jmp public_628d67f
        public_628d677 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_628d67f : nop
        test eax, eax
        jge public_628d685
        xor eax, eax
        public_628d685 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_628d6b6
        public_628d6a4 : nop
        test ecx, ecx
        je public_628d6ac
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_628d6ac : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_628d6a4
        public_628d6b6 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628d660)
    }
}

#undef public_628d677
#undef public_628d67f
#undef public_628d685
#undef public_628d6a4
#undef public_628d6ac
#undef public_628d6b6
