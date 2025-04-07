#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6266a37 _public_6266a37
#define public_6266a3e _public_6266a3e
#define public_6266a44 _public_6266a44
#define public_6266a60 _public_6266a60
#define public_6266a6a _public_6266a6a
#define public_6266a74 _public_6266a74

PROC_DECLARE(0x6266a20, internal_6266a20, public_6266a20);
extern "C" NAKED register_t __cdecl internal_6266a20()
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
        jne public_6266a37
        xor eax, eax
        jmp public_6266a3e
        public_6266a37 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 1
        public_6266a3e : nop
        test eax, eax
        jge public_6266a44
        xor eax, eax
        public_6266a44 : nop
        lea ecx, ds:[eax+eax]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6266a74
        nop 
        public_6266a60 : nop
        test ecx, ecx
        je public_6266a6a
        mov si, word ptr ds : [eax]
        mov word ptr ds : [ecx], si
        public_6266a6a : nop
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6266a60
        public_6266a74 : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6266a20)
    }
}

#undef public_6266a37
#undef public_6266a3e
#undef public_6266a44
#undef public_6266a60
#undef public_6266a6a
#undef public_6266a74
