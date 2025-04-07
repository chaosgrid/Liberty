#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f029e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03990);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f029fa _public_6f029fa
#define public_6f02a02 _public_6f02a02
#define public_6f02a08 _public_6f02a08
#define public_6f02a23 _public_6f02a23
#define public_6f02a37 _public_6f02a37

PROC_DECLARE(0x6f029e0, internal_6f029e0, public_6f029e0);
extern "C" NAKED register_t __cdecl internal_6f029e0()
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
        jne public_6f029fa
        xor eax, eax
        jmp public_6f02a02
        public_6f029fa : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        public_6f02a02 : nop
        test eax, eax
        jge public_6f02a08
        xor eax, eax
        public_6f02a08 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov dword ptr ss : [ebp+4], eax
        mov ebx, dword ptr ds : [esi+8]
        mov esi, dword ptr ds : [esi+4]
        add esp, 4
        cmp esi, ebx
        mov edi, eax
        je public_6f02a37
        public_6f02a23 : nop
        push esi
        push edi
        call public_6f03990
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6f02a23
        public_6f02a37 : nop
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f029e0)
    }
}

#undef public_6f029fa
#undef public_6f02a02
#undef public_6f02a08
#undef public_6f02a23
#undef public_6f02a37
