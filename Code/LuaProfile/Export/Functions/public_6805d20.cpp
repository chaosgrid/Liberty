#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805d20);

#define public_6805d36 _public_6805d36
#define public_6805d38 _public_6805d38
#define public_6805d58 _public_6805d58
#define public_6805d5c _public_6805d5c
#define public_6805d61 _public_6805d61
#define public_6805d70 _public_6805d70
#define public_6805d78 _public_6805d78

PROC_DECLARE(0x6805d20, internal_6805d20, public_6805d20);
extern "C" NAKED register_t __cdecl internal_6805d20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [edx]
        push ebx
        push ebp
        push esi
        xor ebp, ebp
        test ecx, ecx
        push edi
        je public_6805d70
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, edx
        public_6805d36 : nop
        mov esi, eax
        public_6805d38 : nop
        mov bl, byte ptr ds : [ecx]
        mov dl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6805d5c
        test dl, dl
        je public_6805d58
        mov bl, byte ptr ds : [ecx+1]
        mov dl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6805d5c
        add ecx, 2
        add esi, 2
        test dl, dl
        jne public_6805d38
        public_6805d58 : nop
        xor ecx, ecx
        jmp public_6805d61
        public_6805d5c : nop
        sbb ecx, ecx
        sbb ecx, 0xFFFFFFFF
        public_6805d61 : nop
        test ecx, ecx
        je public_6805d78
        mov ecx, dword ptr ds : [edi+4]
        add edi, 4
        inc ebp
        test ecx, ecx
        jne public_6805d36
        public_6805d70 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 
        public_6805d78 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6805d20)
    }
}

#undef public_6805d36
#undef public_6805d38
#undef public_6805d58
#undef public_6805d5c
#undef public_6805d61
#undef public_6805d70
#undef public_6805d78
