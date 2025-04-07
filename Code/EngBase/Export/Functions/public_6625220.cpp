#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625220);

#define public_6625234 _public_6625234
#define public_662523f _public_662523f
#define public_6625242 _public_6625242
#define public_6625247 _public_6625247

PROC_DECLARE(0x6625220, internal_6625220, public_6625220);
extern "C" NAKED register_t __cdecl internal_6625220()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6625247
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6625234 : nop
        cmp esi, dword ptr ds : [eax+0xC]
        jge public_662523f
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_6625242
        public_662523f : nop
        mov eax, dword ptr ds : [eax+8]
        public_6625242 : nop
        cmp eax, ecx
        jne public_6625234
        pop esi
        public_6625247 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6625220)
    }
}

#undef public_6625234
#undef public_662523f
#undef public_6625242
#undef public_6625247
