#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b95d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b95e4 _public_62b95e4
#define public_62b9611 _public_62b9611
#define public_62b961a _public_62b961a
#define public_62b963d _public_62b963d

PROC_DECLARE(0x62b95d0, internal_62b95d0, public_62b95d0);
extern "C" NAKED register_t __cdecl internal_62b95d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov ebp, ecx
        je public_62b963d
        push ebx
        push esi
        xor ebx, ebx
        public_62b95e4 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+0xC]
        cmp eax, ebx
        je public_62b961a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62b9611
        cmp cl, 0xFF
        je public_62b9611
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62b961a
        public_62b9611 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62b961a : nop
        push esi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        call public_6391d5a
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 4
        dec ecx
        cmp edi, eax
        mov dword ptr ss : [ebp+8], ecx
        jne public_62b95e4
        pop esi
        pop ebx
        public_62b963d : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x62b95d0)
    }
}

#undef public_62b95e4
#undef public_62b9611
#undef public_62b961a
#undef public_62b963d
