#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6268fca _public_6268fca
#define public_6268fd2 _public_6268fd2
#define public_6268fd8 _public_6268fd8
#define public_6268ff3 _public_6268ff3
#define public_6269007 _public_6269007

PROC_DECLARE(0x6268fb0, internal_6268fb0, public_6268fb0);
extern "C" NAKED register_t __cdecl internal_6268fb0()
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
        jne public_6268fca
        xor eax, eax
        jmp public_6268fd2
        public_6268fca : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 5
        public_6268fd2 : nop
        test eax, eax
        jge public_6268fd8
        xor eax, eax
        public_6268fd8 : nop
        shl eax, 5
        push eax
        call public_6391d9c
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6269007
        public_6268ff3 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_6268ff3
        public_6269007 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6268fb0)
    }
}

#undef public_6268fca
#undef public_6268fd2
#undef public_6268fd8
#undef public_6268ff3
#undef public_6269007
