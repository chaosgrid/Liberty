#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4bc70);

#define public_6f4bc90 _public_6f4bc90
#define public_6f4bca1 _public_6f4bca1
#define public_6f4bca8 _public_6f4bca8
#define public_6f4bcb0 _public_6f4bcb0
#define public_6f4bcb4 _public_6f4bcb4

PROC_DECLARE(0x6f4bc70, internal_6f4bc70, public_6f4bc70);
extern "C" NAKED register_t __cdecl internal_6f4bc70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        sub eax, ecx
        sub eax, 0x10
        sar eax, 4
        push esi
        js public_6f4bcb0
        mov esi, dword ptr ss : [esp+8]
        mov edx, eax
        shl edx, 4
        add edx, ecx
        public_6f4bc90 : nop
        mov ecx, dword ptr ds : [edx]
        cmp ecx, 0xFFFFFFF8
        je public_6f4bca1
        cmp ecx, 0xFFFFFFF7
        je public_6f4bca1
        cmp ecx, 0xFFFFFFF6
        jne public_6f4bca8
        public_6f4bca1 : nop
        mov ecx, esi
        dec esi
        test ecx, ecx
        je public_6f4bcb4
        public_6f4bca8 : nop
        dec eax
        sub edx, 0x10
        test eax, eax
        jge public_6f4bc90
        public_6f4bcb0 : nop
        xor eax, eax
        pop esi
        ret 
        public_6f4bcb4 : nop
        shl eax, 4
        sar eax, 4
        inc eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4bc70)
    }
}

#undef public_6f4bc90
#undef public_6f4bca1
#undef public_6f4bca8
#undef public_6f4bcb0
#undef public_6f4bcb4
