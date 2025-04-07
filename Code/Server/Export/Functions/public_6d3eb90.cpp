#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d3ebb0 _public_6d3ebb0
#define public_6d3ebcb _public_6d3ebcb
#define public_6d3ebcd _public_6d3ebcd
#define public_6d3ebd1 _public_6d3ebd1
#define public_6d3ebe5 _public_6d3ebe5

PROC_DECLARE(0x6d3eb90, internal_6d3eb90, public_6d3eb90);
extern "C" NAKED register_t __cdecl internal_6d3eb90()
{
    __asm
    {
        push ebx
        mov bx, word ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ds : [ecx+0x30]
        push edi
        mov edi, dword ptr ds : [ecx+0x34]
        mov ecx, edi
        sub ecx, esi
        sar ecx, 2
        test ecx, ecx
        jle public_6d3ebd1
        lea esp, ss:[esp]
        public_6d3ebb0 : nop
        mov eax, ecx
        cdq 
        sub eax, edx
        sar eax, 1
        cmp word ptr ds : [esi+eax*4+2], bx
        jae public_6d3ebcb
        or edx, 0xFFFFFFFF
        sub edx, eax
        lea esi, ds:[esi+eax*4+4]
        add ecx, edx
        jmp public_6d3ebcd
        public_6d3ebcb : nop
        mov ecx, eax
        public_6d3ebcd : nop
        test ecx, ecx
        jg public_6d3ebb0
        public_6d3ebd1 : nop
        cmp esi, edi
        je public_6d3ebe5
        cmp bx, word ptr ds : [esi]
        jb public_6d3ebe5
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        ret 4
        public_6d3ebe5 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d3eb90)
    }
}

#undef public_6d3ebb0
#undef public_6d3ebcb
#undef public_6d3ebcd
#undef public_6d3ebd1
#undef public_6d3ebe5
