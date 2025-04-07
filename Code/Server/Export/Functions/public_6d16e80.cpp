#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16e91 _public_6d16e91
#define public_6d16ea6 _public_6d16ea6
#define public_6d16eaf _public_6d16eaf
#define public_6d16eb3 _public_6d16eb3
#define public_6d16ec8 _public_6d16ec8
#define public_6d16ed9 _public_6d16ed9
#define public_6d16ef0 _public_6d16ef0

PROC_DECLARE(0x6d16e80, internal_6d16e80, public_6d16e80);
extern "C" NAKED register_t __cdecl internal_6d16e80()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        mov dword ptr ds : [esi], offset public_6d68338
        je public_6d16eb3
        public_6d16e91 : nop
        mov cl, byte ptr ds : [esi+0xC]
        test cl, cl
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        je public_6d16ea6
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [esi+0x10], eax
        jmp public_6d16eaf
        public_6d16ea6 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d16eaf : nop
        test edi, edi
        jne public_6d16e91
        public_6d16eb3 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        mov dword ptr ds : [esi+8], 0
        mov dword ptr ds : [esi+4], 0
        je public_6d16ed9
        public_6d16ec8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        call public_6d5ffb0
        add esp, 4
        test edi, edi
        jne public_6d16ec8
        public_6d16ed9 : nop
        test byte ptr ss : [esp+0xC], 1
        mov dword ptr ds : [esi+0x10], 0
        je public_6d16ef0
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d16ef0 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16e80)
    }
}

#undef public_6d16e91
#undef public_6d16ea6
#undef public_6d16eaf
#undef public_6d16eb3
#undef public_6d16ec8
#undef public_6d16ed9
#undef public_6d16ef0
