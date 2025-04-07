#include "Common-PCH.h"


#define public_6275fb0 _public_6275fb0
#define public_6275fbe _public_6275fbe
#define public_6275fc9 _public_6275fc9
#define public_6275ff0 _public_6275ff0
#define public_6275ff3 _public_6275ff3
#define public_6276020 _public_6276020

PROC_DECLARE(0x6275fa0, internal_6275fa0, public_6275fa0);
extern "C" NAKED register_t __cdecl internal_6275fa0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        xor ebx, ebx
        mov esi, ecx
        xor edi, edi
        mov edi, edi
        public_6275fb0 : nop
        mov ecx, dword ptr ds : [esi+0x138]
        test ecx, ecx
        jne public_6275fbe
        xor eax, eax
        jmp public_6275fc9
        public_6275fbe : nop
        mov eax, dword ptr ds : [esi+0x13C]
        sub eax, ecx
        sar eax, 2
        public_6275fc9 : nop
        cmp edi, eax
        jge public_6275ff3
        mov eax, dword ptr ds : [esi+0x138]
        mov eax, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6275ff0
        mov edx, dword ptr ds : [esi+0x138]
        mov ebx, dword ptr ds : [edx+edi*4]
        public_6275ff0 : nop
        inc edi
        jmp public_6275fb0
        public_6275ff3 : nop
        test ebx, ebx
        jne public_6276020
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ebp
        push edx
        push 0x557
/*FIXUP push offset public_639a188 @0x6276006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100002
/*FIXUP push offset public_639a940 @0x6276010*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a940
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6276020 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6275fa0)
    }
}

#undef public_6275fb0
#undef public_6275fbe
#undef public_6275fc9
#undef public_6275ff0
#undef public_6275ff3
#undef public_6276020
