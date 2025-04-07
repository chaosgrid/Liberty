#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef85b0);

#define public_6ef85d3 _public_6ef85d3
#define public_6ef85d9 _public_6ef85d9
#define public_6ef85f7 _public_6ef85f7
#define public_6ef85fd _public_6ef85fd
#define public_6ef8603 _public_6ef8603

PROC_DECLARE(0x6ef85b0, internal_6ef85b0, public_6ef85b0);
extern "C" NAKED register_t __cdecl internal_6ef85b0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        test edx, edx
        je public_6ef8603
        xor eax, eax
        mov al, byte ptr ss : [esp+8]
        push edi
        mov edi, ecx
        cmp edx, 4
        jb public_6ef85f7
        neg ecx
        and ecx, 3
        je public_6ef85d9
        sub edx, ecx
        public_6ef85d3 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        jne public_6ef85d3
        public_6ef85d9 : nop
        mov ecx, eax
        shl eax, 8
        add eax, ecx
        mov ecx, eax
        shl eax, 0x10
        add eax, ecx
        mov ecx, edx
        and edx, 3
        shr ecx, 2
        je public_6ef85f7
        rep stosd
        test edx, edx
        je public_6ef85fd
        public_6ef85f7 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec edx
        jne public_6ef85f7
        public_6ef85fd : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ef8603 : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6ef85b0)
    }
}

#undef public_6ef85d3
#undef public_6ef85d9
#undef public_6ef85f7
#undef public_6ef85fd
#undef public_6ef8603
