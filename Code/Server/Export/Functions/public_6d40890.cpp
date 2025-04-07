#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40890);

#define public_6d408a8 _public_6d408a8
#define public_6d408d5 _public_6d408d5
#define public_6d408db _public_6d408db
#define public_6d408e0 _public_6d408e0
#define public_6d408ff _public_6d408ff

PROC_DECLARE(0x6d40890, internal_6d40890, public_6d40890);
extern "C" NAKED register_t __cdecl internal_6d40890()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        sub esi, ebx
        sar esi, 2
        test esi, esi
        mov dword ptr ss : [esp+0xC], ebx
        jle public_6d408e0
        push edi
        public_6d408a8 : nop
        mov eax, esi
        cdq 
        sub eax, edx
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x18]
        sar edi, 1
        push eax
        lea ebx, ds:[ebx+edi*4]
        push ebx
        call dword ptr ss : [esp+0x24]
        add esp, 8
        test al, al
        je public_6d408d5
        or ecx, 0xFFFFFFFF
        add ebx, 4
        sub ecx, edi
        mov dword ptr ss : [esp+0x10], ebx
        add esi, ecx
        jmp public_6d408db
        public_6d408d5 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov esi, edi
        public_6d408db : nop
        test esi, esi
        jg public_6d408a8
        pop edi
        public_6d408e0 : nop
        cmp ebx, dword ptr ss : [esp+0x10]
        je public_6d408ff
        mov edx, dword ptr ss : [esp+0x14]
        push ebx
        push edx
        call dword ptr ss : [esp+0x20]
        add esp, 8
        test al, al
        jne public_6d408ff
        pop esi
        mov eax, 1
        pop ebx
        ret 
        public_6d408ff : nop
        pop esi
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d40890)
    }
}

#undef public_6d408a8
#undef public_6d408d5
#undef public_6d408db
#undef public_6d408e0
#undef public_6d408ff
