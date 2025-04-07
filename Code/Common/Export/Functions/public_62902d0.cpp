#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62902d0);

#define public_62902e5 _public_62902e5
#define public_62902fd _public_62902fd
#define public_6290306 _public_6290306

PROC_DECLARE(0x62902d0, internal_62902d0, public_62902d0);
extern "C" NAKED register_t __cdecl internal_62902d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6290306
        mov edx, dword ptr ss : [esp+0xC]
        push ebx
        push esi
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_62902e5 : nop
        test eax, eax
        je public_62902fd
        mov esi, edx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], esi
        public_62902fd : nop
        add eax, 0xC
        dec ecx
        jne public_62902e5
        pop edi
        pop esi
        pop ebx
        public_6290306 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x62902d0)
    }
}

#undef public_62902e5
#undef public_62902fd
#undef public_6290306
