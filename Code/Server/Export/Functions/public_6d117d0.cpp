#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d117e1 _public_6d117e1
#define public_6d117f6 _public_6d117f6
#define public_6d117ff _public_6d117ff
#define public_6d11803 _public_6d11803
#define public_6d11818 _public_6d11818
#define public_6d11829 _public_6d11829
#define public_6d11840 _public_6d11840

PROC_DECLARE(0x6d117d0, internal_6d117d0, public_6d117d0);
extern "C" NAKED register_t __cdecl internal_6d117d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d68324
        je public_6d11803
        public_6d117e1 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d117f6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d117ff
        public_6d117f6 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d117ff : nop
        test edi, edi
        jne public_6d117e1
        public_6d11803 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d11829
        public_6d11818 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d11818
        public_6d11829 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d11840
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d11840 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d117d0)
    }
}

#undef public_6d117e1
#undef public_6d117f6
#undef public_6d117ff
#undef public_6d11803
#undef public_6d11818
#undef public_6d11829
#undef public_6d11840
