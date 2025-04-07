#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ac310);

#define public_62ac325 _public_62ac325
#define public_62ac343 _public_62ac343
#define public_62ac34c _public_62ac34c

PROC_DECLARE(0x62ac310, internal_62ac310, public_62ac310);
extern "C" NAKED register_t __cdecl internal_62ac310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_62ac34c
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_62ac325 : nop
        test eax, eax
        je public_62ac343
        mov esi, edx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edi+0xC], esi
        public_62ac343 : nop
        add eax, 0x10
        dec ecx
        jne public_62ac325
        pop edi
        pop esi
        pop ebx
        public_62ac34c : nop
        ret 0xC
        UNREACHABLE_TRAP(0x62ac310)
    }
}

#undef public_62ac325
#undef public_62ac343
#undef public_62ac34c
