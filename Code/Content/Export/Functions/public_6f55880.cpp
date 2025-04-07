#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f55880);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f55897 _public_6f55897
#define public_6f5589f _public_6f5589f
#define public_6f558a5 _public_6f558a5
#define public_6f558c4 _public_6f558c4
#define public_6f558d2 _public_6f558d2
#define public_6f558dc _public_6f558dc

PROC_DECLARE(0x6f55880, internal_6f55880, public_6f55880);
extern "C" NAKED register_t __cdecl internal_6f55880()
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
        jne public_6f55897
        xor eax, eax
        jmp public_6f5589f
        public_6f55897 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6f5589f : nop
        test eax, eax
        jge public_6f558a5
        xor eax, eax
        public_6f558a5 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f558dc
        public_6f558c4 : nop
        test ecx, ecx
        je public_6f558d2
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6f558d2 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6f558c4
        public_6f558dc : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f55880)
    }
}

#undef public_6f55897
#undef public_6f5589f
#undef public_6f558a5
#undef public_6f558c4
#undef public_6f558d2
#undef public_6f558dc
