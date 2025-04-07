#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f54be0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d40);

#define public_6f54bf1 _public_6f54bf1
#define public_6f54c1f _public_6f54c1f
#define public_6f54c2c _public_6f54c2c
#define public_6f54c32 _public_6f54c32
#define public_6f54c41 _public_6f54c41

PROC_DECLARE(0x6f54be0, internal_6f54be0, public_6f54be0);
extern "C" NAKED register_t __cdecl internal_6f54be0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x2C
        push edi
        mov edi, 1
        jne public_6f54c32
        public_6f54bf1 : nop
        push esi
        call public_6f52920
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, 0x3B
        je public_6f54c32
        cmp eax, 0x7D
        je public_6f54c32
        push esi
        call public_6f54d40
        add esp, 4
        inc edi
        mov eax, edi
        and eax, 0x8000001F
        jns public_6f54c1f
        dec eax
        or eax, 0xFFFFFFE0
        inc eax
        public_6f54c1f : nop
        jne public_6f54c2c
        push 0x20
        push esi
        call public_6f54c50
        add esp, 8
        public_6f54c2c : nop
        cmp dword ptr ds : [esi+4], 0x2C
        je public_6f54bf1
        public_6f54c32 : nop
        mov ecx, edi
        and ecx, 0x8000001F
        jns public_6f54c41
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6f54c41 : nop
        push ecx
        push esi
        call public_6f54c50
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54be0)
    }
}

#undef public_6f54bf1
#undef public_6f54c1f
#undef public_6f54c2c
#undef public_6f54c32
#undef public_6f54c41
