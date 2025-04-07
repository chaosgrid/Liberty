#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb10);

#define public_65ddb33 _public_65ddb33
#define public_65ddb39 _public_65ddb39
#define public_65ddb57 _public_65ddb57
#define public_65ddb5d _public_65ddb5d
#define public_65ddb63 _public_65ddb63

PROC_DECLARE(0x65ddb10, internal_65ddb10, public_65ddb10);
extern "C" NAKED register_t __cdecl internal_65ddb10()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        test edx, edx
        je public_65ddb63
        xor eax, eax
        mov al, byte ptr ss : [esp+8]
        push edi
        mov edi, ecx
        cmp edx, 4
        jb public_65ddb57
        neg ecx
        and ecx, 3
        je public_65ddb39
        sub edx, ecx
        public_65ddb33 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec ecx
        jne public_65ddb33
        public_65ddb39 : nop
        mov ecx, eax
        shl eax, 8
        add eax, ecx
        mov ecx, eax
        shl eax, 0x10
        add eax, ecx
        mov ecx, edx
        and edx, 3
        shr ecx, 2
        je public_65ddb57
        rep stosd
        test edx, edx
        je public_65ddb5d
        public_65ddb57 : nop
        mov byte ptr ds : [edi], al
        inc edi
        dec edx
        jne public_65ddb57
        public_65ddb5d : nop
        mov eax, dword ptr ss : [esp+8]
        pop edi
        ret 
        public_65ddb63 : nop
        mov eax, dword ptr ss : [esp+4]
        ret 
        UNREACHABLE_TRAP(0x65ddb10)
    }
}

#undef public_65ddb33
#undef public_65ddb39
#undef public_65ddb57
#undef public_65ddb5d
#undef public_65ddb63
