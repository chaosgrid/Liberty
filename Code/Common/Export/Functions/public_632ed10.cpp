#include "Common-PCH.h"


#define public_632ed21 _public_632ed21
#define public_632ed30 _public_632ed30

PROC_DECLARE(0x632ed10, internal_632ed10, public_632ed10);
extern "C" NAKED register_t __cdecl internal_632ed10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push edi
        mov edi, ecx
        jbe public_632ed30
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_632ed21 : nop
        mov eax, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        add esi, 0x14
        dec ebx
        jne public_632ed21
        pop esi
        public_632ed30 : nop
        pop edi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x632ed10)
    }
}

#undef public_632ed21
#undef public_632ed30
