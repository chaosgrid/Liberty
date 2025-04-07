#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);

#define public_6ec1946 _public_6ec1946
#define public_6ec1948 _public_6ec1948

PROC_DECLARE(0x6ec1900, internal_6ec1900, public_6ec1900);
extern "C" NAKED register_t __cdecl internal_6ec1900()
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
        je public_6ec1946
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f15940
        test eax, 0x3FFFFFFF
        mov dword ptr ds : [esi+0xA8], eax
        je public_6ec1946
        cmp dword ptr ds : [edi], eax
        jne public_6ec1946
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+0xAC]
        jne public_6ec1946
        mov eax, dword ptr ds : [esi+0xB0]
        mov edx, dword ptr ds : [edi+8]
        cmp edx, eax
        mov al, 1
        je public_6ec1948
        public_6ec1946 : nop
        mov al, bl
        public_6ec1948 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ec1900)
    }
}

#undef public_6ec1946
#undef public_6ec1948
