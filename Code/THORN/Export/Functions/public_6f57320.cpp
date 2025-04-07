#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b740);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57320);

#define public_6f57334 _public_6f57334
#define public_6f57349 _public_6f57349
#define public_6f57362 _public_6f57362

PROC_DECLARE(0x6f57320, internal_6f57320, public_6f57320);
extern "C" NAKED register_t __cdecl internal_6f57320()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [ebp+4]
        xor ebx, ebx
        test eax, eax
        jle public_6f57362
        push esi
        push edi
        lea esi, ss:[ebp+8]
        public_6f57334 : nop
        mov edi, dword ptr ds : [esi+4]
        cmp edi, 0xFFFFFFFF
        jne public_6f57349
/*FIXUP push offset public_6f61cc0 @0x6f5733c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61cc0
        call public_6f4c7f0
        add esp, 4
        public_6f57349 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        push eax
        call public_6f4b740
        mov eax, dword ptr ss : [ebp+4]
        add esp, 8
        inc ebx
        add esi, 8
        cmp ebx, eax
        jl public_6f57334
        pop edi
        pop esi
        public_6f57362 : nop
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f57320)
    }
}

#undef public_6f57334
#undef public_6f57349
#undef public_6f57362
