#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62669d8 _public_62669d8
#define public_62669f2 _public_62669f2
#define public_62669fc _public_62669fc
#define public_6266a03 _public_6266a03

PROC_DECLARE(0x62669c0, internal_62669c0, public_62669c0);
extern "C" NAKED register_t __cdecl internal_62669c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], cl
        mov eax, edi
        jge public_62669d8
        xor eax, eax
        public_62669d8 : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [esi+4], eax
        jbe public_6266a03
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, edi
        push ebx
        public_62669f2 : nop
        test eax, eax
        je public_62669fc
        mov bx, word ptr ds : [edx]
        mov word ptr ds : [eax], bx
        public_62669fc : nop
        add eax, 2
        dec ecx
        jne public_62669f2
        pop ebx
        public_6266a03 : nop
        mov eax, dword ptr ds : [esi+4]
        lea eax, ds:[eax+edi*2]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        pop edi
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62669c0)
    }
}

#undef public_62669d8
#undef public_62669f2
#undef public_62669fc
#undef public_6266a03
