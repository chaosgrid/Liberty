#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6c06ab0 _public_6c06ab0
#define public_6c06abf _public_6c06abf

PROC_DECLARE(0x6c06a80, internal_6c06a80, public_6c06a80);
extern "C" NAKED register_t __cdecl internal_6c06a80()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        test ebx, ebx
        push ebp
        mov ebp, ecx
        je public_6c06abf
        push esi
        or ecx, 0xFFFFFFFF
        push edi
        xor eax, eax
        mov edi, ebx
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        inc esi
        push esi
        call public_6c09d26
        add esp, 4
        mov dword ptr ss : [ebp+0x20], eax
        mov ecx, ebx
        mov edx, eax
        lea ecx, ds:[ecx]
        public_6c06ab0 : nop
        mov al, byte ptr ds : [ecx]
        inc ecx
        mov byte ptr ds : [edx], al
        inc edx
        test al, al
        jne public_6c06ab0
        pop edi
        mov dword ptr ss : [ebp+0x24], esi
        pop esi
        public_6c06abf : nop
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c06a80)
    }
}

#undef public_6c06ab0
#undef public_6c06abf
