#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6261117 _public_6261117
#define public_626111f _public_626111f
#define public_6261125 _public_6261125
#define public_6261144 _public_6261144
#define public_6261152 _public_6261152
#define public_626115c _public_626115c

PROC_DECLARE(0x6261100, internal_6261100, public_6261100);
extern "C" NAKED register_t __cdecl internal_6261100()
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
        jne public_6261117
        xor eax, eax
        jmp public_626111f
        public_6261117 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_626111f : nop
        test eax, eax
        jge public_6261125
        xor eax, eax
        public_6261125 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6391d9c
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_626115c
        public_6261144 : nop
        test ecx, ecx
        je public_6261152
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        public_6261152 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6261144
        public_626115c : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6261100)
    }
}

#undef public_6261117
#undef public_626111f
#undef public_6261125
#undef public_6261144
#undef public_6261152
#undef public_626115c
