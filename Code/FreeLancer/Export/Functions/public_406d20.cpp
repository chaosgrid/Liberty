#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41b030);

#define public_406d50 _public_406d50
#define public_406d5e _public_406d5e
#define public_406d70 _public_406d70
#define public_406d83 _public_406d83
#define public_406d90 _public_406d90
#define public_406d9e _public_406d9e
#define public_406da6 _public_406da6

PROC_DECLARE(0x406d20, internal_406d20, public_406d20);
extern "C" NAKED register_t __cdecl internal_406d20()
{
    __asm
    {
        push esi
        mov esi, ecx
        test byte ptr ds : [esi+0x50], 1
        je public_406da6
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_406d5e
        mov eax, dword ptr ds : [eax+8]
        push 0xEA60
        push eax
        call dword ptr ds : [public_5c601c]
        mov ecx, dword ptr ds : [esi+0x1C]
        add esp, 8
        test ecx, ecx
        je public_406d50
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_406d50 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        mov dword ptr ds : [esi+0x1C], 0
        call dword ptr ds : [eax+0x28]
        public_406d5e : nop
        mov eax, dword ptr ds : [esi+0x38]
        push edi
        mov edi, dword ptr ds : [esi+0x34]
        cmp edi, eax
        je public_406d83
        lea esp, ss:[esp]
        public_406d70 : nop
        push edi
        call public_41b030
        mov eax, dword ptr ds : [esi+0x38]
        add edi, 4
        add esp, 4
        cmp edi, eax
        jne public_406d70
        public_406d83 : nop
        mov edx, dword ptr ds : [esi+0x38]
        mov ecx, dword ptr ds : [esi+0x34]
        mov eax, edx
        cmp eax, edx
        je public_406d9e
        nop 
        public_406d90 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_406d90
        public_406d9e : nop
        mov dword ptr ds : [esi+0x38], ecx
        and byte ptr ds : [esi+0x50], 0xFC
        pop edi
        public_406da6 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x34]
        and byte ptr ds : [esi+0x50], 0xEB
        pop esi
        ret 
        UNREACHABLE_TRAP(0x406d20)
    }
}

#undef public_406d50
#undef public_406d5e
#undef public_406d70
#undef public_406d83
#undef public_406d90
#undef public_406d9e
#undef public_406da6
