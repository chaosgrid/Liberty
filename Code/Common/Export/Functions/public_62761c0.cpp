#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62761c0);

#define public_62761d0 _public_62761d0
#define public_62761de _public_62761de
#define public_62761e9 _public_62761e9
#define public_6276210 _public_6276210
#define public_6276213 _public_6276213
#define public_6276240 _public_6276240

PROC_DECLARE(0x62761c0, internal_62761c0, public_62761c0);
extern "C" NAKED register_t __cdecl internal_62761c0()
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
        public_62761d0 : nop
        mov ecx, dword ptr ds : [esi+0x168]
        test ecx, ecx
        jne public_62761de
        xor eax, eax
        jmp public_62761e9
        public_62761de : nop
        mov eax, dword ptr ds : [esi+0x16C]
        sub eax, ecx
        sar eax, 2
        public_62761e9 : nop
        cmp edi, eax
        jge public_6276213
        mov eax, dword ptr ds : [esi+0x168]
        mov eax, dword ptr ds : [eax+edi*4]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebp
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_6276210
        mov edx, dword ptr ds : [esi+0x168]
        mov ebx, dword ptr ds : [edx+edi*4]
        public_6276210 : nop
        inc edi
        jmp public_62761d0
        public_6276213 : nop
        test ebx, ebx
        jne public_6276240
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        push ebp
        push edx
        push 0x5A8
/*FIXUP push offset public_639a188 @0x6276226*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
        mov eax, 0x100001
/*FIXUP push offset public_639a0e0 @0x6276230*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a0e0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x1C
        public_6276240 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x62761c0)
    }
}

#undef public_62761d0
#undef public_62761de
#undef public_62761e9
#undef public_6276210
#undef public_6276213
#undef public_6276240
