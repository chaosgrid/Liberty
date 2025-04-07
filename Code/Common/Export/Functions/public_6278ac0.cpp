#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62736c0);
CLANG_FORWARD_PROC_SYMBOL(public_6278ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6278ac7 _public_6278ac7
#define public_6278af1 _public_6278af1
#define public_6278afe _public_6278afe
#define public_6278b10 _public_6278b10
#define public_6278b1e _public_6278b1e

PROC_DECLARE(0x6278ac0, internal_6278ac0, public_6278ac0);
extern "C" NAKED register_t __cdecl internal_6278ac0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        push ebx
        public_6278ac7 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        je public_6278afe
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        cmp esi, eax
        jae public_6278afe
        mov ebx, dword ptr ds : [ecx+esi*4]
        test ebx, ebx
        je public_6278af1
        mov ecx, ebx
        call public_62736c0
        push ebx
        call public_6391d5a
        add esp, 4
        public_6278af1 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+esi*4], 0
        inc esi
        jmp public_6278ac7
        public_6278afe : nop
        mov edx, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        mov eax, edx
        cmp eax, edx
        pop ebx
        je public_6278b1e
        nop 
        lea esp, ss:[esp]
        public_6278b10 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], esi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6278b10
        public_6278b1e : nop
        mov dword ptr ds : [edi+8], ecx
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6278ac0)
    }
}

#undef public_6278ac7
#undef public_6278af1
#undef public_6278afe
#undef public_6278b10
#undef public_6278b1e
