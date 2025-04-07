#include "Common-PCH.h"


#define public_6295f0a _public_6295f0a
#define public_6295f15 _public_6295f15
#define public_6295f17 _public_6295f17
#define public_6295f50 _public_6295f50

PROC_DECLARE(0x6295ee0, internal_6295ee0, public_6295ee0);
extern "C" NAKED register_t __cdecl internal_6295ee0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6295f0a
        mov ecx, dword ptr ds : [esi+0x3C]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+8], edx
        jne public_6295f15
        public_6295f0a : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov bl, byte ptr ds : [ecx+0x84]
        jmp public_6295f17
        public_6295f15 : nop
        mov bl, 1
        public_6295f17 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        je public_6295f50
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x10]
        test al, al
        jne public_6295f50
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        jne public_6295f50
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x54]
        test al, al
        je public_6295f50
        test bl, bl
        je public_6295f50
        pop esi
        mov eax, 1
        pop ebx
        pop ecx
        ret 
        public_6295f50 : nop
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6295ee0)
    }
}

#undef public_6295f0a
#undef public_6295f15
#undef public_6295f17
#undef public_6295f50
