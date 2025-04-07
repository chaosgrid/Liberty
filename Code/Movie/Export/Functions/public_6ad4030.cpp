#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad4030);

#define public_6ad4053 _public_6ad4053
#define public_6ad4059 _public_6ad4059
#define public_6ad4077 _public_6ad4077
#define public_6ad407d _public_6ad407d
#define public_6ad4083 _public_6ad4083

PROC_DECLARE(0x6ad4030, internal_6ad4030, public_6ad4030);
extern "C" NAKED register_t __cdecl internal_6ad4030()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        test edx, edx
        je public_6ad4083
        xor eax, eax
        mov al, byte ptr ss : [esp+8]
        push edi
        mov edi, ecx
        cmp edx, 4
        jb public_6ad4077
        neg ecx
        and ecx, 3
        je public_6ad4059
        sub edx, ecx
        public_6ad4053 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        jne public_6ad4053
        public_6ad4059 : nop
        mov ecx, eax
        shl eax, 8
        add eax, ecx
        mov ecx, eax
        shl eax, 0x10
        add eax, ecx
        mov ecx, edx
        and edx, 3
        shr ecx, 2
        je public_6ad4077
        rep stosd
        test edx, edx
        je public_6ad407d
        public_6ad4077 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec edx
        jne public_6ad4077
        public_6ad407d : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_6ad4083 : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x6ad4030)
    }
}

#undef public_6ad4053
#undef public_6ad4059
#undef public_6ad4077
#undef public_6ad407d
#undef public_6ad4083
