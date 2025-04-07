#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62995f0);

#define public_6299601 _public_6299601
#define public_629960d _public_629960d

PROC_DECLARE(0x62995f0, internal_62995f0, public_62995f0);
extern "C" NAKED register_t __cdecl internal_62995f0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0x54]
        lea eax, ds:[edi+0x54]
        xor esi, esi
        cmp ecx, 0xFFFFFFFF
        je public_629960d
        public_6299601 : nop
        mov ecx, dword ptr ds : [eax+0x34]
        add eax, 0x34
        inc esi
        cmp ecx, 0xFFFFFFFF
        jne public_6299601
        public_629960d : nop
        mov eax, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0xB8]
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0xB4]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62995f0)
    }
}

#undef public_6299601
#undef public_629960d
