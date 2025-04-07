#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dc80);
CLANG_FORWARD_PROC_SYMBOL(public_62aad30);

#define public_62b7fb0 _public_62b7fb0
#define public_62b7fc1 _public_62b7fc1
#define public_62b7fcb _public_62b7fcb

PROC_DECLARE(0x62b7fa0, internal_62b7fa0, public_62b7fa0);
extern "C" NAKED register_t __cdecl internal_62b7fa0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1D0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_62b7fcb
        public_62b7fb0 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp eax, 0xFFFFFFFF
        je public_62b7fc1
        push eax
        call public_627dc80
        add esp, 4
        public_62b7fc1 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0x1D0]
        jne public_62b7fb0
        public_62b7fcb : nop
        mov eax, dword ptr ds : [edi+0x1C0]
        push eax
        call public_627dc80
        add esp, 4
        mov ecx, edi
        pop edi
        pop esi
        jmp public_62aad30
        UNREACHABLE_TRAP(0x62b7fa0)
    }
}

#undef public_62b7fb0
#undef public_62b7fc1
#undef public_62b7fcb
