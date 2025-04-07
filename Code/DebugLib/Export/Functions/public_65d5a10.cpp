#include "DebugLib-PCH.h"


#define public_65d5a40 _public_65d5a40
#define public_65d5a42 _public_65d5a42
#define public_65d5a58 _public_65d5a58

PROC_DECLARE(0x65d5a10, internal_65d5a10, public_65d5a10);
extern "C" NAKED register_t __cdecl internal_65d5a10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, ebx
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov esi, dword ptr ss : [esp+0x10]
        repne scasb
        mov eax, dword ptr ds : [esi+0x2010]
        mov edx, dword ptr ds : [esi+0x2014]
        not ecx
        dec ecx
        cmp eax, edx
        jge public_65d5a40
        sub eax, edx
        add eax, 0x1000
        jmp public_65d5a42
        public_65d5a40 : nop
        sub eax, edx
        public_65d5a42 : nop
        mov edx, 0x1000
        lea edi, ds:[ecx+2]
        sub edx, eax
        cmp edx, edi
        jge public_65d5a58
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        public_65d5a58 : nop
        mov eax, dword ptr ds : [esi]
        push ecx
        push ebx
        push esi
        call dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [esi]
        push 2
/*FIXUP push offset public_65e320c @0x65d5a64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65e320c
        push esi
        call dword ptr ds : [ecx+0x14]
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d5a10)
    }
}

#undef public_65d5a40
#undef public_65d5a42
#undef public_65d5a58
