#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66173e0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_66173f7 _public_66173f7
#define public_66173ff _public_66173ff
#define public_6617405 _public_6617405
#define public_6617424 _public_6617424
#define public_661742c _public_661742c
#define public_6617436 _public_6617436

PROC_DECLARE(0x66173e0, internal_66173e0, public_66173e0);
extern "C" NAKED register_t __cdecl internal_66173e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [esi]
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_66173f7
        xor eax, eax
        jmp public_66173ff
        public_66173f7 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_66173ff : nop
        test eax, eax
        jge public_6617405
        xor eax, eax
        public_6617405 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_66281dc
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6617436
        public_6617424 : nop
        test ecx, ecx
        je public_661742c
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_661742c : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6617424
        public_6617436 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66173e0)
    }
}

#undef public_66173f7
#undef public_66173ff
#undef public_6617405
#undef public_6617424
#undef public_661742c
#undef public_6617436
