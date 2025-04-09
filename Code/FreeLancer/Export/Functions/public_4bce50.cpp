#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_55e170);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_4bce70 _public_4bce70
#define public_4bce82 _public_4bce82
#define public_4bce91 _public_4bce91
#define public_4bce94 _public_4bce94

PROC_DECLARE(0x4bce50, internal_4bce50, public_4bce50);
extern "C" NAKED register_t __cdecl internal_4bce50()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x32C]
        mov ecx, esi
        call public_55e280
        test al, al
        jne public_4bce94
        test edi, edi
        je public_4bce91
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_4bce82
        public_4bce70 : nop
        mov esi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        test esi, esi
        mov eax, esi
        jne public_4bce70
        public_4bce82 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [edi]
        push 1
        mov ecx, edi
        call dword ptr ds : [edx]
        public_4bce91 : nop
        pop edi
        pop esi
        ret 
        public_4bce94 : nop
        mov ecx, edi
        call public_5a17b0
        pop edi
        mov ecx, esi
        pop esi
        jmp public_55e170
        UNREACHABLE_TRAP(0x4bce50)
    }
}

#undef public_4bce70
#undef public_4bce82
#undef public_4bce91
#undef public_4bce94
