#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb35b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb35c7 _public_6eb35c7
#define public_6eb35cf _public_6eb35cf
#define public_6eb35d5 _public_6eb35d5
#define public_6eb35f4 _public_6eb35f4
#define public_6eb35fc _public_6eb35fc
#define public_6eb3606 _public_6eb3606

PROC_DECLARE(0x6eb35b0, internal_6eb35b0, public_6eb35b0);
extern "C" NAKED register_t __cdecl internal_6eb35b0()
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
        jne public_6eb35c7
        xor eax, eax
        jmp public_6eb35cf
        public_6eb35c7 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6eb35cf : nop
        test eax, eax
        jge public_6eb35d5
        xor eax, eax
        public_6eb35d5 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6eb3606
        public_6eb35f4 : nop
        test ecx, ecx
        je public_6eb35fc
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        public_6eb35fc : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6eb35f4
        public_6eb3606 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb35b0)
    }
}

#undef public_6eb35c7
#undef public_6eb35cf
#undef public_6eb35d5
#undef public_6eb35f4
#undef public_6eb35fc
#undef public_6eb3606
