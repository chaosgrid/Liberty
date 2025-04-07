#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631d530);
CLANG_FORWARD_PROC_SYMBOL(public_631d580);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_631d59a _public_631d59a
#define public_631d5a2 _public_631d5a2
#define public_631d5a8 _public_631d5a8
#define public_631d5c7 _public_631d5c7
#define public_631d5db _public_631d5db

PROC_DECLARE(0x631d580, internal_631d580, public_631d580);
extern "C" NAKED register_t __cdecl internal_631d580()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov al, byte ptr ds : [esi]
        mov ebp, ecx
        mov byte ptr ss : [ebp], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        jne public_631d59a
        xor eax, eax
        jmp public_631d5a2
        public_631d59a : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_631d5a2 : nop
        test eax, eax
        jge public_631d5a8
        xor eax, eax
        public_631d5a8 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6391d9c
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_631d5db
        public_631d5c7 : nop
        push esi
        push edi
        call public_631d530
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_631d5c7
        public_631d5db : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x631d580)
    }
}

#undef public_631d59a
#undef public_631d5a2
#undef public_631d5a8
#undef public_631d5c7
#undef public_631d5db
