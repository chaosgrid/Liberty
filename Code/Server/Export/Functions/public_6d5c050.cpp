#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c050);

#define public_6d5c062 _public_6d5c062
#define public_6d5c090 _public_6d5c090
#define public_6d5c09d _public_6d5c09d
#define public_6d5c0a5 _public_6d5c0a5
#define public_6d5c0af _public_6d5c0af
#define public_6d5c0b6 _public_6d5c0b6
#define public_6d5c0bc _public_6d5c0bc

PROC_DECLARE(0x6d5c050, internal_6d5c050, public_6d5c050);
extern "C" NAKED register_t __cdecl internal_6d5c050()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6d5c0bc
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6d5c062 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edi
        lea edx, ds:[esi+0xC]
        push edx
        call dword ptr ds : [eax+0x118]
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c09d
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        jne public_6d5c0b6
        lea ebx, ds:[ebx]
        public_6d5c090 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x11]
        test cl, cl
        je public_6d5c090
        jmp public_6d5c0b6
        public_6d5c09d : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6d5c0af
        public_6d5c0a5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6d5c0a5
        public_6d5c0af : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6d5c0b6
        mov esi, eax
        public_6d5c0b6 : nop
        cmp esi, dword ptr ds : [ebx+0xC]
        jne public_6d5c062
        pop edi
        public_6d5c0bc : nop
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5c050)
    }
}

#undef public_6d5c062
#undef public_6d5c090
#undef public_6d5c09d
#undef public_6d5c0a5
#undef public_6d5c0af
#undef public_6d5c0b6
#undef public_6d5c0bc
