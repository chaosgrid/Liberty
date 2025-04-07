#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d430d0);

#define public_6d430e4 _public_6d430e4
#define public_6d43111 _public_6d43111
#define public_6d43117 _public_6d43117
#define public_6d4311c _public_6d4311c

PROC_DECLARE(0x6d430d0, internal_6d430d0, public_6d430d0);
extern "C" NAKED register_t __cdecl internal_6d430d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        sub edi, ebx
        sar edi, 2
        test edi, edi
        jle public_6d4311c
        push esi
        public_6d430e4 : nop
        mov eax, edi
        cdq 
        sub eax, edx
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        sar esi, 1
        push eax
        lea ebx, ds:[ebx+esi*4]
        push ebx
        call dword ptr ss : [esp+0x24]
        add esp, 8
        test al, al
        je public_6d43111
        or ecx, 0xFFFFFFFF
        add ebx, 4
        sub ecx, esi
        mov dword ptr ss : [esp+0x10], ebx
        add edi, ecx
        jmp public_6d43117
        public_6d43111 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov edi, esi
        public_6d43117 : nop
        test edi, edi
        jg public_6d430e4
        pop esi
        public_6d4311c : nop
        pop edi
        mov eax, ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d430d0)
    }
}

#undef public_6d430e4
#undef public_6d43111
#undef public_6d43117
#undef public_6d4311c
