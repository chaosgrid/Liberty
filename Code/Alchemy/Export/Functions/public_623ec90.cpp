#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ec90);
CLANG_FORWARD_PROC_SYMBOL(public_623edd0);

#define public_623eca3 _public_623eca3
#define public_623ecc2 _public_623ecc2
#define public_623eccc _public_623eccc

PROC_DECLARE(0x623ec90, internal_623ec90, public_623ec90);
extern "C" NAKED register_t __cdecl internal_623ec90()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x1C]
        lea ecx, ds:[esi+0x1C]
        test edi, edi
        jne public_623eca3
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_623eca3 : nop
        dec dword ptr ds : [esi+0x10]
        call public_623edd0
        mov dword ptr ds : [edi], 0
        mov eax, dword ptr ds : [esi+0x18]
        test eax, eax
        je public_623ecc2
        mov dword ptr ds : [eax], edi
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+4], eax
        jmp public_623eccc
        public_623ecc2 : nop
        mov dword ptr ds : [edi+4], 0
        mov dword ptr ds : [esi+0x14], edi
        public_623eccc : nop
        mov dword ptr ds : [esi+0x18], edi
        mov eax, edi
        mov edi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        sub eax, edi
        pop edi
        shr eax, 3
        imul eax, dword ptr ds : [esi+8]
        add eax, ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x623ec90)
    }
}

#undef public_623eca3
#undef public_623ecc2
#undef public_623eccc
