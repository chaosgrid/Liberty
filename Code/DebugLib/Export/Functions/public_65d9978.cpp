#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d911f);
CLANG_FORWARD_PROC_SYMBOL(public_65d9978);

#define public_65d9991 _public_65d9991
#define public_65d999c _public_65d999c
#define public_65d99a9 _public_65d99a9

PROC_DECLARE(0x65d9978, internal_65d9978, public_65d9978);
extern "C" NAKED register_t __cdecl internal_65d9978()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+0xC]
        dec dword ptr ds : [ecx+4]
        js public_65d9991
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ss : [ebp+8]
        mov byte ptr ds : [edx], al
        inc dword ptr ds : [ecx]
        movzx eax, al
        jmp public_65d999c
        public_65d9991 : nop
        push ecx
        push dword ptr ss : [ebp+8]
        call public_65d911f
        pop ecx
        pop ecx
        public_65d999c : nop
        cmp eax, 0xFFFFFFFF
        mov eax, dword ptr ss : [ebp+0x10]
        jne public_65d99a9
        or dword ptr ds : [eax], 0xFFFFFFFF
        pop ebp
        ret 
        public_65d99a9 : nop
        inc dword ptr ds : [eax]
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65d9978)
    }
}

#undef public_65d9991
#undef public_65d999c
#undef public_65d99a9
