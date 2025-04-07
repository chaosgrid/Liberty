#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fd2b0);

#define public_62fd2c3 _public_62fd2c3
#define public_62fd2ea _public_62fd2ea

PROC_DECLARE(0x62fd2b0, internal_62fd2b0, public_62fd2b0);
extern "C" NAKED register_t __cdecl internal_62fd2b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_62fd2ea
        push ebx
        push esi
        push edi
        public_62fd2c3 : nop
        mov esi, ecx
        mov ebx, dword ptr ds : [esi]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        add ecx, 0x10
        add eax, 0x10
        cmp ecx, edx
        mov dword ptr ds : [edi+0xC], esi
        jne public_62fd2c3
        pop edi
        pop esi
        pop ebx
        public_62fd2ea : nop
        ret 
        UNREACHABLE_TRAP(0x62fd2b0)
    }
}

#undef public_62fd2c3
#undef public_62fd2ea
