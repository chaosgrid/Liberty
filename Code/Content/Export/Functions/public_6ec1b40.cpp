#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec1b81 _public_6ec1b81
#define public_6ec1b85 _public_6ec1b85
#define public_6ec1b99 _public_6ec1b99
#define public_6ec1b9d _public_6ec1b9d
#define public_6ec1ba5 _public_6ec1ba5

PROC_DECLARE(0x6ec1b40, internal_6ec1b40, public_6ec1b40);
extern "C" NAKED register_t __cdecl internal_6ec1b40()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        je public_6ec1ba5
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0xA8], eax
        je public_6ec1ba5
        cmp dword ptr ds : [edi], eax
        jne public_6ec1ba5
        mov eax, dword ptr ds : [esi+0xB0]
        mov ecx, eax
        and ecx, 0x3FFFFFFF
        je public_6ec1b81
        cmp dword ptr ds : [edi+8], eax
        je public_6ec1b85
        public_6ec1b81 : nop
        test ecx, ecx
        jne public_6ec1ba5
        public_6ec1b85 : nop
        mov esi, dword ptr ds : [esi+0xAC]
        mov eax, esi
        and eax, 0x3FFFFFFF
        je public_6ec1b99
        cmp dword ptr ds : [edi+4], esi
        je public_6ec1b9d
        public_6ec1b99 : nop
        test eax, eax
        jne public_6ec1ba5
        public_6ec1b9d : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 8
        public_6ec1ba5 : nop
        pop edi
        pop esi
        mov al, bl
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec1b40)
    }
}

#undef public_6ec1b81
#undef public_6ec1b85
#undef public_6ec1b99
#undef public_6ec1b9d
#undef public_6ec1ba5
