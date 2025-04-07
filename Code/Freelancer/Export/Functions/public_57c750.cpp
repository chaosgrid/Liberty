#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5760d0);
CLANG_FORWARD_PROC_SYMBOL(public_5760f0);
CLANG_FORWARD_PROC_SYMBOL(public_577b40);
CLANG_FORWARD_PROC_SYMBOL(public_57c750);

#define public_57c793 _public_57c793
#define public_57c798 _public_57c798
#define public_57c7bc _public_57c7bc

PROC_DECLARE(0x57c750, internal_57c750, public_57c750);
extern "C" NAKED register_t __cdecl internal_57c750()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov dl, byte ptr ds : [esi+0x6C]
        push edi
        or dl, 3
        lea edi, ds:[esi+0x498]
        push edi
        mov byte ptr ds : [esi+0x6C], dl
        call public_577b40
        add esp, 4
        push 1
        mov ecx, edi
        call public_5760d0
        push 2
        mov ecx, edi
        call public_5760d0
        mov al, byte ptr ds : [esi+0x4C0]
        test al, al
        mov ecx, edi
        push 0xF
        je public_57c793
        call public_5760f0
        jmp public_57c798
        public_57c793 : nop
        call public_5760d0
        public_57c798 : nop
        mov eax, dword ptr ds : [esi+0x52C]
        test eax, eax
        je public_57c7bc
        call dword ptr ds : [public_5c6e80]
        test eax, eax
        je public_57c7bc
        mov ecx, dword ptr ds : [esi+0x52C]
        mov edx, dword ptr ds : [eax]
        push 0
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x2C]
        public_57c7bc : nop
        mov edx, dword ptr ds : [esi]
        pop edi
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [edx+0xCC]
        UNREACHABLE_TRAP(0x57c750)
    }
}

#undef public_57c793
#undef public_57c798
#undef public_57c7bc
