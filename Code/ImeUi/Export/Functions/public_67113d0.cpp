#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712f70);

#define public_67113e7 _public_67113e7
#define public_67113f5 _public_67113f5
#define public_6711408 _public_6711408
#define public_6711420 _public_6711420

PROC_DECLARE(0x67113d0, internal_67113d0, public_67113d0);
extern "C" NAKED register_t __cdecl internal_67113d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0x15]
        test al, al
        je public_67113e7
        push 0
        push 1
        call public_6712f70
        add esp, 8
        public_67113e7 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6711408
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        public_67113f5 : nop
        mov ecx, dword ptr ds : [esi+8]
        push ebx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x2C]
        mov esi, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp esi, eax
        jne public_67113f5
        pop ebx
        public_6711408 : nop
        mov al, byte ptr ds : [edi+0x15]
        pop edi
        pop esi
        test al, al
        push 1
        je public_6711420
        push 0
        call public_6712f70
        add esp, 8
        ret 4
        public_6711420 : nop
        push 1
        call public_6712f70
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x67113d0)
    }
}

#undef public_67113e7
#undef public_67113f5
#undef public_6711408
#undef public_6711420
