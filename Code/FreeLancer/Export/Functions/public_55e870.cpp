#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e870);

#define public_55e885 _public_55e885
#define public_55e89d _public_55e89d
#define public_55e8a6 _public_55e8a6

PROC_DECLARE(0x55e870, internal_55e870, public_55e870);
extern "C" NAKED register_t __cdecl internal_55e870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_55e8a6
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_55e885 : nop
        test eax, eax
        je public_55e89d
        mov esi, edx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_55e89d : nop
        add eax, 0xC
        dec ecx
        jne public_55e885
        pop edi
        pop esi
        pop ebx
        public_55e8a6 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x55e870)
    }
}

#undef public_55e885
#undef public_55e89d
#undef public_55e8a6
