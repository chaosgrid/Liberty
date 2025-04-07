#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c010);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3c027 _public_6f3c027
#define public_6f3c02f _public_6f3c02f
#define public_6f3c035 _public_6f3c035
#define public_6f3c055 _public_6f3c055
#define public_6f3c05d _public_6f3c05d
#define public_6f3c068 _public_6f3c068

PROC_DECLARE(0x6f3c010, internal_6f3c010, public_6f3c010);
extern "C" NAKED register_t __cdecl internal_6f3c010()
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
        jne public_6f3c027
        xor eax, eax
        jmp public_6f3c02f
        public_6f3c027 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        public_6f3c02f : nop
        test eax, eax
        jge public_6f3c035
        xor eax, eax
        public_6f3c035 : nop
        lea ecx, ds:[eax*4]
        push ecx
        call public_6f57e9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6f3c068
        push ebx
        public_6f3c055 : nop
        test ecx, ecx
        je public_6f3c05d
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        public_6f3c05d : nop
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f3c055
        pop ebx
        public_6f3c068 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov dl, byte ptr ds : [esi+0x10]
        mov byte ptr ds : [edi+0x10], dl
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f3c010)
    }
}

#undef public_6f3c027
#undef public_6f3c02f
#undef public_6f3c035
#undef public_6f3c055
#undef public_6f3c05d
#undef public_6f3c068
