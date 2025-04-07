#include "Content-PCH.h"


#define public_6f4d030 _public_6f4d030
#define public_6f4d055 _public_6f4d055
#define public_6f4d062 _public_6f4d062
#define public_6f4d070 _public_6f4d070
#define public_6f4d07a _public_6f4d07a
#define public_6f4d081 _public_6f4d081
#define public_6f4d08b _public_6f4d08b

PROC_DECLARE(0x6f4d010, internal_6f4d010, public_6f4d010);
extern "C" NAKED register_t __cdecl internal_6f4d010()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x210]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f4d08b
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        lea ebx, ds:[ebx]
        public_6f4d030 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [edi]
        push ebx
        push ebp
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0xA8]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f4d062
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6f4d081
        public_6f4d055 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6f4d055
        jmp public_6f4d081
        public_6f4d062 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6f4d07a
        lea ebx, ds:[ebx]
        public_6f4d070 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6f4d070
        public_6f4d07a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6f4d081
        mov esi, eax
        public_6f4d081 : nop
        cmp esi, dword ptr ds : [edi+0x210]
        jne public_6f4d030
        pop ebp
        pop ebx
        public_6f4d08b : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f4d010)
    }
}

#undef public_6f4d030
#undef public_6f4d055
#undef public_6f4d062
#undef public_6f4d070
#undef public_6f4d07a
#undef public_6f4d081
#undef public_6f4d08b
