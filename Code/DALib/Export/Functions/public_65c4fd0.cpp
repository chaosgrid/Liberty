#include "DALib-PCH.h"


#define public_65c4fe7 _public_65c4fe7
#define public_65c5004 _public_65c5004

PROC_DECLARE(0x65c4fd0, internal_65c4fd0, public_65c4fd0);
extern "C" NAKED register_t __cdecl internal_65c4fd0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x560]
        push edi
        xor edi, edi
        test eax, eax
        jbe public_65c5004
        push esi
        lea esi, ds:[ebx+0x460]
        public_65c4fe7 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        mov eax, dword ptr ds : [ebx+0x560]
        inc edi
        add esi, 4
        cmp edi, eax
        jb public_65c4fe7
        pop esi
        public_65c5004 : nop
        pop edi
        mov dword ptr ds : [ebx+0x560], 0
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65c4fd0)
    }
}

#undef public_65c4fe7
#undef public_65c5004
