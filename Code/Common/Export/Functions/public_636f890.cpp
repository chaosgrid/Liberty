#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636e1b0);
CLANG_FORWARD_PROC_SYMBOL(public_636ef40);
CLANG_FORWARD_PROC_SYMBOL(public_636efc0);
CLANG_FORWARD_PROC_SYMBOL(public_636f890);
CLANG_FORWARD_PROC_SYMBOL(public_63703c0);
CLANG_FORWARD_PROC_SYMBOL(public_6370660);

#define public_636f8a8 _public_636f8a8
#define public_636f8c0 _public_636f8c0
#define public_636f8c9 _public_636f8c9

PROC_DECLARE(0x636f890, internal_636f890, public_636f890);
extern "C" NAKED register_t __cdecl internal_636f890()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push esi
        push edi
        je public_636f8c9
        mov esi, dword ptr ds : [ebx+4]
        lea edi, ds:[ebx+4]
        add edi, 4
        test esi, esi
        je public_636f8c9
        public_636f8a8 : nop
        test dword ptr ds : [esi+0x14], 0x10000000
        jne public_636f8c0
        push esi
        call public_6370660
        push esi
        call public_636efc0
        add esp, 8
        public_636f8c0 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_636f8a8
        public_636f8c9 : nop
        call public_63703c0
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x50]
        and eax, 1
        shl eax, 0xB
        and ecx, 0xFFFFF7FF
        or eax, ecx
        mov dword ptr ds : [esi+0x50], eax
        push edx
        lea eax, ds:[esi+0x3C]
        push eax
        mov dword ptr ds : [esi+0x34], ebx
        call public_636e1b0
        push esi
        call public_636ef40
        add esp, 0xC
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x636f890)
    }
}

#undef public_636f8a8
#undef public_636f8c0
#undef public_636f8c9
